#define BUTTON_PIN 2
#define MOSFET_PIN 3
#define POWER_LED_PIN 4
#define STATUS_LED_PIN 5
#define PIR_PIN 7


bool powerState = false;
bool buttonPressed = false;
unsigned long lastMotionTime = 0;
unsigned long autoOffTimer = 5000; // 5 seconds

void setup() {
  Serial.begin(9600);
  Serial.println("Power Saving Motion Sensor Circuit");
  
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  pinMode(MOSFET_PIN, OUTPUT);
  pinMode(POWER_LED_PIN, OUTPUT);
  pinMode(STATUS_LED_PIN, OUTPUT);
  pinMode(PIR_PIN, INPUT);
  
  digitalWrite(MOSFET_PIN, LOW);
  digitalWrite(POWER_LED_PIN, LOW);
  digitalWrite(STATUS_LED_PIN, LOW);
  
  Serial.println("System Ready!");
}

void loop() {
  
  bool motionDetected = digitalRead(PIR_PIN) == HIGH;
  
  if (digitalRead(BUTTON_PIN) == LOW && !buttonPressed) {
    buttonPressed = true;
    powerState = !powerState;
    lastMotionTime = millis(); // Reset timer when button pressed
    Serial.println(powerState ? "Manual: POWER ON" : "Manual: POWER OFF");
  }
  
  if (digitalRead(BUTTON_PIN) == HIGH) {
    buttonPressed = false;
  }
  
  if (motionDetected) {
    lastMotionTime = millis();
    if (!powerState) {
      powerState = true;
      Serial.println("Auto: POWER ON - Motion Detected");
    }
  }
  
  if (powerState && (millis() - lastMotionTime > autoOffTimer)) {
    powerState = false;
    Serial.println("Auto: POWER OFF - No Motion (5 seconds)");
  }
  
  digitalWrite(MOSFET_PIN, powerState);
  digitalWrite(POWER_LED_PIN, powerState); 
  digitalWrite(STATUS_LED_PIN, powerState);
  
  delay(100);
}