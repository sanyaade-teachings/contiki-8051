/*
 * \file
 * 	This is RS-232C process based on polling.
 */

#ifndef __RS232_H__
#define __RS232_H__

/*
 * Implement the following methods for each platform.
 */

/*
 * An architecture-depend implementation of RS-232C initialization.
 */
void rs232_arch_init(unsigned long ubr);

/*
 * An architecture-depend implementation of RS-232C polling.
 * @return character, stat == zero if no input.
 */
unsigned char rs232_arch_poll(unsigned char* stat);

/*
 * An architecture-depend implementation of RS-232C writing a byte.
 */
void rs232_arch_writeb(unsigned char ch);

PROCESS_NAME(rs232_process);

/*
 * if you want to use simple serial communication,
 * define RS232_CONF_CALLBACK as serial_input_byte.
 * The default is SLIP.
 */
#ifdef RS232_CONF_CALLBACK
#define RS232_CALLBACK                  RS232_CONF_CALLBACK
#else /* RS232_CONF_CALLBACK */
#define RS232_CALLBACK                  slip_input_byte
#endif /* RS232_CONF_CALLBACK */

#ifdef RS232_CONF_BUFISZE
#define RS232_BUFSIZE RS232_CONF_BUFISZE
#else /* RS232_CONF_BUFISZE */
#define RS232_BUFSIZE 64
#endif /* RS232_CONF_BUFISZE */

#ifdef RS232_CONF_BAUD_RATE
#define RS232_BAUD_RATE RS232_CONF_BAUD_RATE
#else /* RS232_CONF_BAUD_RATE */
#define RS232_BAUD_RATE 9600
#endif /* RS232_CONF_BAUD_RATE */

#endif /* __RS232_H__ */
