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
    motor.startDrivingLeftMotorForward(motor.maxSpeed);
    motor.startDrivingRightMotorBackward(motor.maxSpeed);
    sw.start();
}
void loop ()
{

    if(sw.has_elapsed(200))
    {
       distance=us.getDistanceInCm();
       if(distance<=10)
       {
          motor.startDrivingForward(motor.maxSpeed);
       }
       else
       {
         motor.startDrivingLeftMotorForward(motor.maxSpeed);
         motor.startDrivingRightMotorBackward(motor.maxSpeed);
       }

       sw.reset();
    }    
}
