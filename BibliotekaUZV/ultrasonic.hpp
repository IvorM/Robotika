#ifndef _ULTRASONIC_H
#define _ULTRASONIC_H

#include "Arduino.h"

class UltraSonic {
  private:
    
    unsigned long distance;
    unsigned long duration;
    byte trig_pin;
    byte echo_pin;
  
  public:

    UltraSonic(byte TRIG_PIN, byte ECHO_PIN);
    unsigned long getDistanceInCm();
      
};

#endif