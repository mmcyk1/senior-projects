#include <Servo.h>

//Define servos
Servo servot;         //thumb
Servo servoi;         //index
Servo servom;         //middle
Servo servor;         //ring
Servo servop;         //pinky
Servo servowud;       //wirst up-down
Servo servowr;        //wrist rotation

int pos = 0;

int val;

//Define initial positions of servo
int pos0 = 0;
int pos180 = 180;
int post360 = 360;

int speed_ = 10;

void setup() {
 Serial.begin(9600);
 
 //attaching servos to pins
 servot.attach(13);
 servoi.attach(11);
 servom.attach(9);
 servor.attach(7);
 servop.attach(5);
 servowud.attach(3);
 servowr.attach(2);
}

void loop() {
  if(Serial.available())
  
  {
    val=Serial.read();
    if(val=='w')
    {
      for (pos = 0; pos <= 180; pos += 1) 
      { 
       servot.write(pos);              
       delay(10); 
      }
    {
    if(val=='s')
    { 
      for (pos = 180; pos >= 0; pos -= 1)
      { 
      servot.write(pos);              
      delay(2.5);       
    }
  }
  }
}
  }
}
