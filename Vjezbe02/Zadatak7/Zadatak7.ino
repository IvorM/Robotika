#include "Stopwatch.h"
#include <bibliotekaMotor.h>

Motor motor(4,5,9,2,3,8);
Stopwatch sw;
int timeForward=10000;
short speedForward=motor.maxSpeed;

void setup() {
  sw.start();
}

void loop() {
 if(!sw.has_elapsed(timeForward))
 {
    motor.startDrivingRightMotorForward(speedForward);
 }
 else
 {
   motor.stopMotors();
 }
 
 
}
