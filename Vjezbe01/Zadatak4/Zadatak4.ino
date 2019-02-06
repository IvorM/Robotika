void setup() {
  Serial.begin(9600);
  int polje[10]={1,2,3,4,5,6,7,8,9,10};
  for(int i=0;i<10;i++)
  {
    Serial.print(polje[i]);
    Serial.print(" ");
    if(polje[i]%2==0)
    {
      Serial.println("Paran broj");
    }
    else
    {
      Serial.println("Neparan broj");
    }
  }

}

void loop() {
  // put your main code here, to run repeatedly:

}
