#include <VirtualWire.h>
char received;

void setup() {
   Serial.begin(9600);   
   vw_set_ptt_inverted(true); 
   vw_set_tx_pin(8);
   vw_setup(2000);    
}

void loop() {
   if(Serial.available() > 0)
    {
      received = Serial.read();
    }
    
    if(received == 'L')
    {  
      const char *msg = "L";
      vw_send((uint8_t *)msg, strlen(msg));
      vw_wait_tx();
      delay(200);
    }
    else if(received == 'D'){
      const char *msg = "D";
      vw_send((uint8_t *)msg, strlen(msg));
      vw_wait_tx();
    }
    else if(received == 'S'){
      const char *msg = "S";
      vw_send((uint8_t *)msg, strlen(msg));
      vw_wait_tx();
    }
}
