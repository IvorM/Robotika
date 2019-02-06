#ifndef _BIBLIOTEKAMOTOR_H
#define _BIBLIOTEKAMOTOR_H

#include "Arduino.h"

class Motor{
  private:
    byte motorLeft[3];
    byte motorRight[3];

    void _startDrivingForwardLeftMotor(short speed);
	void _startDrivingForwardRightMotor(short speed);
	void _startDrivingBackwardLeftMotor(short speed);
	void _startDrivingBackwardRightMotor(short speed);
    void _stopLeftMotor();
	void _stopRightMotor();

  public:
    const short maxSpeed=255;
    const float easy=0.9;
    const float medium=0.75;
    const float hard=0;

    Motor(byte motorLeftPwr,byte motorLeftGnd,byte motorLeftPwm,byte motorRightPwr,byte motoRightGnd,byte motorRightPwm);

    void startDrivingForward(short speed);
	void startDrivingBackward(short speed);
	void startDrivingLeftMotorForward(short speed);
	void startDrivingRightMotorForward(short speed);
	void startDrivingLeftMotorBackward(short speed);
	void startDrivingRightMotorBackward(short speed);
    void stopMotors();
};

#endif

