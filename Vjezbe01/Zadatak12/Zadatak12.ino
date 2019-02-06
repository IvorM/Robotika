unsigned long state_start_time;
void setup() {
  Serial.begin(9600);
  state_start_time=millis();

}

void loop() {
  if (millis()-state_start_time==2000)
  {
    Serial.println(millis());
    Serial.println("A");
  }

 if (millis()-state_start_time==4000)
  {
    Serial.println("B");
    state_start_time=millis();
  }
}
