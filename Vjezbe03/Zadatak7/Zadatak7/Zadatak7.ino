#include <ic.hpp>
#include <bibliotekaMotor.h>


Motor motor(4,5,9,2,3,8);
Ic ic1(50);
Ic ic2(48);
Ic ic3(46);
Ic ic4(44);

void setup() {
  Serial.begin(9600);

}

void loop() {
   if(ic2.isObstacle())
  {
    motor.startDrivingLeftMotorForward(motor.maxSpeed*motor.easy);
  }
  else if(!ic2.isObstacle())
  {
    motor.startDrivingForward(motor.maxSpeed*motor.easy);
  }
   else if(ic3.isObstacle())
  {
    motor.startDrivingRightMotorForward(motor.maxSpeed*motor.easy);
  }
  else if(!ic3.isObstacle())
  {
     motor.startDrivingForward(motor.maxSpeed*motor.easy);
  }

  
}
