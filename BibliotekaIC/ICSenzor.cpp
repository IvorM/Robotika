#include "ic.hpp"
#include "Arduino.h"

ICSenzor::ICSenzor(byte pinNum)
	{
		pin=pinNum;
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