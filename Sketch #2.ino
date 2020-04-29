#include <Servo.h>

//Define servos
Servo servo13;        //thumb
Servo servo11;        //index
Servo servo9;         //middle
Servo servo7;         //ring
Servo servo5;         //pinky
Servo servo3;         //wirst up-down
Servo servo2;         //wrist rotation

int pos = 0;

int val;

//Define initial positions of servo
int pos0 = 0;
int pos90 = 90;
int post120 = 120;

int speed_ = 5;

void setup() {
 
Serial.begin(9600);
 
//attaching servos to pins
servo13.attach(13);
servo11.attach(11);
servo9.attach(9);
servo7.attach(7);
servo5.attach(5);
servo3.attach(3);
servo2.attach(2);

//define initial positions
servo13.write(pos0);
servo11.write(pos0);
servo9.write(pos0);
servo7.write(pos0);
servo5.write(pos0);
servo3.write(pos0);
servo2.write(pos0);

}

void loop()
{
  if(Serial.available())
  
  {
    val=Serial.read();
    if(val=='w')
    {
      for (pos = 0; pos <= 90; pos += 1) 
      { 
       servo13.write(pos);              
       delay(25); 
       servo13.detach();
       delay(1000);
      }
    }
  }
  {
    val=Serial.read();
    if(val=='s')
    {
      for (pos = 180; pos <= 0; pos -= 1) 
      { 
       servo13.write(pos);              
       delay(15); 
      }
    }
  } 
}
