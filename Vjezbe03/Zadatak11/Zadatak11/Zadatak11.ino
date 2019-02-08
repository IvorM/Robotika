#include <ultrasonic.hpp>
#include <bibliotekaMotor.h>

UltraSonic us(12, 13);
Motor motor(4,5,9,2,3,8);
long distance = 0;

void setup()
{
   Serial.begin(9600);
   motor.startDrivingForward(motor.maxSpeed*motor.easy);
}
void loop ()
{
    
    distance=us.getDistanceInCm();
    Serial.println(distance);
    if(distance<20)
    {
      motor.startDrivingLeftMotorForward(motor.maxSpeed);
      motor.startDrivingRightMotorBackward(motor.maxSpeed);
    }
    else
    {
      motor.startDrivingForward(motor.maxSpeed*motor.easy);
    }
}
