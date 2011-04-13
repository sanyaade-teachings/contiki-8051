/**
 * \file
 *
 *   uart write routines
 *   interrupt routines which must be in HOME bank.  handles received data from UART.
 *
 */
#include <stdlib.h>
#include <string.h>

#include "8051f410_sfr.h"

#include "dev/leds.h"
#include "dev/uart.h"

static int (*uart0_input_handler)(unsigned char c);
/*---------------------------------------------------------------------------*/
void
uart0_set_input(int (*input)(unsigned char c))
{
  uart0_input_handler = input;
}

/*---------------------------------------------------------------------------*/
void
uart0_rxISR(void) __interrupt (URX0_VECTOR)
{
  SCON0_RI0 = 0;            
/*URX0IF – USART0 RX interrupt flag. Set to 1 when USART0
* interrupt occurs and cleared when CPU vectors to the interrupt
* service routine*/

  if(uart0_input_handler != NULL) {
    uart0_input_handler(SBUF);
  }
}
/*---------------------------------------------------------------------------*/
void
uart0_txISR( void ) __interrupt (UTX0_VECTOR)
{
}
/*---------------------------------------------------------------------------*/

