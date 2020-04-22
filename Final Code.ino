//Define servo library
#include <Servo.h>

//Define servos being used
Servo servo13;       //thumb
Servo servo11;       //index finger
Servo servo9;        //middle finger
Servo servo7;        //ring finger
Servo servo5;        //pinky finger
Servo servo3;        //Wrist rotation (Driveshaft)
Servo servo2;        //Wrist hinge

//Define initial position
int pos0 = 0;        //Fingers & Thumb initial position
int pos90 = 90;      //Wrist initial postion

//Define increment that servo will turn in degrees
int inc = 90;


void setup() {

Serial.begin(9600);

//Attach servos to pins on Arduino
servo13.attach(13);
servo11.attach(11);
servo9.attach(9);
servo7.attach(7);
servo5.attach(5);
servo3.attach(3);
servo2.attach(2);

//Define initial position for each servo
servo13.write(pos0);
servo11.write(pos0);
servo9.write(pos0);
servo7.write(pos0);
servo5.write(pos0);
servo3.write(pos90);
servo2.write(pos90);
}


void loop() {

//Needed for the loop to work
int i = 1;

//val is a variable that stores recieved data
int val = Serial.read();

//---------------------------Servo13------------------------------ 

while(val=='a' && i==1){
   val = Serial.read();

   //Limits how far the servo car turn
   if(pos0 <= 180){

   //Moves the servo with the defined increment of 90 degrees
   pos0=pos0+inc;
   servo13.write(pos0);

   //Speed of the servo turning
   delay(15);
   }
   }

//Opposite direction
while(val=='d' && i==1){
   val = Serial.read();

   if(pos0 >= 0){

   pos0=pos0-inc;
   servo13.write(pos0);

   delay(15);
   }
   }

//---------------------------Servo11------------------------------
   
   while(val=='w' && i==1){
   val = Serial.read();

   if(pos0 <= 180){

   pos0=pos0+inc;
   servo11.write(pos0);

   delay(15);
   }
   }

while(val=='s' && i==1){
   val = Serial.read();

   if(pos0 >= 0){

   pos0=pos0-inc;
   servo11.write(pos0);

   delay(15);
   }
   }

//---------------------------Servo9------------------------------ 

   while(val=='q' && i==1){
   val = Serial.read();

   if(pos0 <= 180){

   pos0=pos0+inc;
   servo9.write(pos0);

   delay(15);
   }
   }

while(val=='e' && i==1){
   val = Serial.read();

   if(pos0 >= 0){

   pos0=pos0-inc;
   servo9.write(pos0);

   delay(15);
   }
   }

//---------------------------Servo7------------------------------

   while(val=='z' && i==1){
   val = Serial.read();

   if(pos0 <= 180){

   pos0=pos0+inc;
   servo7.write(pos0);

   delay(15);
   }
   }

while(val=='x' && i==1){
   val = Serial.read();

   if(pos0 >= 0){

   pos0=pos0-inc;
   servo7.write(pos0);

   delay(15);
   }
   }

//---------------------------Servo5------------------------------

   while(val=='c' && i==1){
   val = Serial.read();

   if(pos0 <= 180){

   pos0=pos0+inc;
   servo5.write(pos0);

   delay(15);
   }
   }

while(val=='v' && i==1){
   val = Serial.read();

   if(pos0 >= 0){

   pos0=pos0-inc;
   servo5.write(pos0);

   delay(15);
   }
   }

//---------------------------Servo3------------------------------

   while(val=='o' && i==1){
   val = Serial.read();

   if(pos90 <= 180){

   pos90=pos90+inc;
   servo3.write(pos90);

   delay(15);
   }
   }

while(val=='p' && i==1){
   val = Serial.read();

  if(pos90 >=0){

   pos90=pos90-inc;
   servo3.write(pos90);

   delay(15);
   }
   }

//---------------------------Servo2------------------------------

   while(val=='k' && i==1){
   val = Serial.read();

   if(pos90 <= 180){

   pos90=pos90+inc;
   servo2.write(pos90);

   delay(15);
   }
   }

while(val=='l' && i==1){
   val = Serial.read();

   if(pos90 >= 0){

   pos90=pos90-inc;
   servo2.write(pos90);

   delay(15);
   }
   }
}
