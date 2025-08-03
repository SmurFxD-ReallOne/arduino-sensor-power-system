// Pin Definitions
#define ULTRASONIC_TRIG 3
#define ULTRASONIC_ECHO 4
#define GREEN_LED 7
#define RED_LED 8
#define SOIL_PIN A2

// Variables
int distance, soilMoisture;

void setup() {
  Serial.begin(9600);
  
  pinMode(GREEN_LED, OUTPUT);
  pinMode(RED_LED, OUTPUT);
  pinMode(ULTRASONIC_TRIG, OUTPUT);
  pinMode(ULTRASONIC_ECHO, INPUT);
  
  digitalWrite(GREEN_LED, LOW);
  digitalWrite(RED_LED, LOW);
}

void loop() {
  readSensors();
  controlLights();
  delay(500);
}

void readSensors() {
  distance = readDistance();
  soilMoisture = analogRead(SOIL_PIN);
}

int readDistance() {
  digitalWrite(ULTRASONIC_TRIG, LOW);
  delayMicroseconds(2);
  digitalWrite(ULTRASONIC_TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(ULTRASONIC_TRIG, LOW);
  
  long duration = pulseIn(ULTRASONIC_ECHO, HIGH);
  int distance = duration * 0.034 / 2;
  
  return distance;
}

void controlLights() {
  bool anySensorDetected = false;
  
  if (distance < 50 && distance > 0) {
    anySensorDetected = true;
  }
  
  // FIXED: Triggers when soil is DRY (low value)
  if (soilMoisture < 300) {
    anySensorDetected = true;
  }
  
  if (anySensorDetected) {
    digitalWrite(GREEN_LED, HIGH);
    digitalWrite(RED_LED, HIGH);
  } else {
    digitalWrite(GREEN_LED, LOW);
    digitalWrite(RED_LED, LOW);
  }
}