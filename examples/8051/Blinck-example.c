/* 
* Blink every 500 milliseconds
*/
#include "contiki.h"
#include "dev/leds.h"

static int period = CLOCK_SECOND / 2;

PROCESS(blinker, "Blinker");
AUTOSTART_PROCESSES(&blinker);

PROCESS_THREAD(blinker, ev, data) 
{
   static struct etimer et;

   PROCESS_BEGIN();	

   etimer_set(&et, period);	
   while(1) {
      PROCESS_WAIT_EVENT();
      if(etimer_expired(&et)) {
         /* Toggle LED state */
         if(leds_get() == 0) {
            leds_on(LEDS_ALL);
         } else {
            leds_off(LEDS_ALL);
         }         
        /*  printf("Is there anybody out there?\n");*/
         /* Set timer again */
         etimer_set(&et, period);
      }
   }
   PROCESS_END();
}