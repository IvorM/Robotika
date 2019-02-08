#include <ic.hpp>

Ic ic1(50);
Ic ic2(48);
Ic ic3(46);
Ic ic4(44);

void setup() {
  Serial.begin(9600);

}

void loop() {
  if(ic1.isObstacle())
  {
    Serial.println("Detekcija senzor 1");
  }
  else
  {
    Serial.println("Nema detekcije senzor 1");
  }

   if(ic2.isObstacle())
  {
    Serial.println("Detekcija senzor 2");
  }
  else
  {
    Serial.println("Nema detekcije senzor 2");
  }

   if(ic3.isObstacle())
  {
    Serial.println("Detekcija senzor 3");
  }
  else
  {
    Serial.println("Nema detekcije senzor 3");
  }

   if(ic4.isObstacle())
  {
    Serial.println("Detekcija senzor 4");
  }
  else
  {
    Serial.println("Nema detekcije senzor 4");
  }

  
}
