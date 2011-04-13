
/*
 * \file
 * 	This is RS-232C process based on polling.
 * 	Note that rs232.c and rs232-slip.c cannot be used at the same time.
  */

#include "contiki.h"
#include "dev/slip.h"
#include "dev/serial.h"
#include "dev/rs232.h"

PROCESS(rs232_process, "RS-232C polling process");
/*---------------------------------------------------------------------------*/
PROCESS_THREAD(rs232_process, ev, data)
{
  static struct etimer timer;
  char ch;
  unsigned char i, stat;
  PROCESS_BEGIN();

  rs232_arch_init(RS232_BAUD_RATE);
  etimer_set(&timer, CLOCK_SECOND / 16);

  while(1) {
    PROCESS_WAIT_EVENT();

    if (etimer_expired(&timer)) {
      for (i = 0; i < RS232_BUFSIZE; i++) {
	ch = rs232_arch_poll(&stat);
	if (stat == 0) {
	  break;
	}
	/* We have an input data */
	RS232_CALLBACK(ch);
      }
      etimer_reset(&timer);
    }
  }

  PROCESS_END();
}
/*---------------------------------------------------------------------------*/
