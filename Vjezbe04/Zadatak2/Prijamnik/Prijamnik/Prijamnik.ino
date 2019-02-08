#include <VirtualWire.h>
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
         Serial.println(message);
        }
        if(strcmp(message, "upali")==0)
        {
          Serial.println(message);
          digitalWrite(LED_BUILTIN, HIGH);
        } 
        else if(strcmp(message, "ugasi")==0)
        {
          Serial.println(message);
          digitalWrite(LED_BUILTIN, LOW);
        } 
     }

}
