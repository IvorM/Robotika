int ledPin=10;
int buttonPin=2;

int buttonState=0;

void setup() {
 Serial.begin(9600);
 pinMode(ledPin,OUTPUT);
 pinMode(buttonPin,INPUT);

}

void loop() {
  buttonState=digitalRead(buttonPin);
  Serial.println(buttonState);
  if(buttonState==HIGH)
  {
    digitalWrite(ledPin,HIGH);
  }
  else
  {
    digitalWrite(ledPin,LOW);
  }


}
