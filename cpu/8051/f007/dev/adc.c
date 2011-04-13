/**
 * \file
 *         ADC functions
 * \author
 * 	Anthony "Asterisk" Ambuehl
 *
 *  ADC initialization routine, trigger and result conversion routines.
 *
 */

#include <stdio.h>

#include "contiki.h"
#include "sys/clock.h"

#include "8051f007_sfr.h"
#include "dev/adc.h"


/*---------------------------------------------------------------------------*/
void adc_init(void) 
{
  /*unsigned char jj;
  *while (!SLEEP&(HFRC_STB)) {}
  * power both 32MHz crystal and 15MHz RC 
  *SLEEP &= ~(OSC_PD); 
  * printf("SLEEP 1 %x\n",SLEEP); 
  * then wait for it to stabilize 
  *while (!SLEEP&(XOSC_STB)) {}
  * printf("SLEEP 2 %x\n",SLEEP); 
  * then wait 64uS more 
  *clock_delay(150);
  * switch to 32MHz clock 
  * printf("switch to 32MHz %x\n",CLKCON); 
  *CLKCON &= ~(OSC);
  * printf("switched to 32MHz %x\n",CLKCON); 
  * power down 15MHz RC clock 
  *SLEEP |= OSC_PD; 
  * printf("pwr down hfrc\n",SLEEP);  */

}
/* single sample trigger 
*void adc_single_shot(void) __banked
*{
*  ADC0CF |= 0xBC;
*}*/

/* convert adc results */
int16_t adc_convert_result(int16_t data)  {
  data = (0xfffc&data)>>2;
  return data; 
}
/* read/convert last conversion result */
int16_t adc_get_last_conv() __banked {
  int16_t result;
  result = (ADC0H<<8)|(ADC0L);
  result  = (0xfffc&result)>>2;
  return result; 
}
