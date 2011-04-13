
/**
 * \file
 *         Implementation of the clock functions for the 8051 CPU
 */

/**
 * TODO: Implement clock_fine() and clock_fine_max_ticks() using another timer?
 */

#include <stdio.h> /*for debug printf*/
#include "sys/clock.h"
#include "sys/etimer.h"
#include "8051f007_sfr.h"


/*Sleep timer runs on the 32k RC osc. */
/* One clock tick is 7.8 ms */
#define TICK_VAL (32768/128)

#define MAX_TICKS (~((clock_time_t)0) / 2)

/* Used in sleep timer interrupt for calculating the next interrupt time */
static unsigned long timer_value;
/*starts calculating the ticks right after reset*/
static volatile clock_time_t count = 0;
/*calculates seconds*/
static volatile clock_time_t seconds = 0;

/*---------------------------------------------------------------------------*/
/**
 * One delay is about 0.6 us, so this function delays for len * 0.6 us
 */
void
clock_delay(unsigned int len)
{
  unsigned int i;
  for(i = 0; i< len; i++) {
    __asm
      nop
    __endasm;
  }
}
/*---------------------------------------------------------------------------*/
/**
 * Wait for a multiple of ~8 ms (a tick)
 */
void
clock_wait(int i)
{
  clock_time_t start;

  start = clock_time();
  while(clock_time() - start < (clock_time_t)i);
}
/*---------------------------------------------------------------------------*/
clock_time_t
clock_time(void)
{
  return count;
}
/*---------------------------------------------------------------------------*/
CCIF unsigned long
clock_seconds(void)
{
  return seconds;
}
/*---------------------------------------------------------------------------*/
void
clock_init(void)
{
 /* IE |= STIE;		interrupt enable for sleep timers. STIE=Interrupt mask, CPU. */
}
/*---------------------------------------------------------------------------*/
void
c8051_clock_ISR(void) __interrupt (5)
{
/*  IE_EA = 0;	interrupt disable*/
  /* When using the cooperative scheduler the timer 2 ISR is only
     required to increment the RTOS tick count. */
  
  /*Read value of the ST0,ST1,ST2 and then add TICK_VAL and write it back.
    Next interrupt occurs after the current time + TICK_VAL*/
  ++count;
  
  /* Make sure the CLOCK_CONF_SECOND is a power of two, to ensure
     that the modulo operation below becomes a logical and and not
     an expensive divide. Algorithm from Wikipedia:
     http://en.wikipedia.org/wiki/Power_of_two */
#if (CLOCK_CONF_SECOND & (CLOCK_CONF_SECOND - 1)) != 0
#error CLOCK_CONF_SECOND must be a power of two (i.e., 1, 2, 4, 8, 16, 32, 64, ...).
#error Change CLOCK_CONF_SECOND in contiki-conf.h.
#endif
  if(count % CLOCK_CONF_SECOND == 0) {
    ++seconds;
  }
  
  if(etimer_pending() &&
     (etimer_next_expiration_time() - count - 1) > MAX_TICKS) {	/*core/sys/etimer.c*/
    etimer_request_poll();
  }
  
 /* IRCON &= ~STIF;		IRCON.STIF=Sleep timer interrupt flag. This flag called this interrupt func, now reset it*/
/*  IE_EA = 1;		interrupt enable*/
}
/*---------------------------------------------------------------------------*/
