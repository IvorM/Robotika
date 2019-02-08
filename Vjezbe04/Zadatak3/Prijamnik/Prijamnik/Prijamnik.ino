#include <VirtualWire.h>
#include <bibliotekaMotor.h>
Motor motor(4,5,9,2,3,8);
void setup() {
    Serial.begin(9600);
    vw_set_ptt_inverted(true);
    vw_set_rx_pin(22);
    vw_setup(2000);      
    vw_rx_start();

}

void loop() {
  uint8_t buf[VW_MAX_MESSAGE_LEN];
    uint8_t buflen = VW_MAX_MESSAGE_LEN;
    if (vw_get_message(buf, &buflen)) 
    {
      char message[VW_MAX_MESSAGE_LEN];
       
        for ( int i = 0; i < buflen; i++)
        {
         message[i] =(char)buf[i];
        }
        Serial.println(message[0]);
        Serial.println(strcmp(message[0], 'S')==0);
        if(strcmp(message, "L")==0)
        {
           motor.startDrivingRightMotorForward(motor.maxSpeed);
           motor.startDrivingLeftMotorBackward(motor.maxSpeed);
        } 
        else if(strcmp(message, "D")==0)
        {
           motor.startDrivingLeftMotorForward(motor.maxSpeed);
           motor.startDrivingRightMotorBackward(motor.maxSpeed);
        }
        else if(strcmp(message, "S")==0)
        {
          motor.stopMotors();
        }  
     }
}
