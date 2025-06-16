# Robotics_16July_work
today work is using 3 ir sensor with 2 servo motor
# IR Sensor Servo Motor Control System

## Overview
This Arduino project implements a servo motor control system using three IR sensors for directional movement detection. The system monitors obstacles or movements in three directions (left, center, right) and controls two servo motors accordingly.

## Components Required

### Hardware
- **Arduino Uno** (or compatible microcontroller)
- **3x IR Sensors** (Infrared obstacle detection sensors)
- **2x Servo Motors** (Standard 9g or similar)
- **Breadboard** for prototyping
- **Jumper wires** for connections
- **Power supply** (if needed for servo motors)

### Software
- Arduino IDE
- Servo library (included in Arduino IDE)

## Pin Configuration

| Component | Arduino Pin | Description |
|-----------|-------------|-------------|
| Left IR Sensor | Digital Pin 2 | Detects obstacles on the left side |
| Main IR Sensor | Digital Pin 3 | Detects obstacles in front/center |
| Right IR Sensor | Digital Pin 4 | Detects obstacles on the right side |
| Servo Motor 1 | Digital Pin 8 | Left movement servo |
| Servo Motor 2 | Digital Pin 9 | Right movement servo |

## Circuit Diagram
The circuit shows:
- Arduino Uno connected to a breadboard
- Three IR sensors connected to digital pins 2, 3, and 4
- Two servo motors connected to digital pins 8 and 9
- Power and ground connections distributed through the breadboard

## Code Functionality

### Setup Function
- Initializes servo motors on pins 8 and 9
- Sets IR sensor pins as INPUT
- Configures serial communication for debugging

### Main Loop Logic
The system continuously reads the three IR sensors and responds as follows:

1. **Main IR Sensor (Pin 3)**:
   - `signal1 == 1`: Prints "start" to serial monitor
   - `signal1 == 0`: Prints "stop" to serial monitor

2. **Left IR Sensor (Pin 2)**:
   - `signal2 == 1`: Activates left servo motor (90° position)
   - Prints "move left" to serial monitor

3. **Right IR Sensor (Pin 4)**:
   - `signal3 == 0`: Activates right servo motor (90° position)
   - Prints "move right" to serial monitor

## Installation & Setup

### 1. Hardware Assembly
1. Connect the Arduino Uno to your computer
2. Set up the breadboard with power rails
3. Connect IR sensors to pins 2, 3, and 4
4. Connect servo motors to pins 8 and 9
5. Ensure proper power and ground connections

### 2. Software Setup
1. Open Arduino IDE
2. Copy and paste the provided code
3. Select the correct board (Arduino Uno) and port
4. Upload the code to your Arduino

### 3. Testing
1. Open the Serial Monitor (9600 baud rate)
2. Test each IR sensor by placing objects in front of them
3. Observe servo motor movements and serial output

## Usage

This system can be used for:
- **Obstacle avoidance robots**: Detect obstacles and change direction
- **Automated camera systems**: Pan left/right based on motion detection
- **Security systems**: Detect movement in multiple directions
- **Interactive displays**: Respond to user presence

## Troubleshooting

### Common Issues
- **Servos not moving**: Check power supply and connections
- **IR sensors not responding**: Verify sensor orientation and distance
- **No serial output**: Ensure correct baud rate (9600) in Serial Monitor
- **Erratic behavior**: Check for loose connections on breadboard

### Debugging Tips
- Use the Serial Monitor to see real-time sensor readings
- Test each component individually
- Verify pin connections match the code definitions
- Ensure adequate power supply for servo motors

## Code Improvements

The current code can be enhanced with:
- **Serial communication initialization**: Add `Serial.begin(9600);` in setup()
- **Servo positioning control**: Add different angles for various movements
- **Timing delays**: Add delays to prevent rapid servo movements
- **Error handling**: Add checks for sensor failures
- **Calibration**: Add sensitivity adjustments for IR sensors

## Technical Specifications

- **Operating Voltage**: 5V (Arduino Uno)
- **Current Draw**: ~500mA (with both servos active)
- **Detection Range**: Varies by IR sensor model (typically 2-30cm)
- **Servo Angles**: 0-180° (standard servo range)

## License
This project is open-source and available for educational and personal use.

## Contributing
Feel free to submit improvements, bug fixes, or additional features through pull requests.
