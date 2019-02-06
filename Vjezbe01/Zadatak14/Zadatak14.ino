int ledPin=10;


unsigned long snapshot;

void setup() {
  pinMode(ledPin,OUTPUT);
  take_snapshot();
}

void loop() {
if(can_transit())
{
  digitalWrite(ledPin,HIGH);
  delay(200);
  digitalWrite(ledPin,LOW);
   delay(200);
  digitalWrite(ledPin,HIGH);
  delay(200);
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
  if(millis()-snapshot>=3000)
  {
    return true;
  }
  else
  {
    return false;
  }
 }

