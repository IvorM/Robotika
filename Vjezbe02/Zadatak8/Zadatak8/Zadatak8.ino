#include "Stopwatch.h"
#include <bibliotekaMotor.h>

Motor motor(4,5,9,2,3,8);
Stopwatch sw;
int timeForward=5000;
short speedForward=motor.maxSpeed;
bool left=true;
void setup() {
  sw.start();
}

void loop() {
 if(sw.has_elapsed(timeForward))
 {
  if(left)
  {
     motor.startDrivingRightMotorForward(speedForward);
     motor.startDrivingLeftMotorBackward(speedForward);
  }
  else
  {
    motor.startDrivingRightMotorBackward(speedForward);
    motor.startDrivingLeftMotorForward(speedForward);
  }
   left=!left;
   sw.reset();
 }
}
