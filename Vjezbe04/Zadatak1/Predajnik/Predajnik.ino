#include <VirtualWire.h>

void setup() {
  vw_set_ptt_inverted(true);
  vw_set_tx_pin(8);
  vw_setup(2000);

}

void loop() {
   const char *msgUpali = "upali";
   vw_send((uint8_t *)msgUpali, strlen(msgUpali));
   delay(3000);
   vw_wait_tx();
   const char *msgUgasi = "ugasi";
   vw_send((uint8_t *)msgUgasi, strlen(msgUgasi));
   vw_wait_tx();
}
