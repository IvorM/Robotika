#include "ic.hpp"
#include "Arduino.h"

Ic::Ic(byte pinNum){

    pin = pinNum;

    pinMode(pin, INPUT);

}

 bool Ic::isObstacle(){

     value = digitalRead(pin);
     if(value)
     {
         return false;
     }
     else
     {
         return true;
     }

 }

 int Ic::sensorValue(){

     return analogRead(pin);

 }