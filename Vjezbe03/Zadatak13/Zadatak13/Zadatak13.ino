#include <ultrasonic.hpp>
#include <bibliotekaMotor.h>
#include <Stopwatch.h>

UltraSonic us(12, 13);
Motor motor(4,5,9,2,3,8);
Stopwatch sw;
long distance = 0;

void setup()
{
   Serial.begin(9600);
}
void loop ()
{
    distance=us.getDistanceInCm();
    Serial.println(distance);
    if (distance>30)
    {
      motor.startDrivingForward(motor.maxSpeed);
    }
    else if(distance>15 && distance<=30)
    {
      motor.startDrivingForward(motor.maxSpeed*motor.medium);
      delay(200);
      motor.stopMotors();
      delay(200);
    }
    else if(distance>5 && distance<=15)
    {
      motor.startDrivingForward(150);
      delay(400);
      motor.stopMotors();
    }
    else if(distance<=5)
    {
      motor.stopMotors();
    }
}
