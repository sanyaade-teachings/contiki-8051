#ifndef UART_H
#define UART_H

#include "contiki-conf.h"

#include "8051f007_sfr.h"

void uart0_writeb(uint8_t byte);

void uart0_set_input(int (*input)(unsigned char c));

void uart0_rxISR( void ) __interrupt (4);


#endif /*UART_H*/
