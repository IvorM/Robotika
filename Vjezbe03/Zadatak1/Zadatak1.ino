#include "Stopwatch.h"
#include <bibliotekaMotor.h>
#include <ic.hpp>

Motor motor(4,5,9,2,3,8);
Stopwatch sw;
Ic ic(50);

void setup() {
  // put your setup code here, to run once:

}

void loop() {
   if(ic.isObstacle())
  {
    sw.start();
    motor.startDrivingBackward(motor.maxSpeed*motor.easy);
    
  }

  if(sw.has_elapsed(500)){
    motor.stopMotors();
    sw.reset();
  }

}
