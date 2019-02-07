#include "Stopwatch.h"
#include <bibliotekaMotor.h>

Motor motor(4,5,9,2,3,8);
Stopwatch sw;
int timeForward=2500;
int timeBackward=2500;
int timeBreak=5000;
short speedForward=255*motor.medium;
short speedBackwards=motor.maxSpeed;
bool naprijed=true;
bool hold=true;
void setup() {
  sw.start();
}

void loop() {
  if(hold && sw.has_elapsed(2000))
  {
    hold=false;
  }
  else
  {
    hold=true;
    return;
  }

  if(naprijed && !sw.has_elapsed(timeForward))
 {
    motor.startDrivingForward(speedForward);
 }
 else if(naprijed && sw.has_elapsed(timeForward))
 {
    sw.reset();
    naprijed=!naprijed;
    hold=true;
 }
 else if(!naprijed && !sw.has_elapsed(timeBackward))
  {
    motor.startDrivingBackward(speedBackwards);
  }
  else if(!naprijed && sw.has_elapsed(timeBackward))
  {
    sw.reset();
    naprijed=!naprijed;
     hold=true;
  }
  

}
