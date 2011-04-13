#ifndef UART_H
#define UART_H

#include "contiki-conf.h"

#include "8051f410_sfr.h"

void uart0_writeb(uint8_t byte);

void uart0_set_input(int (*input)(unsigned char c));

void uart0_rxISR( void ) __interrupt (URX0_VECTOR);
void uart0_txISR( void ) __interrupt (UTX0_VECTOR);


#endif /*UART_H*/
