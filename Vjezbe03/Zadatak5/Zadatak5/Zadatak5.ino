#include <ic.hpp>

Ic ic(50);

void setup() {
  Serial.begin(9600);

}

void loop() {
  if(ic.isObstacle())
  {
    Serial.println("Detekcija");
  }
  else
  {
    Serial.println("Nema detekcije");
  }
}
