void setup() {
  Serial.begin(9600);
  int polje[10]={1,2,3,4,5,6,7,8,9,10};
  
  for(int i=0;i<10;i++)
  {
    Serial.print(polje[i]);
    if(i<9){
      Serial.print(",");
    } 
  }

  Serial.println();
  for(int i=9;i>=0;i--)
  {
    Serial.print(polje[i]);
    if(i>0){
      Serial.print(",");
    } 
  }

}

void loop() {
  // put your main code here, to run repeatedly:

}
