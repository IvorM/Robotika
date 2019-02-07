#include "Stopwatch.h"
#include <bibliotekaMotor.h>

Motor motor(4,5,9,2,3,8);
Stopwatch sw;
int timeForward=2000;
int code=0;
void setup() {
  sw.start();
}

void loop() {
  //premali stan
  switch (code)
  {
    case 0:
    if(!sw.has_elapsed(timeForward))
    {
      motor.startDrivingRightMotorForward(255);
      motor.startDrivingLeftMotorForward(210);
    }
    else
    {
      code=1;
      sw.reset();
    }
    break;
    case 1:
    if(!sw.has_elapsed(timeForward))
    {
      motor.startDrivingRightMotorForward(255);
      motor.startDrivingLeftMotorForward(170);
    }
    else
    {
      code=2;
      sw.reset();
    }
    break;
    case 2:
    if(!sw.has_elapsed(timeForward))
    {
      motor.startDrivingRightMotorForward(255);
      motor.startDrivingLeftMotorForward(0);
    }
    else
    {
      code=3;
      sw.reset();
    }
    break;
    case 3:
    if(!sw.has_elapsed(timeForward))
    {
      motor.startDrivingLeftMotorForward(255);
      motor.startDrivingRightMotorForward(210);
    }
    else
    {
      code=4;
      sw.reset();
    }
    break;
    case 4:
    if(!sw.has_elapsed(timeForward))
    {
      motor.startDrivingLeftMotorForward(255);
      motor.startDrivingRightMotorForward(170);
    }
    else
    {
      code=5;
      sw.reset();
    }
    break;
    case 5:
    if(!sw.has_elapsed(timeForward))
    {
      motor.startDrivingLeftMotorForward(255);
      motor.startDrivingRightMotorForward(0);
    }
    else
    {
      code=0;
      sw.reset();
    }
    break;
  }
}
