#include "Stopwatch.h"
#include <bibliotekaMotor.h>

Motor motor(4,5,9,2,3,8);
Stopwatch sw;
int timeForward=5000;
int timeBackward=2000;
short speedForward=255*motor.medium;
short speedBackwards=motor.maxSpeed;
bool naprijed=true;

void setup() {
  sw.start();
}

void loop() {
 if(naprijed && !sw.has_elapsed(timeForward))
 {
    motor.startDrivingForward(speedForward);
 }
 else if(naprijed && sw.has_elapsed(timeForward))
 {
    sw.reset();
    naprijed=!naprijed;
 }
 else if(!naprijed && !sw.has_elapsed(timeBackward))
  {
    motor.startDrivingBackward(speedBackwards);
  }
  else if(!naprijed && sw.has_elapsed(timeBackward))
  {
    sw.reset();
    naprijed=!naprijed;
  }
}
