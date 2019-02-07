#ifndef _IC_H
#define _IC_H

#include "Arduino.h"

class Ic {
  private:
    
    int value;
    byte pin;
  
  public:
    Ic(byte pinNum);
    bool isObstacle();
      
};

#endif
