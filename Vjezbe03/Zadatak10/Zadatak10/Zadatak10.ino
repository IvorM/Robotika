#include <ultrasonic.hpp>

UltraSonic us(12, 13);

void setup()
{
  Serial.begin(9600);
}
void loop ()
{
  Serial.println(us.getDistanceInCm());
}
