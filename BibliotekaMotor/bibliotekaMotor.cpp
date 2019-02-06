#include "Arduino.h"
#include "BibliotekaMotor.h"

Motor::Motor(byte motorLeftPwr,byte motorLeftGnd, byte motorLeftPwm,byte motorRightPwr,byte motorRightGnd,byte motorRightPwm)
{
  motorLeft[0]=motorLeftPwr;
  motorLeft[1]=motorLeftGnd;
  motorLeft[2]=motorLeftPwm;

  pinMode(motorLeft[0],OUTPUT);
  pinMode(motorLeft[1],OUTPUT);
  pinMode(motorLeft[2],OUTPUT);
  
  motorRight[0]=motorRightPwr;
  motorRight[1]=motorRightGnd;
  motorRight[2]=motorRightPwm;

  pinMode(motorRight[0],OUTPUT);
  pinMode(motorRight[1],OUTPUT);
  pinMode(motorRight[2],OUTPUT);
}

void Motor::startDrivingForward(short speed)
{
  _startDrivingForwardLeftMotor(speed);
  _startDrivingForwardRightMotor(speed);
}

void Motor::startDrivingBackward(short speed)
{
  _startDrivingBackwardLeftMotor(speed);
  _startDrivingBackwardRightMotor(speed);
}

void Motor::stopMotors()
{
  _stopLeftMotor();
  _stopRightMotor();
}

void Motor::_startDrivingForwardLeftMotor(short speed)
{
  digitalWrite(motorLeft[0],HIGH);
  digitalWrite(motorLeft[1],LOW);
  analogWrite(motorLeft[2],speed);
}

void Motor::_startDrivingForwardRightMotor(short speed)
{
  digitalWrite(motorRight[0],HIGH);
  digitalWrite(motorRight[1],LOW);
  analogWrite(motorRight[2],speed);
}

void Motor::startDrivingLeftMotorForward(short speed)
{
	_startDrivingForwardLeftMotor(speed);
}

void Motor::startDrivingRightMotorForward(short speed)
{
	_startDrivingForwardRightMotor(speed);
}

void Motor::_stopLeftMotor()
{
  digitalWrite(motorLeft[0],LOW);
  digitalWrite(motorLeft[1],LOW);
  analogWrite(motorLeft[2],0);
}


void Motor::_stopRightMotor()
{
  digitalWrite(motorRight[0],LOW);
  digitalWrite(motorRight[1],LOW);
  analogWrite(motorRight[2],0);
}

void Motor::_startDrivingBackwardLeftMotor(short speed)
{
  digitalWrite(motorLeft[0],LOW);
  digitalWrite(motorLeft[1],HIGH);
  analogWrite(motorLeft[2],speed);
}

void Motor::_startDrivingBackwardRightMotor(short speed)
{
  digitalWrite(motorRight[0],LOW);
  digitalWrite(motorRight[1],HIGH);
  analogWrite(motorRight[2],speed);
}