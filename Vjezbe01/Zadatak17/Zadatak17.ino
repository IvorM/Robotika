int ledPin=10;
int potPin=A0;
int led_value=0;
int pot_value=0;

int buttonState=0;

void setup() {
 Serial.begin(9600);
 pinMode(ledPin,OUTPUT);
 pinMode(potPin,INPUT);

}

void loop() {
  pot_value=analogRead(potPin);
  Serial.println(pot_value);
  led_value=map(pot_value,0,1023,0,254);
  analogWrite(ledPin,led_value);
  
}
