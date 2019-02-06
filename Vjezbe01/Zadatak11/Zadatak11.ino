unsigned long state_start_time;
void setup() {
  Serial.begin(9600);
  state_start_time=millis();

}

void loop() {
  if (millis()-state_start_time>=2000)
  {
    Serial.println("Hello world!");
     state_start_time=millis();
  }


}
