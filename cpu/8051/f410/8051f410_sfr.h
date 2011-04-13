/**
 *
 * \file 8051f410_sfr.h
 * \brief 8051f410 registers header file for 8051f410.
 *
 *  Definitions for 8051f410 SFR registers.
 *   
 *	
 */

#ifndef REG_8051_H
#define REG_8051_H

/*  BYTE Register  */

__sfr __at (0x80) P0   ;
/* P0 */
__sbit __at (0x87) P0_7 ;
__sbit __at (0x86) P0_6 ;
__sbit __at (0x85) P0_5 ;
__sbit __at (0x84) P0_4 ;
__sbit __at (0x83) P0_3 ;
__sbit __at (0x82) P0_2 ;
__sbit __at (0x81) P0_1 ;
__sbit __at (0x80) P0_0 ;

__sfr __at (0x81) SP   ;      /*STACK POINTER*/
#define    SP	0x81
__sfr __at (0x82) DPL  ;      /*DATA POINTER - LOW BYTE*/
#define    DPL 	0x82
__sfr __at (0x83) DPH  ;      /*DATA POINTER - HIGH BYTE*/
#define    DPH	0x83
__sfr __at (0x84) CRC0CN  ;   /*CRC0 control*/
#define    CRC0CN	0x84
__sfr __at (0x85) CRC0IN  ;   /*CRC0 input data*/
#define    CRC0IN	0x85
__sfr __at (0x86) CRC0DAT  ;   /*CRC0 output data*/
#define    CRC0DAT 0x86
__sfr __at (0x87) PCON ;       /*POWER CONTROL*/
#define    PCON	0x87

__sfr __at (0x88)  TCON ;     /*TIMER CONTROL*/
__sbit __at (0x8F) TCON_TF1;  /TIMER 1 OVERFLOW FLAG**/
__sbit __at (0x8E) TCON_TR1;  /*TIMER 1 ON/OFF CONTROL*/
__sbit __at (0x8D) TCON_TF0;  /*TIMER 0 OVERFLOW FLAG*/
__sbit __at (0x8C) TCON_TR0;  /*TIMER 0 ON/OFF CONTROL*/
__sbit __at (0x8B) TCON_IE1;  /*EXT. INTERRUPT 1 EDGE FLAG*/
__sbit __at (0x8A) TCON_IT1;  /*EXT. INTERRUPT 1 TYPE*/
__sbit __at (0x89) TCON_IE0;  /*EXT. INTERRUPT 0 EDGE FLAG*/
__sbit __at (0x88) TCON_IT0;  /*EXT. INTERRUPT 0 TYPE*/

#define TCON_TF1	0x80
#define TCON_TR1	0x40
#define TCON_TF0	0x20
#define TCON_TR0	0x10
#define TCON_IE1	0x08
#define TCON_IT1	0x04
#define TCON_IE0	0x02
#define TCON_IT0	0x01



__sfr __at (0x89)   TMOD;   /* TIMER MODE */
#define  TMOD  0x89
__sfr __at (0x8A)   TL0;    /* TIMER 0 - LOW BYTE*/
#define  TL0   0x8A
__sfr __at (0x8B)   TL1;    /*TIMER 1 - LOW BYTE*/
#define  TL1   0x8B
__sfr __at (0x8C)   TH0;    /*TIMER 0 - HIGH BYTE*/
#define TH0	0x8C
__sfr __at (0x8D)   TH1;    /*TIMER 1 - HIGH BYTE*/
#define TH1	0x8D
__sfr __at (0x8E)   CKCON;  /*CLOCK CONTROL*/
#define  CKCON	0x8E
__sfr __at (0x8F)   PSCTL;  /*PROGRAM STORE R/W CONTROL*/
#define PSCTL	0x8F

__sfr __at (0x90) P1   ;
/* P1 */
__sbit __at (0x90) P1_0 ;
__sbit __at (0x91) P1_1 ;
__sbit __at (0x92) P1_2 ;
__sbit __at (0x93) P1_3 ;
__sbit __at (0x94) P1_4 ;
__sbit __at (0x95) P1_5 ;
__sbit __at (0x96) P1_6 ;
__sbit __at (0x97) P1_7 ;

__sfr __at (0x91)   TMR3CN;    /*TIMER 3 CONTROL*/
__sfr __at (0x92)   TMR3RLL;   /*TIMER 3 RELOAD REGISTER - LOW BYTE*/
__sfr __at (0x93)   TMR3RLH;   /*TIMER 3 RELOAD REGISTER - HIGH BYTE*/
__sfr __at (0x94)   TMR3L;    /*TIMER 3 - LOW BYTE*/
__sfr __at (0x95)   TMR3H;    /*TIMER 3 - HIGH BYTE*/
__sfr __at (0x96)   IDA0L;    /*Current mode DAC0 low*/
__sfr __at (0x97)   IDA0H;    /*Current mode DAC0 high*/
#define TMR3CN	0x91
#define TMR3RLL	0x92
#define TMR3RLH	0x93
#define TMR3L	0x94
#define TMR3H	0x95
#define IDA0L	0x96
#define IDA0H	0x97

__sfr __at (0x98)  SCON0 ;       /*UART0 control*/
__sbit __at (0x9F) SCON_S0MODE;  /*UART0 mode */
__sbit __at (0x9D) SCON_MCE0;    /*UART0 mce */
__sbit __at (0x9C) SCON_REN0;    /*UART0 RX enable*/
__sbit __at (0x9B) SCON_TB80;    /*UART0 TX bit 8*/
__sbit __at (0x9A) SCON_RB80;    /*UART0 RX bit 8*/
__sbit __at (0x99) SCON_TI0;     /*UART0 TX interrupt flag */
__sbit __at (0x98) SCON_RI0;     /*UART0 RX interrupt flag*/

#define SCON_S0M0DE	0x80
#define SCON_MCE0	      0x20
#define SCON_REN0		0x10
#define SCON_TB80		0x08
#define SCON_RB80		0x04
#define SCON_TI0		0x02
#define SCON_RI0		0x01


__sfr __at (0x99)   SBUF0;     /*UART0 data buffer*/
__sfr __at (0x9A)   CPT1CN;    /*Comparator1 control*/
__sfr __at (0x9B)   CPT0CN;    /*Comparator0 control*/
__sfr __at (0x9C)   CPT1MD;    /*Comparator1 mode selection*/
__sfr __at (0x9D)   CPT0MD;    /*Comparator0 mode selection*/
__sfr __at (0x9E)   CPT1MX;    /*Comparator1 mux selection*/
__sfr __at (0x9F)   CPT0MX;    /*Comparator0 mux selection*/
#define SBUF	0x99
#define CPT1CN	0x9A
#define CPT0CN	0x9B
#define CPT1MD	0x9C
#define CPT0MD	0x9D
#define CPT1MX	0x9E
#define CPT0MX	0x9F

__sfr __at (0xA0) P2   ;      /*No use*/
/* P2 */
__sbit __at (0xA0) P2_0 ;
__sbit __at (0xA1) P2_1 ;
__sbit __at (0xA2) P2_2 ;
__sbit __at (0xA3) P2_3 ;
__sbit __at (0xA4) P2_4 ;
/*__sbit __at (0xA5) P2_5 ;
__sbit __at (0xA6) P2_6 ;
__sbit __at (0xA7) P2_7 ;*/


__sfr __at (0xA1)   SPI0CFG;    /*SPI0 configuration*/
__sfr __at (0xA2)   SPI0CKR;    /*SPI0 clock rate control*/
__sfr __at (0xA3)   SPI0DAT ;   /*SPI0 data*/
__sfr __at (0xA4)   P0MDOUT;    /*Port 0 output mode configuration*/
__sfr __at (0xA5)   P1MDOUT;    /*Port 1 output mode configuration*/
__sfr __at (0xA6)   P2MDOUT ;   /*Port 2 output mode configuration*/
#define SPI0CFG	0xA1
#define SPI0CKR	0xA2
#define SPI0DAT 	0xA3
#define P0MDOUT	0xA4
#define P1MDOUT	0xA5
#define P2MDOUT 	0xA6


__sfr __at (0xA8) IE   ;      /*INTERRUPT ENABLE*/
/*IE bits*/
#define IE_EA  	 0x80
#define IE_ESPI0 	 0x20
#define IE_ET2 	 0x20
#define IE_ES    	 0x10
#define IE_ET1 	 0x08
#define IE_EX1 	 0x04
#define IE_ET0 	 0x02
#define IE_EX0 	 0x01

__sbit __at (0xAF) IE_EA;   /*GLOBAL INTERRUPT ENABLE*/
__sbit __at (0xAD) IE_ESPI0;  /*SPI0 interrupt enable*/
__sbit __at (0xAD) IE_ET2;  /*TIMER 2 INTERRUPT ENABLE*/
__sbit __at (0xAC) IE_ES;   /*SERIAL PORT INTERRUPT ENABLE */
__sbit __at (0xAB) IE_ET1;  /*TIMER 1 INTERRUPT ENABLE */
__sbit __at (0xAA) IE_EX1;  /*EXTERNAL INTERRUPT 1 ENABLE*/
__sbit __at (0xA9) IE_ET0;  /*TIMER 0 INTERRUPT ENABLE */
__sbit __at (0xA8) IE_EX0;  /*EXTERNAL INTERRUPT 0 ENABLE*/

__sfr __at (0xA9)   CLKSEL;  /*Clock select*/
__sfr __at (0xAA)   EMI0CN;  /*External memory interface control*/
__sfr __at (0xAB)   CLKMUL;  /*Clock multiplier*/
__sfr __at (0xAC)   RTC0ADR;  /*RTC0 address*/
__sfr __at (0xAD)   RTC0DAT ;  /*RTC0 data*/
__sfr __at (0xAE)   RTC0KEY ;  /*RTC0 lock and key*/
__sfr __at (0xAF)   ONESHOT;  /*Flash oneshot timing*/
#define CLKSEL	0xA9
#define EMI0CN	0xAA
#define CLKMUL	0xAB
#define RTC0ADR	0xAC
#define RTC0DAT 	0xAD
#define RTC0KEY 	0xAE
#define ONESHOT	0xAF

__sfr __at (0xB0)   P0ODEN;   /*Port0 Hi-Z overdrive mode enable */
__sfr __at (0xB1)   OSCXCN;   /*External oscillator control */
__sfr __at (0xB2)   OSCICN;   /*Internal oscillator control*/
__sfr __at (0xB3)   OSCICL;   /*Internal oscillator calibration*/
__sfr __at (0xB5)   IDA1CN;   /*Current mode DAC1 control*/
__sfr __at (0xB6)   FLSCL;    /*Flash scale*/
__sfr __at (0xB7)   FLACL;    /*Flash lock and key*/
#define P0ODEN	0xB0
#define OSCXCN	0xB1
#define OSCICN	0xB2
#define OSCICL	0xB3
#define IDA1CN	0xB5
#define FLSCL	0xB6
#define FLKEY	0xB7


#undef IP  /*INTERRUPT PRIORITY */

__sfr __at (0xB8)   IP1;   /*INTERRUPT PRIORITY */
/*IP1 bits*/
#define IP_PSPI0	0x40
#define IP_PT2	0x20
#define IP_PS	0x10
#define IP_ES	0x08
#define IP_PT1	0x04
#define IP_PX1	0x02
#define IP_PX0	0x01

__sbit __at (0xBE) IP_PSPI0;   /*SPI0 priority*/
__sbit __at (0xBD) IP_PT2;     /*TIMER 2 PRIORITY*/
__sbit __at (0xBC) IP_PS0;     /*UART0 priority	*/
__sbit __at (0xBA) IP_PT1;     /*TIMER 1 PRIORITY */
__sbit __at (0xB9) IP_PX1;     /*EXTERNAL INTERRUPT 1 PRIORITY*/
__sbit __at (0xB9) IP_PT0;     /*TIMER 0 PRIORITY*/
__sbit __at (0xB8) IP_PX0;     /*EXTERNAL INTERRUPT 0 PRIORITY*/

__sfr __at (0xB9)   IDA0CN;  /*Current mode DAC0 control*/
__sfr __at (0xBA)   ADC0TK;  /*ADC0 tracking*/
__sfr __at (0xBB)   ADC0MX;  /*ADC0 mux*/
__sfr __at (0xBC)   ADC0CF;  /*ADC0 configuration*/
__sfr __at (0xBD)   ADC0L;  /* ADC0 data low*/
__sfr __at (0xBE)   ADC0H ;   /*ADC0 data high*/
__sfr __at (0xBF)   P1MASK;   /*Port1 mask*/
#define IDA0CN	0xB9
#define ADC0TK	0xBA
#define ADC0MX	0xBB
#define ADC0CF	0xBC
#define ADC0L	0xBD
#define ADC0H 	0xBE
#define P1MASK	0xBF


__sfr __at (0xC0)   SMB0CN;      /*SMBUS 0 CONTROL*/

__sbit __at (0xC7) SMB0CN_MASTER; 	/*SMBUS 0 master/slave */
__sbit __at (0xC6) SMB0CN_TXMODE;	/*SMBUS 0 transmit mode */
__sbit __at (0xC5) SMB0CN_STA;     	/*SMBUS 0 START FLAG   */
__sbit __at (0xC4) SMB0CN_STO;  	/*SMBUS 0 STOP FLAG*/
__sbit __at (0xC3) SMB0CN_ACKRQ;    /*SMBUS 0 acknowledge request*/
__sbit __at (0xC2) SMB0CN_ARBLOST;  /*SMBUS 0 arbitration lost*/
__sbit __at (0xC1) SMB0CN_ACK;	/*SMBUS 0 acknowledge flag*/
__sbit __at (0xC0) SMB0CN_SI; 	/*SMBus0 interrupt pending flag*/

#define SMB0CN_MASTER	 0x80
#define SMB0CN_TXMODE	 0x40
#define SMB0CN_STA	 0x20
#define SMB0CN_STO	 0x10
#define SMB0CN_ACKRQ     0x08
#define SMB0CN_ARBLOST	 0x04
#define SMB0CN_ACK	 0x02
#define SMB0CN_SI	 	 0x01


__sfr __at (0xC1)   SMB0CF;     /*SMBUS 0 STATUS*/
__sfr __at (0xC2)   SMB0DAT;     /*SMBUS 0 DATA*/
__sfr __at (0xC3)   ADC0GTL;     /*ADC0 window greater than low byte*/
__sfr __at (0xC4)   ADC0GTH;     /*ADC0 window greater than high byte*/
__sfr __at (0xC5)   ADC0LTL;     /*ADC0 window less than low byte*/
__sfr __at (0xC6)   ADC0LTH;     /*ADC0 window less than high byte*/
__sfr __at (0xC7)   P0MASK ;     /*Port0 mask*/
#define SMB0CF	0xC1
#define SMB0DAT	0xC2
#define ADC0GTL	0xC3
#define ADC0GTH	0xC4
#define ADC0LTL	0xC5
#define ADC0LTH	0xC6
#define P0MASK 	0xC7


__sfr __at (0xC8)   TMR2CN;      /*TIMER/counter 2 CONTROL*/

__sbit __at (0xCF) TMR2CN_TF2H;    /*Timer 2 high byte overflow flag*/
__sbit __at (0xCE) TMR2CN_TF2L;    /*Timer 2 low byte overflow flag */
__sbit __at (0xCD) TMR2CN_TF2LEN;  /*Timer 2 low byte interrupt enable*/
__sbit __at (0xCC) TMR2CN_TF2CEN;  /*Timer 2 capture enable*/
__sbit __at (0xCB) TMR2CN_T2SPLIT; /*Timer 2 split mode enable */
__sbit __at (0xCA) TMR2CN_TR2;     /*Timer 2 on/off control*/
__sbit __at (0xC9) TMR2CN_T2RCLK;  /*Timer 2 RTC capture mode select*/
__sbit __at (0xC8) TMR2CN_T2XCLK;  /*Timer 2 external clock select*/

#define TMR2CN_TF2H	       0x80
#define TMR2CN_TF2L		 0x40
#define TMR2CN_TF2LEN		 0x20
#define TMR2CN_TF2CEN		 0x10
#define TMR2CN_T2SPLIT		 0x08
#define TMR2CN_TR2	       0x04
#define TMR2CN_T2RCLK	       0x02
#define TMR2CN_T2XCLK2		 0x01

__sfr __at (0xCA)   TMR2RLL;     /*Timer/counter 2 reload low*/
__sfr __at (0xCB)   TMR2RLH;     /*Timer/counter 2 reload high*/
__sfr __at (0xCC)   TMR2L ;      /*Timer/counter 2 low*/
__sfr __at (0xCD)   TMR2H;       /*Timer/counter 2 high*/
__sfr __at (0xCD)   PCA0CPM5;    /*PCA0 module 5 mode*/
__sfr __at (0xCF)   P1MAT ;      /*Port1 match*/
#define TMR2RLL	0xCA
#define TMR2RLH	0xCB
#define TMR2L 	0xCC
#define TMR2H 	0xCD
#define PCA0CPM5	0xCD
#define P1MAT 	0xCF

__sfr __at (0xD0) PSW  ;   /*PROGRAM STATUS WORD*/ 
/*  PSW   */
__sbit __at (0xD0) P    ;  /* ACCUMULATOR PARITY FLAG*/
__sbit __at (0xD1) F1   ;  /*USER FLAG 1*/
__sbit __at (0xD2) OV   ;  /*OVERFLOW FLAG */
__sbit __at (0xD3) RS0  ;  /*REGISTER BANK SELECT 0*/
__sbit __at (0xD4) RS1  ;  /*REGISTER BANK SELECT 1 */
__sbit __at (0xD5) F0   ;  /*USER FLAG 0 */
__sbit __at (0xD6) AC   ;  /*AUXILIARY CARRY FLAG*/
__sbit __at (0xD7) CY   ;  /*CARRY FLAG*/

#define CY	       0x80
#define AC	       0x40
#define F0 	       0x20
#define RS1	       0x10
#define RS0	       0x08
#define OV	       0x04
#define F1	       0x02
#define P	       0x01


__sfr __at (0xD1)   REF0CN;       	 /*VOLTAGE REFERENCE 0 CONTROL*/
__sfr __at (0xD2)   PCA0CPL5;        /*PCA0 module 5 low*/
__sfr __at (0xD3)   PCA0CPH5 ;       /*PCA0 module 5 high*/
__sfr __at (0xD4)   P0SKIP;      	 /*Port 0 skip*/
__sfr __at (0xD5)   P1SKIP;      	 /*Port 1 skip*/
__sfr __at (0xD6)   P2SKIP ;         /*Port 2 skip*/
__sfr __at (0xD7)   P0MAT;      	 /*Port 0 match*/
#define REF0CN	0xD1
#define PCA0CPL5	0xD2
#define PCA0CPH5	0xD3
#define P0SKIP	0xD4
#define P1SKIP	0xD5
#define P2SKIP	0xD6
#define P0MAT	0xD7


__sfr __at (0xD8)   PCA0CN;    /*PCA 0 COUNTER CONTROL */ 

#define PCA0CN_CF 	0x80
#define PCA0CN_CR 	0x40
#define PCA0CN_CCF5	0x20
#define PCA0CN_CCF4	0x10
#define PCA0CN_CCF3	0x08
#define PCA0CN_CCF2	0x04
#define PCA0CN_CCF1	0x02
#define PCA0CN_CCF0	0x01

__sbit __at (0xDF) PCA0CN_CF;    /*PCA 0 COUNTER OVERFLOW FLAG   */
__sbit __at (0xDE) PCA0CN_CR;    /*PCA 0 COUNTER RUN CONTROL BIT */
__sbit __at (0xDD) PCA0CN_CCF5;  /*PCA 0 MODULE 5 INTERRUPT FLAG */
__sbit __at (0xDC) PCA0CN_CCF4;  /*PCA 0 MODULE 4 INTERRUPT FLAG */
__sbit __at (0xDB) PCA0CN_CCF3;  /*PCA 0 MODULE 3 INTERRUPT FLAG */
__sbit __at (0xDA) PCA0CN_CCF2;  /*PCA 0 MODULE 2 INTERRUPT FLAG */
__sbit __at (0xD9) PCA0CN_CCF1;  /*PCA 0 MODULE 1 INTERRUPT FLAG */
__sbit __at (0xD8) PCA0CN_CCF0;  /*PCA 0 MODULE 0 INTERRUPT FLAG */


__sfr __at (0xD9)   PCA0MD;      /*PCA0 mode*/
__sfr __at (0xDA)   PCA0CPM0;    /*CONTROL REGISTER FOR PCA 0 MODULE 0*/
__sfr __at (0xDB)   PCA0CPM1;    /*CONTROL REGISTER FOR PCA 0 MODULE 1*/
__sfr __at (0xDC)   PCA0CPM2;    /*CONTROL REGISTER FOR PCA 0 MODULE 2*/
__sfr __at (0xDD)   PCA0CPM3;    /*CONTROL REGISTER FOR PCA 0 MODULE 3*/
__sfr __at (0xDE)   PCA0CPM4;    /*CONTROL REGISTER FOR PCA 0 MODULE 4 */
__sfr __at (0xDF)   CRC0FLIP;    /*CONTROL REGISTER FOR PCA 0 MODULE 4 */
#define PCA0MD	0xD9 
#define PCA0CPM0	0xDA
#define PCA0CPM1	0xDB
#define PCA0CPM2	0xDC
#define PCA0CPM3	0xDD
#define PCA0CPM4	0xDE
#define CRC0FLIP	0xDF

__sfr __at (0xE0)   ACC;          /* ACCUMULATOR*/   
__sfr __at (0xE1)   XBR0;         /*DIGITAL CROSSBAR CONFIGURATION REGISTER 0  */  
__sfr __at (0xE2)   XBR1;         /*DIGITAL CROSSBAR CONFIGURATION REGISTER 1 */  
__sfr __at (0xE3)   PFE0CN;       /*Prefetch engine control*/  
__sfr __at (0xE4)   IT01CF;       /*INT0/INT1 configuration*/  
__sfr __at (0xE6)   EIE1;         /*Extended INTERRUPT ENABLE 1  */  
__sfr __at (0xE7)   EIE2;         /*Extended INTERRUPT ENABLE 2 */  
#define ACC	      0xE0
#define XBR0	0xE1
#define XBR1	0xE2
#define PFE0CN	0xE3
#define IT01CF	0xE4
#define EIE1	0xE6
#define EIE2	0xE7


__sfr __at (0xE8)   ADC0CN;       /* ADC 0 CONTROL*/  

__sbit __at (0xEF) ADC0CN_AD0EN ;   /*ADC 0 ENABLE   */  
__sbit __at (0xEE) ADC0CN_BURSTEN;  /* ADC0 burst mode enable*/  
__sbit __at (0xED) ADC0CN_AD0INT;   /* ADC0 conv. complete interrupt flag*/  
__sbit __at (0xEC) ADC0CN_AD0BUSY;  /*ADC0 busy flag */  
__sbit __at (0xEB) ADC0CN_AD0WINT;  /* ADC0 window compare interrupt flag*/  
__sbit __at (0xEA) ADC0CN_AD0LJST;  /*ADC0 left justify select */  
__sbit __at (0xE9) ADC0CN_AD0CM1;   /*ADC0 conversion mode select 1 */  
__sbit __at (0xE8) ADC0CN_AD0CM0;   /* ADC0 conversion mode select 0 */  

#define ADC0CN_AD0EN 	0x80
#define ADC0CN_BURSTEN	0x40
#define ADC0CN_AD0INT	0x20
#define ADC0CN_AD0BUSY	0x10
#define ADC0CN_AD0WINT	0x08
#define ADC0CN_AD0LJST	0x04
#define ADC0CN_AD0CM1	0x02
#define ADC0CN_AD0CM0	0x01



__sfr __at (0xE9)   PCA0CPL1;    /* PCA0 module 1 capture low*/  
__sfr __at (0xEA)   PCA0CPH1;    /*PCA0 module 1 capture high   */  
__sfr __at (0xEB)   PCA0CPL2;    /*PCA0 module 2 capture low  */  
__sfr __at (0xEC)   PCA0CPH2;    /* PCA0 module 2 capture high */  
__sfr __at (0xED)   PCA0CPL3;    /*PCA0 module 3 capture low   */  
__sfr __at (0xEE)   PCA0CPH3;    /*PCA0 module 3 capture high   */  
__sfr __at (0xEF)   RSTSRC;      /* RESET SOURCE*/  
#define PCA0CPL1	      0xE9
#define PCA0CPH1	      0xEA
#define PCA0CPL2        0xEB
#define PCA0CPH2	      0xEC
#define PCA0CPL3	      0xED
#define PCA0CPH3	      0xEE
#define RSTSRC	      0xEF

__sfr __at (0xF0)   B;          /*B REGISTER */  
__sfr __at (0xF1)   P0MDIN;     /*Port 0 input mode configuration */ 
__sfr __at (0xF2)   P1MDIN;     /*Port 1 input mode configuration */ 
__sfr __at (0xF3)   P2MDIN;     /*Port 2 input mode configuration */ 
__sfr __at (0xF4)   IDA1L;      /*Current mode DAC1 data low */ 
__sfr __at (0xF5)   IDA1H;      /*Current mode DAC1 data high */ 
__sfr __at (0xF6)   EIP1;       /*Extended INTERRUPT PRIORITY REGISTER 1 */  
__sfr __at (0xF7)   EIP2;       /*Extended INTERRUPT PRIORITY REGISTER 2  */  
#define B	            0xF0
#define P0MDIN	      0xF1
#define P1MDIN	      0xF2
#define P2MDIN	      0xF3
#define IDA1L	      0xF4
#define IDA1H	      0xF5
#define EIP1	      0xF6
#define EIP2	      0xF7

__sfr __at (0xF8)   SPI0CN;      /*SERIAL PERIPHERAL INTERFACE 0 CONTROL */  

__sbit __at (0xFF) SPI0CN_SPIF;   /*SPI 0 INTERRUPT FLAG	 */  
__sbit __at (0xFE) SPI0CN_WCOL;   /*SPI 0 WRITE COLLISION FLAG */  
__sbit __at (0xFD) SPI0CN_MODF;   /*SPI 0 MODE FAULT FLAG */  
__sbit __at (0xFC) SPI0CN_RXOVRN; /*SPI 0 RX OVERRUN FLAG */  
__sbit __at (0xFB) SPI0CN_NSSMD1;  /*SPI0 slave select mode 1*/  
__sbit __at (0xFA) SPI0CN_NSSMD0; /*SPI0 slave select mode 0 */  
__sbit __at (0xF9) SPI0CN_TXBMT ;  /*SPI0 TX buffer empty flag */  
__sbit __at (0xF8) SPI0CN_SPIEN;  /*SPI0 SPI0 enable*/  

#define SPI0CN_SPIF	0x80
#define SPI0CN_WCOL	0x40
#define SPI0CN_MODF	0x20
#define SPI0CN_RXOVRN	0x10
#define SPI0CN_NSSMD1	0x08
#define SPI0CN_NSSMD0	0x04
#define SPI0CN_TXBMT 	0x02
#define SPI0CN_SPIEN	0x01


__sfr __at (0xF9)   PCA0L ;        /*PCA0 counter low */  
__sfr __at (0xFA)   PCA0H;         /*PCA0 counter high */  
__sfr __at (0xFB)   PCA0CPL0;      /*PCA0 module 0 capture low  */  
__sfr __at (0xFC)   PCA0CPH0 ;     /*PCA0 module 0 capture high */  
__sfr __at (0xFD)   PCA0CPL4;      /*PCA0 module 4 capture low  */  
__sfr __at (0xFE)   PCA0CPH4;      /*PCA0 module 4 capture high */  
__sfr __at (0xFF)   VDM0CN;        /*VDD monitor control  */  
#define PCA0L 	            0xF9
#define PCA0H	            0xFA
#define PCA0CPL0	            0xFB
#define PCA0CPH0	            0xFC
#define PCA0CPL4	            0xFD
#define PCA0CPH4	            0xFE
#define VDM0CN	            0xFF


/* Interrupt Priorities */
#define INTERRUPT_INT0             0   // External Interrupt 0
#define INTERRUPT_TIMER0           1   // Timer0 Overflow
#define INTERRUPT_INT1             2   // External Interrupt 1
#define INTERRUPT_TIMER1           3   // Timer1 Overflow
#define INTERRUPT_UART0            4   // Serial Port 0
#define INTERRUPT_TIMER2           5   // Timer2 Overflow
#define INTERRUPT_SPI0             6   // Serial Peripheral Interface 0
#define INTERRUPT_SMBUS0           7   // SMBus0 Interface
#define INTERRUPT_RTC0             8   // RTC0 Interface
#define INTERRUPT_ADC0_WINDOW      9   // ADC0 Window Comparison
#define INTERRUPT_ADC0_EOC         10  // ADC0 End Of Conversion
#define INTERRUPT_PCA0             11  // PCA0 Peripheral
#define INTERRUPT_COMPARATOR0      12  // Comparator0
#define INTERRUPT_COMPARATOR1      13  // Comparator1
#define INTERRUPT_TIMER3           14  // Timer3 Overflow
#define INTERRUPT_VREG_DROPOUT     15  // VREG dropout
#define INTERRUPT_PORT_MATCH       16  // Port Match


#endif /*8051*/
