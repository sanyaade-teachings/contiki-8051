/**
 * \file
 *   uart write routines
 *   non-interrupt routines which may be called from ISR's and therefore should be in HOME bank.
 *
 */
#include <stdlib.h>
#include <string.h>

#include "8051f007_sfr.h"

#include "dev/leds.h"
#include "dev/uart.h"

/*---------------------------------------------------------------------------*/
/* Write one byte over the UART. */
void
uart0_writeb(uint8_t byte)
{
  SCON_TI = 0;   /* USART0 TX interrupt flag*/
  SBUF = byte;
  while(!SCON_TI ); /* Wait until byte has been transmitted. */
  SCON_TI = 0;
}
/*---------------------------------------------------------------------------*/

