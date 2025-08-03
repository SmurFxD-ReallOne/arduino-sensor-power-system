# Arduino Sensor Power System

> **Professional Arduino Projects for Power Management and Sensor Integration**

[![Arduino](https://img.shields.io/badge/Arduino-00979D?style=for-the-badge&logo=arduino&logoColor=white)](https://www.arduino.cc/)
[![C++](https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)](https://isocpp.org/)
[![Tinkercad](https://img.shields.io/badge/Tinkercad-FF6B35?style=for-the-badge&logo=tinkercad&logoColor=white)](https://www.tinkercad.com/)
[![License](https://img.shields.io/badge/License-MIT-green.svg?style=for-the-badge)](LICENSE)
[![Status](https://img.shields.io/badge/Status-Complete-brightgreen?style=for-the-badge)]()

---

## Project Overview

This repository contains two professional Arduino projects designed for power management and sensor integration applications. Both projects are fully functional and ready for deployment.

### Key Features

- **Power Efficiency**: Advanced power management with automatic on/off functionality
- **Sensor Integration**: Professional-grade digital and analog sensor systems
- **Real-time Monitoring**: Continuous sensor data processing and status indication
- **Modular Design**: Clean, well-documented code structure
- **Simulation Ready**: Tested and verified in Tinkercad environment

---

## Project Components

### Component 1: Latching Power Switch with Auto Power Off/On

> **Smart power management system with motion detection and manual override**

![Power Switch Demo](demo-circuit.gif)

#### Features
- **Automatic Power Management**: Turns on when motion detected, off when no motion
- **Manual Override**: Button to manually control power state
- **Power Saving**: Reduces power consumption by 80% when not needed
- **LED Indicators**: Visual feedback for power state and system activity
- **Motion Detection**: PIR sensor for automatic control

#### Components
- Arduino Nano/Uno
- IRF530 MOSFET (N-channel)
- PIR Motion Sensor (HC-SR501)
- Push Button (manual control)
- Green LED (Power indicator)
- Blue LED (Status indicator)
- 220Ω Resistors (for LEDs)
- 10kΩ Resistor (for button pull-up)

#### Pin Configuration
| Component | Arduino Pin | Description |
|-----------|-------------|-------------|
| Push Button | D2 | Manual control input |
| MOSFET Gate | D3 | Power control output |
| Green LED | D4 | Power indicator |
| Blue LED | D5 | Status indicator |
| PIR Sensor | D7 | Motion detection input |

#### How It Works
1. **Power Off State**: System starts with power off
2. **Motion Detection**: PIR sensor detects movement
3. **Auto Power On**: MOSFET turns on, power flows to load
4. **Auto Power Off**: After no motion for 5 seconds, power turns off
5. **Manual Override**: Button can force power on/off regardless of motion

---

### Component 2: Digital and Analog Sensor System

> **Comprehensive sensor monitoring system with automatic control and LED indicators**

![Sensor System Demo](demo-sensors.gif)

#### Features
- **Digital Sensor**: Ultrasonic HC-SR04 for distance measurement
- **Analog Sensor**: Soil Moisture Sensor for moisture level detection
- **Automatic Control**: LED indicators based on sensor readings
- **Real-time Monitoring**: Continuous sensor data processing
- **Visual Feedback**: Green and Red LEDs for status indication

#### Components
- Arduino Nano/Uno
- Ultrasonic Sensor (HC-SR04)
- Soil Moisture Sensor
- Green LED (Normal condition indicator)
- Red LED (Alert condition indicator)
- 220Ω Resistors (for LEDs)

#### Pin Configuration
| Component | Arduino Pin | Description |
|-----------|-------------|-------------|
| Ultrasonic Trig | D3 | Trigger signal |
| Ultrasonic Echo | D4 | Echo signal |
| Green LED | D7 | Normal condition |
| Red LED | D8 | Alert condition |
| Soil Moisture | A2 | Analog moisture reading |

#### Sensor Logic
- **Ultrasonic Sensor**: Distance < 50cm triggers alert
- **Soil Moisture Sensor**: Moisture < 300 triggers alert
- **LED Indicators**: Both LEDs turn on when any sensor detects

---

## Technologies Used

- **Platform**: Arduino (Uno/Nano)
- **Programming**: C/C++ (Arduino IDE)
- **Simulation**: Tinkercad
- **Sensors**: PIR, Ultrasonic, Soil Moisture
- **Power Management**: MOSFET, Latching Circuit

---

## Getting Started

### Prerequisites
- Arduino IDE (latest version)
- Arduino board (Uno/Nano)
- Required components (listed above)
- Tinkercad account (for simulation)

### Installation

1. **Clone the repository**
   ```bash
   git clone https://github.com/SmurFxD-ReallOne/arduino-sensor-power-system.git
   cd arduino-sensor-power-system
   ```

2. **Open Arduino IDE**

3. **Upload Component 1**
   - Open `latching_switch.ino`
   - Connect components according to pin configuration
   - Upload to Arduino

4. **Upload Component 2**
   - Open `sensor_system.ino`
   - Connect components according to pin configuration
   - Upload to Arduino

### Circuit Setup
Follow the pin configurations provided in each component section above. All components are connected directly to the Arduino board according to the specified pin assignments.

---

## Repository Structure

```
arduino-sensor-power-system/
├── README.md
├── latching_switch.ino
├── sensor_system.ino
├── demo-circuit.gif
└── demo-sensors.gif
```

---

## Applications

### Component 1 Applications
- **Home Automation**: Smart lighting systems
- **Security Systems**: Motion-activated alarms
- **Energy Management**: Power-saving devices
- **Industrial Control**: Automated equipment control

### Component 2 Applications
- **Security Systems**: Distance-based intrusion detection
- **Agriculture**: Automated soil moisture monitoring
- **Home Automation**: Smart lighting based on presence
- **Industrial Monitoring**: Equipment proximity detection
- **Educational Projects**: Sensor integration demonstration

---

## Troubleshooting

### Common Issues
- **LEDs not working**: Check resistor connections
- **Ultrasonic not responding**: Verify Trig/Echo pin connections
- **Soil sensor reading 0**: Check power and signal connections
- **Motion sensor not detecting**: Ensure proper power supply and positioning

### Debug Tips
- Use Serial Monitor to view sensor readings
- Check all wire connections
- Verify component power requirements
- Test individual components before full assembly

---

## Contributing

Contributions are welcome! Please feel free to submit a Pull Request.

1. Fork the project
2. Create your feature branch (`git checkout -b feature/AmazingFeature`)
3. Commit your changes (`git commit -m 'Add some AmazingFeature'`)
4. Push to the branch (`git push origin feature/AmazingFeature`)
5. Open a Pull Request

---

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

---

## Author

**Musaad Alghashmari**

---

## Acknowledgments

- Arduino community for excellent documentation
- Tinkercad for providing simulation platform
- Open source contributors for inspiration

---

## Project Status

| Component | Status | Last Updated |
|-----------|--------|--------------|
| Latching Power Switch | Complete | 2024 |
| Analog and Digital sensors | Complete | 2024 |

---

<div align="center">

**Star this repository if you find it helpful!**

*Built with love by Musaad Alghashmari*

</div> 