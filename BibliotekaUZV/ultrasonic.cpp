#include "ultrasonic.hpp"
#include "Arduino.h"

UltraSonic::UltraSonic(byte TRIG_PIN, byte ECHO_PIN)
{
    trig_pin = TRIG_PIN;
    echo_pin = ECHO_PIN;

    pinMode(trig_pin, OUTPUT);
    pinMode(echo_pin, INPUT);
}

unsigned long UltraSonic::getDistanceInCm()
{
    digitalWrite(trig_pin, LOW);
    delayMicroseconds(5);
    digitalWrite(trig_pin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trig_pin, LOW);

    duration = pulseIn(echo_pin, HIGH);
    return (duration / 2) / 29.1;
}
