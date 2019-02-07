#include "Stopwatch.h"
#include <bibliotekaMotor.h>

Motor motor(4,5,9,2,3,8);
Stopwatch sw;
int timeForward=1000;
int timeLeft=250;
bool turn=false;
void setup() {
  sw.start();
}

void loop() {
  if(!turn)
  {
    if(!sw.has_elapsed(timeForward))
    {
      motor.startDrivingForward(motor.maxSpeed);
    }
    else
    {
      turn=true;
      sw.reset();
    }
  }
  else
  {
    if(!sw.has_elapsed(timeLeft))
    {
      motor.startDrivingRightMotorForward(motor.maxSpeed);
      motor.startDrivingLeftMotorBackward(motor.maxSpeed);
    }
    else
    {
      turn=false;
      sw.reset();
    }
  }
}
