String recenica="Koliko slova o ima u ovoj rečenici"; 
int brojac=0;

void setup() {
  Serial.begin(9600);
  for(int i=0;i<recenica.length();i++)
  {
    if(recenica[i]=='o')
    {
      brojac++;
    }
   
  }
  Serial.print("Rečenica ");
  Serial.print(recenica);
  Serial.print(", ima ");
  Serial.print(brojac);
  Serial.print(" slova o");

}

void loop() {
  // put your main code here, to run repeatedly:

}
