#include "Stopwatch.h"
#include <bibliotekaMotor.h>
#include <ic.hpp>

Motor motor(4,5,9,2,3,8);
Stopwatch sw;
Ic ic(50);
bool obstacle=false;

void setup()
{
  motor.startDrivingForward(motor.maxSpeed*motor.easy);
}
void loop(){
  
  if(ic.isObstacle() && !obstacle)
  {
    motor.stopMotors();
    obstacle=true;
    sw.start();
    sw.reset();
  }

   if(obstacle && !sw.has_elapsed(500))
  {
    motor.startDrivingRightMotorForward(motor.maxSpeed);
    motor.startDrivingLeftMotorBackward(motor.maxSpeed);
  }

    if(obstacle && sw.has_elapsed(500))
  {
    obstacle=false;
    motor.startDrivingForward(motor.maxSpeed*motor.easy);
    sw.reset();
  }

  
}
