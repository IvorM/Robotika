#include "Stopwatch.h"
#include <bibliotekaMotor.h>

Motor motor(4,5,9,2,3,8);
Stopwatch sw;
int time=2000;
int breakTime=500;
short speed=255;
bool naprijed=true;
bool pauza=false;

void setup() {
  sw.start();
}

void loop() {
  if(pauza && !sw.has_elapsed(breakTime))
  {
    motor.stopMotors();
    return;
  }
  else if(pauza && sw.has_elapsed(breakTime))
  {
    pauza=false;
    sw.reset();
  }
  
 if(!sw.has_elapsed(time))
 {
  if(naprijed)
  {
    motor.startDrivingForward(speed);
  }
  else
  {
    motor.startDrivingBackward(speed);
  }
 }
 else
 {
    sw.reset();
    pauza=!pauza;
    naprijed=!naprijed;
 }

}
