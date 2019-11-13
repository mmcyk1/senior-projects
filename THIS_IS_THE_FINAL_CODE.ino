#include <Servo.h>

Servo servo1;         //thumb
Servo servo2;         //index
Servo servo3;         //middle
Servo servo4;         //ring
Servo servo5;         //pinky
Servo servo6;         //wirst up-down
Servo servo7;         //wrist rotation

void setup() {
 servo1.attach(2);
 servo2.attach(3);
 servo3.attach(4);
 servo4.attach(5);
 servo5.attach(6);
 servo6.attach(7);
 servo7.attach(8);
}

void loop() {
  // put your main code here, to run repeatedly:

}
