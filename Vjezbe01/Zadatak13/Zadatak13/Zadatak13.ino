int ledPin=10;
unsigned long snapshot;

void setup() {
   Serial.begin(9600);
   pinMode(ledPin,OUTPUT);
   take_snapshot();
}

void loop() {
  if(can_transit())
{
  Serial.println("Pali");
  digitalWrite(ledPin,HIGH); 
}
else
{
  Serial.println("Gasi");
  digitalWrite(ledPin,LOW);
   take_snapshot();
}


}

void take_snapshot()
{
  snapshot=millis();
}

bool can_transit()
 {
  if((millis()-snapshot)<=2000)
  {
    return true;
  }
  else
  {
    return false;
  }
 }
