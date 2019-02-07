#include "Stopwatch.h"
#include <bibliotekaMotor.h>

Motor motor(4,5,9,2,3,8);
Stopwatch sw;
int timeForward=1000;
int timeSmallTurn=100;
int timeTurn=400;
int code=0;
void setup() {
  sw.start();
}

void loop() {
  switch (code)
  {
    case 0:
    if(!sw.has_elapsed(timeForward))
    {
      motor.startDrivingForward(255*motor.medium);
    }
    else
    {
      code=1;
      motor.stopMotors();
      sw.reset();
    }
    break;
    case 1:
    if(!sw.has_elapsed(timeTurn))
    {
      motor.startDrivingRightMotorForward(255);
    }
    else
    {
      code=2;
      motor.stopMotors();
      sw.reset();
    }
    break;
    case 2:
    if(!sw.has_elapsed(timeForward))
    {
      motor.startDrivingForward(255);
    }
    else
    {
      code=3;
      motor.stopMotors();
      sw.reset();
    }
    break;
    case 3:
    if(!sw.has_elapsed(timeTurn))
    {
      motor.startDrivingLeftMotorForward(255);
    }
    else
    {
      code=4;
      motor.stopMotors();
      sw.reset();
    }
    break;
    case 4:
    if(!sw.has_elapsed(timeForward))
    {
       motor.startDrivingForward(255*motor.medium);
    }
    else
    {
      code=5;
      motor.stopMotors();
      sw.reset();
    }
    break;
    case 5:
    if(!sw.has_elapsed(timeTurn))
    {
      motor.startDrivingRightMotorForward(255);
    }
    else
    {
      code=6;
      motor.stopMotors();
      sw.reset();
    }
    break;
    case 6:
    if(!sw.has_elapsed(timeForward))
    {
       motor.startDrivingForward(255*motor.medium);
    }
    else
    {
      code=7;
      motor.stopMotors();
      sw.reset();
    }
    break;
    default:
    break;
  }
}
