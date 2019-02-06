#include "Stopwatch.h"
#include <bibliotekaMotor.h>

Motor motor(4,5,9,2,3,8);
Stopwatch sw;
int time=1000;
short speed=255;

void setup() {
  sw.start();
  motor.startDrivingForward(speed);
}

void loop() {
    if(sw.has_elapsed(time))
    {
      motor.stopMotors();
    }

}
