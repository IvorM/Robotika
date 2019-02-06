void setup() {
  Serial.begin(9600);
  int polje[]={1,2,3,4,5,6,7,8,9,10};
  ispisPolja(polje);
  int suma=sumaBrojeva(polje);
  Serial.print("Suma: ");
  Serial.println(suma);
  trazenjeBroja(polje);
}

void loop() {
  
}

void ispisPolja(int polje1[]){
  for(int i=0;i<10;i++)
  {
    Serial.println(polje1[i]);
  }

   for(int i=10;i>=0;i--)
  {
    Serial.println(polje1[i]);
  }
}

int sumaBrojeva(int polje2[]){
  int suma=0;
  for(int i=0;i<10;i++)
  {
    suma+=polje2[i];
  }

  return suma;
}

void trazenjeBroja(int polje3[]){
  int najmanjiBroj=9999;
  int najveciBroj=0;

  for(int i=0;i<10;i++)
  {
    if(polje3[i]>najveciBroj)
    {
      najveciBroj=polje3[i];
    }

    if(najmanjiBroj>polje3[i])
    {
      najmanjiBroj=polje3[i];
    }
  }

   Serial.print("Najmanji broj: ");
   Serial.println(najmanjiBroj);
   Serial.print("Najveci broj: ");
   Serial.print(najveciBroj);
}
