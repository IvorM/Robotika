#include <ultrasonic.hpp>
#include <bibliotekaMotor.h>
#include <Stopwatch.h>

UltraSonic us1(12, 13);
UltraSonic us2(11, 10);
Motor motor(4,5,9,2,3,8);
Stopwatch sw;
long distance1 = 0;
long distance2 = 0;

void setup()
{
   motor.startDrivingForward(motor.maxSpeed);
}
void loop ()
{
    distance1=us1.getDistanceInCm();
    distance2=us2.getDistanceInCm();

    if(distance1<30 || distance2<30)
    {
      motor.stopMotors();
    }
    
}
