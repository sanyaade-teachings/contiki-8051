/**
 * \file
 *   uart write routines
 *   non-interrupt routines which may be called from ISR's and therefore should be in HOME bank.
 *
 */
#include <stdlib.h>
#include <string.h>

#include "8051f410_sfr.h"

#include "dev/leds.h"
#include "dev/uart.h"

/*---------------------------------------------------------------------------*/
/* Write one byte over the UART. */
void
uart0_writeb(uint8_t byte)
{
  TI0 = 0;   /* UART0 TX interrupt flag*/
  SBUF0 = byte;
  while(!TI0 ); /* Wait until byte has been transmitted. */
  TI0 = 0;
}
/*---------------------------------------------------------------------------*/

