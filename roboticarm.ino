#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>

Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver(0x40); // default I2C address

#define SERVOMIN 150  // pulse length count for 0 degrees (calibrate if needed)
#define SERVOMAX 600  // pulse length count for 180 degrees (calibrate if needed)

void setup() {
  Serial.begin(9600);
  pwm.begin();
  pwm.setPWMFreq(50); // standard servo frequency, 50Hz
}

int angleToPulse(int angle) {
  return map(angle, 0, 180, SERVOMIN, SERVOMAX);
}

void loop() {
  if (Serial.available() > 0) {
    String input = Serial.readStringUntil('\n');
    int servoIndex = input.substring(0, 1).toInt();
    int servoValue = input.substring(2).toInt();

    switch (servoIndex) {
      case 1: pwm.setPWM(0, 0, angleToPulse(servoValue)); break; // channel 0
      case 2: pwm.setPWM(1, 0, angleToPulse(servoValue)); break; // channel 1
      case 3: pwm.setPWM(2, 0, angleToPulse(servoValue)); break; // channel 2
      case 4: pwm.setPWM(3, 0, angleToPulse(servoValue)); break; // channel 3
      case 5: pwm.setPWM(4, 0, angleToPulse(servoValue)); break; // channel 4
      case 6: pwm.setPWM(5, 0, angleToPulse(servoValue)); break; // channel 5
      default: break;
    }
  }
}