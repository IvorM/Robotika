#include "Stopwatch.h"
#include <bibliotekaMotor.h>
#include <ic.hpp>

Motor motor(4,5,9,2,3,8);
Stopwatch sw;
Ic ic(50);

void setup()
{
  motor.startDrivingForward(motor.maxSpeed*motor.easy);
}
void loop(){
  
  if(ic.isObstacle())
  {
    motor.stopMotors();
  }
}
