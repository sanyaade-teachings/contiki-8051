#include <stdio.h>

#include "contiki.h"
#include "sys/clock.h"
#include "sys/autostart.h"
#include "contiki-conf.h" 
#include "dev/serial-line.h"
#include "dev/leds.h"
#include "dev/uart.h"

volatile int i, a;
unsigned short node_id = 0;			/* Manually sets MAC address when > 0 */

/*---------------------------------------------------------------------------*/
static void
print_processes(struct process * const processes[])
{
  printf("Starting");
  while(*processes != NULL) {
    printf(" '%s'", (*processes)->name);
    processes++;
  }
  printf("\n");
}
/*---------------------------------------------------------------------------*/
void
putchar(char c)
{
  /* UART0 used for debugging on Sensinode products. */
  uart0_writeb(c);
}
/*---------------------------------------------------------------------------*/
static void
fade(int l)
{
  int k, j;
  for(k = 0; k < 400; ++k) {
    j = k > 200? 400 - k: k;

    leds_on(l);
    for(i = 0; i < j; ++i) {
      a = i;
    }
    leds_off(l);
    for(i = 0; i < 200 - j; ++i) {
      a = i;
    }
  }
}
/*---------------------------------------------------------------------------*/
int
main(void)
{

  /* Hardware initialization 
*  bus_init();*/

  leds_init();
  fade(LEDS_GREEN);

 /* uart0_init(115200);*/
  uart0_set_input(serial_line_input_byte);

  /* initialize process manager. */
  process_init();

  serial_line_init();

  printf("\n" CONTIKI_VERSION_STRING " started\n");

  /* start services */
  process_start(&etimer_process, NULL);

  fade(LEDS_RED);

  autostart_start(autostart_processes);

  while(1) {
    process_run();
    etimer_request_poll();
  }
}
/*---------------------------------------------------------------------------*/
