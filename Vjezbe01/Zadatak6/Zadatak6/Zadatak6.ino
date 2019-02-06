void setup() {
  Serial.begin(9600);
  int polje[]={1,2,3,4,5,6,7,8,9,10};
  int najmanjiBroj=9999;
  int najveciBroj=0;

  for(int i=0;i<10;i++)
  {
    if(polje[i]>najveciBroj)
    {
      najveciBroj=polje[i];
    }

    if(najmanjiBroj>polje[i])
    {
      najmanjiBroj=polje[i];
    }
  }

  Serial.print("Najmanji broj: ");
  Serial.println(najmanjiBroj);
  Serial.print("Najveci broj: ");
  Serial.print(najveciBroj);
  

}

void loop() {
  // put your main code here, to run repeatedly:

}
