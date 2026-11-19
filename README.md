# 6-DOF Robotic Arm

A six-degree-of-freedom robotic arm driven by an Arduino and controlled from a dashboard. All six joints move reliably and repeatably from dashboard commands.

## Features
- 6 independently controlled joints (6-DOF)
- Dashboard control: send joint commands from [web page / desktop app / serial interface]
- Repeatable, consistent joint positioning
- [Add: gripper, saved poses, speed control, etc. if applicable]

## Hardware
| Component | Quantity | Purpose |
|-----------|----------|---------|
| Arduino [model, e.g. UNO / Mega] | 1 | Main controller |
| MG995 servo | 3 | Heavy-load joints [e.g. base, shoulder, elbow] |
| MG90 servo | 3 | Light-load joints [e.g. wrist, gripper] |
| External power supply [voltage / current] | 1 | Servo power |
| Arm frame [3D-printed / acrylic / other] | 1 | Structure |

## How It Works
1. The dashboard sends joint commands to the Arduino over [serial / Bluetooth / Wi-Fi].
2. The Arduino reads each command and drives the matching servo to the requested angle.
3. All six joints move together to reach the target position.

## Getting Started
1. Clone the repository:
   ```
   git clone https://github.com/adityarai95369/[repo-name].git
   ```
2. Open the Arduino sketch in Arduino IDE and install the required libraries: [e.g. Servo.h].
3. Connect the servos to the Arduino using the wiring table below, and power them from an external supply.
4. Upload the sketch to the Arduino.
5. Open the dashboard and connect to the Arduino at [port / address].

## Wiring
| Joint | Servo | Arduino Pin |
|-------|-------|-------------|
| 1 [Base] | MG995 | [pin] |
| 2 [Shoulder] | MG995 | [pin] |
| 3 [Elbow] | MG995 | [pin] |
| 4 [Wrist] | MG90 | [pin] |
| 5 [Wrist rotate] | MG90 | [pin] |
| 6 [Gripper] | MG90 | [pin] |

