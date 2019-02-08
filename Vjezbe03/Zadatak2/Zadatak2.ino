#include "Stopwatch.h"
#include <bibliotekaMotor.h>
#include <ic.hpp>

Motor motor(4,5,9,2,3,8);
Stopwatch sw;
Ic ic(50);
int code = 0;
void setup()
{
  motor.startDrivingForward(motor.maxSpeed);
}
void loop(){
  
  if(ic.isObstacle() && code == 0)
  {
    sw.start();
    code = 1;
  }

  if(code==1 && !sw.has_elapsed(500))
  {
    motor.startDrivingRightMotorForward(motor.maxSpeed);
    motor.startDrivingLeftMotorBackward(motor.maxSpeed);
  }

  if(code==1 && sw.has_elapsed(500))
  {
     code = 2;
     motor.stopMotors();
     sw.reset();
  }

  if(code==2 && !sw.has_elapsed(2000)){
    motor.startDrivingForward(255);
    code = 2;
  }

  if(code==2 && sw.has_elapsed(2000)){
    motor.stopMotors();
    code = 0;
  }
  
}
