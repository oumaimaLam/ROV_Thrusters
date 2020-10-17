#include <AFMotor.h>

//declare motors on the shield

AF_DCMotor motor1(1);

void setup() {
  // put your setup code here, to run once:
  // min operational speed for bilge pumps 150 -- max speed 250
  //
  
  motor4.setSpeed(250);
  motor4.run(RELEASE);

}

void loop() {
  // put your main code here, to run repeatedly:
  //Forward motion -- could be changed by switching cables in the motor shield
  motor4.run(FORWARD);
  delay(3000);
  
  //Backward motion -- could be changed by switching cables in the motor shield -
  motor4.run(BACKWARD);
  delay(3000);

}
//
