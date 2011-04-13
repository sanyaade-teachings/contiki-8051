/**
 *
 * \file 8051f007_sfr.h
 * \brief 8051f007 registers header file for 8051f007.
 *
 *  Definitions for 8051f007 SFR registers.
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

__sfr __at (0x81) SP   ;   /*STACK POINTER*/
#define    SP	0x81
__sfr __at (0x82) DPL  ;   /*DATA POINTER - LOW BYTE*/
#define    DPL 	0x82
__sfr __at (0x83) DPH  ;   /*DATA POINTER - HIGH BYTE*/
#define    DPH	0x83
__sfr __at (0x87) PCON ;  /*POWER CONTROL*/
#define    PCON	0x87

__sfr __at (0x88)  TCON ;     /*TIMER CONTROL*/
__sbit __at (0x8F) TCON_TF1;  /*TIMER 1 OVERFLOW FLAG*/
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

__sfr __at (0x91)  TMR3CN;    /*TIMER 3 CONTROL*/
__sfr __at (0x92)  TMR3RLL;   /*TIMER 3 RELOAD REGISTER - LOW BYTE*/
__sfr __at (0x93)  TMR3RLH;   /*TIMER 3 RELOAD REGISTER - HIGH BYTE*/
__sfr __at (0x94)   TMR3L;    /*TIMER 3 - LOW BYTE*/
__sfr __at (0x95)   TMR3H;    /*TIMER 3 - HIGH BYTE*/
#define TMR3CN	0x91
#define TMR3RLL	0x92
#define TMR3RLH	0x93
#define TMR3L	0x94
#define TMR3H	0x95


__sfr __at (0x98)  SCON ;     /*SERIAL PORT CONTROL*/
__sbit __at (0x9F) SCON_SM0;  /*SERIAL MODE CONTROL BIT 0 */
__sbit __at (0x9E) SCON_SM1;  /*SERIAL MODE CONTROL BIT 1*/
__sbit __at (0x9D) SCON_SM2;  /*MULTIPROCESSOR COMMUNICATION ENABLE */
__sbit __at (0x9C) SCON_REN;  /*RECEIVE ENABLE*/
__sbit __at (0x9B) SCON_TB8;  /*TRANSMIT BIT 8*/
__sbit __at (0x9A) SCON_RB8;  /*RECEIVE BIT 8*/
__sbit __at (0x99) SCON_TI;   /*TRANSMIT INTERRUPT FLAG */
__sbit __at (0x98) SCON_RI;   /*RECEIVE INTERRUPT FLAG*/

/*#define SCON_SM0	0x80*/
/*#define SCON_SM1	0x40*/
/*#define SCON_SM2	0x20*/
/*#define SCON_REN	0x10*/
/*#define SCON_TB8	0x08*/
/*#define SCON_RB8	0x04*/
/*#define SCON_TI	0x02*/
/*#define SCON_RI	0x01*/


__sfr __at (0x99)   SBUF;     /*SERIAL PORT BUFFER*/
__sfr __at (0x9A)   SPI0CFG;  /*SERIAL PERIPHERAL INTERFACE 0 CONFIGURATION*/
__sfr __at (0x9B)   SPI0DAT;  /*SERIAL PERIPHERAL INTERFACE 0 DATA*/
__sfr __at (0x9D)   SPI0CKR;  /*SERIAL PERIPHERAL INTERFACE 0 CLOCK RATE CONTROL*/
__sfr __at (0x9E)   CPT0CN;   /*COMPARATOR 0 CONTROL*/
__sfr __at (0x9F)   CPT1CN;   /*COMPARATOR 1 CONTROL*/
/*#define SBUF	0x99*/
#define SPI0CFG	0x9A
#define SPI0DAT	0x9B
#define SPI0CKR	0x9D
#define CPT0CN	0x9E
#define CPT1CN	0x9F

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


__sfr __at (0xA4)   PRT0CF;   /*PORT 0 CONFIGURATION */
__sfr __at (0xA5)   PRT1CF;   /*PORT 1 CONFIGURATION */
__sfr __at (0xA6)   PRT2CF;   /*PORT 2 CONFIGURATION*/
__sfr __at (0xA7)   PRT3CF;   /*PORT 3 CONFIGURATION*/
#define PRT0CF	0xA4
#define PRT1CF	0xA5
#define PRT2CF	0xA6
#define PRT3CF	0xA7


__sfr __at (0xA8) IE   ;      /*INTERRUPT ENABLE*/

__sbit __at (0xAF) IE_EA;   /*GLOBAL INTERRUPT ENABLE*/
__sbit __at (0xAD) IE_ET2;  /*TIMER 2 INTERRUPT ENABLE*/
__sbit __at (0xAC) IE_ES;   /*SERIAL PORT INTERRUPT ENABLE */
__sbit __at (0xAB) IE_ET1;  /*TIMER 1 INTERRUPT ENABLE */
__sbit __at (0xAA) IE_EX1;  /*EXTERNAL INTERRUPT 1 ENABLE*/
__sbit __at (0xA9) IE_ET0;  /*TIMER 0 INTERRUPT ENABLE */
__sbit __at (0xA8) IE_EX0;  /*EXTERNAL INTERRUPT 0 ENABLE*/


/*IE bits*/
#define IE_EA  	 0x80
#define IE_ET2 	 0x20
#define IE_ES    	 0x10
#define IE_ET1 	 0x08
#define IE_EX1 	 0x04
#define IE_ET0 	 0x02
#define IE_EX0 	 0x01



__sfr __at (0xAD)   PRT1IF;  /*PORT 1 EXTERNAL INTERRUPT FLAGS */
__sfr __at (0xAF)   EMI0CN;  /*EXTERNAL MEMORY INTERFACE CONTROL */
#define PRT1IF	0xAD
#define EMI0CN	0xAF

__sfr __at (0xB0) P3 ;       /*EXTERNAL MEMORY INTERFACE CONTROL */
/* P3 */
__sbit __at (0xB7) P3_7 ;
__sbit __at (0xB6) P3_6 ;
__sbit __at (0xB5) P3_5 ;
__sbit __at (0xB4) P3_4 ;
__sbit __at (0xB3) P3_3 ;
__sbit __at (0xB2) P3_2 ;
__sbit __at (0xB1) P3_1 ;
__sbit __at (0xB0) P3_0 ;

__sfr __at (0xB1)   OSCXCN;   /*EXTERNAL OSCILLATOR CONTROL */
__sfr __at (0xB2)   OSCICN;   /*INTERNAL OSCILLATOR CONTROL*/
__sfr __at (0xB6)   FLSCL;    /*FLASH MEMORY TIMING PRESCALER*/
__sfr __at (0xB7)   FLACL;    /*FLASH ACESS LIMIT */
#define OSCXCN	0xB1
#define OSCICN	0xB2
#define FLSCL	0xB6
#define FLACL	0xB7


#undef IP  /*INTERRUPT PRIORITY */

__sfr __at (0xB8)   IP1;   /*INTERRUPT PRIORITY */

__sbit __at (0xBE) IP_PT2;   /*TIMER 2 PRIORITY*/
__sbit __at (0xBD) IP_PS;    /*SERIAL PORT PRIORITY	*/
__sbit __at (0xBB) IP_PT1;   /*TIMER 1 PRIORITY*/
__sbit __at (0xBA) IP_PX1;   /*EXTERNAL INTERRUPT 1 PRIORITY*/
__sbit __at (0xB9) IP_PT0;   /*TIMER 0 PRIORITY*/
__sbit __at (0xB8) IP_PX0;   /*EXTERNAL INTERRUPT 0 PRIORITY*/


/*IP1 bits*/
#define IP_PT2	0x20
#define IP_PS	0x10
#define IP_PT1	0x08
#define IP_PX1	0x04
#define IP_PT0	0x02
#define IP_PX0	0x01


__sfr __at (0xBA)   AMX0CF;  /*ADC 0 MUX CONFIGURATION*/
__sfr __at (0xBB)   AMX0SL;  /*ADC 0 MUX CHANNEL SELECTION*/
__sfr __at (0xBC)   ADC0CF;  /*ADC 0 CONFIGURATION*/
__sfr __at (0xBE)   ADC0L;   /*ADC 0 DATA - LOW BYTE*/
__sfr __at (0xBF)   ADC0H;   /*ADC 0 DATA - HIGH BYTE*/
#define AMX0CF	0xBA
#define AMX0SL	0xBB
#define ADC0CF	0xBC
#define ADC0L	0xBE
#define ADC0H	0xBF


__sfr __at (0xC0)   SMB0CN;      /*SMBUS 0 CONTROL*/

__sbit __at (0xC7) SMB0CN_BUSY;  /*SMBUS 0 BUSY */
__sbit __at (0xC6) SMB0CN_ENSMB; /*SMBUS 0 ENABLE */
__sbit __at (0xC5) SMB0CN_STA;   /*SMBUS 0 START FLAG   */
__sbit __at (0xC4) SMB0CN_STO;   /*SMBUS 0 STOP FLAG*/
__sbit __at (0xC3) SMB0CN_SI;    /*SMBUS 0 INTERRUPT PENDING FLAG*/
__sbit __at (0xC2) SMB0CN_AA;    /*SMBUS 0 ASSERT/ACKNOWLEDGE FLAG*/
__sbit __at (0xC1) SMB0CN_SMBFTE;/*SMBUS 0 FREE TIMER ENABLE*/
__sbit __at (0xC0) SMB0CN_SMBTOE;/*SMBUS 0 TIMEOUT ENABLE*/

#define SMB0CN_BUSY	 0x80
#define SMB0CN_ENSMB	 0x40
#define SMB0CN_STA	 0x20
#define SMB0CN_STO	 0x10
#define SMB0CN_SI	       0x08
#define SMB0CN_AA	       0x04
#define SMB0CN_SMBFTE	 0x02
#define SMB0CN_SMBTOE	 0x01





__sfr __at (0xC1)   SMB0STA;     /*SMBUS 0 STATUS*/
__sfr __at (0xC2)   SMB0DAT;     /*SMBUS 0 DATA*/
__sfr __at (0xC3)   SMB0ADR;     /*SMBUS 0 SLAVE ADDRESS */
__sfr __at (0xC4)   ADC0GTL;     /*ADC 0 GREATER-THAN REGISTER - LOW BYTE */
__sfr __at (0xC5)   ADC0GTH;     /*ADC 0 GREATER-THAN REGISTER - HIGH BYTE*/
__sfr __at (0xC6)   ADC0LTL;     /*ADC 0 LESS-THAN REGISTER - LOW BYTE*/
__sfr __at (0xC7)   ADC0LTH;     /*ADC 0 LESS-THAN REGISTER - HIGH BYTE*/
#define SMB0STA	0xC1
#define SMB0DAT	0xC2
#define SMB0ADR	0xC3
#define ADC0GTL	0xC4
#define ADC0GTH	0xC5
#define ADC0LTL	0xC6
#define ADC0LTH	0xC7


__sfr __at (0xC8)   T2CON;      /*TIMER 2 CONTROL*/

__sbit __at (0xCF) T2CON_TF2;   /*TIMER 2 OVERFLOW FLAG*/
__sbit __at (0xCE) T2CON_EXF2;  /*EXTERNAL FLAG */
__sbit __at (0xCD) T2CON_RCLK;  /*RECEIVE CLOCK FLAG*/
__sbit __at (0xCC) T2CON_TCLK;  /*TRANSMIT CLOCK FLAG*/
__sbit __at (0xCB) T2CON_EXEN2; /*TIMER 2 EXTERNAL ENABLE FLAG */
__sbit __at (0xCA) T2CON_TR2;   /*TIMER 2 ON/OFF CONTROL*/
__sbit __at (0xC9) T2CON_CT2;   /*TIMER OR COUNTER SELECT*/
__sbit __at (0xC8) T2CON_CPRL2; /*CAPTURE OR RELOAD SELECT*/

#define T2CON_TF2	       0x80
#define T2CON_EXF2	 0x40
#define T2CON_RCLK	 0x20
#define T2CON_TCLK	 0x10
#define T2CON_EXEN2	 0x08
#define T2CON_TR2	       0x04
#define T2CON_CT2	       0x02
#define T2CON_CPRL2	 0x01

__sfr __at (0xCA)   RCAP2L;     /*TIMER 2 CAPTURE REGISTER - LOW BYTE */
__sfr __at (0xCB)   RCAP2H;     /*TIMER 2 CAPTURE REGISTER - HIGH BYTE*/
__sfr __at (0xCC)   TL2;        /*TIMER 2 - LOW BYTE*/
__sfr __at (0xCD)   TH2;        /*TIMER 2 - HIGH BYTE*/
__sfr __at (0xCF)   SMB0CR;     /*SMBUS 0 CLOCK RATE */
#define RCAP2L	0xCA
#define RCAP2H	0xCB
#define TL2 	0xCC
#define TH2 	0xCD
#define SMB0CR	0xCF

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


__sfr __at (0xD1)   REF0CN;       /*VOLTAGE REFERENCE 0 CONTROL*/
__sfr __at (0xD2)   DAC0L;        /*DAC 0 REGISTER - LOW BYTE*/
__sfr __at (0xD3)   DAC0H;        /*DAC 0 REGISTER - HIGH BYTE*/
__sfr __at (0xD4)   DAC0CN;       /*DAC 0 CONTROL*/
__sfr __at (0xD5)   DAC1L;        /*DAC 1 REGISTER - LOW BYTE*/
__sfr __at (0xD6)   DAC1H;        /*DAC 1 REGISTER - HIGH BYTE*/
__sfr __at (0xD7)   DAC1CN;       /*DAC 1 CONTROL*/
#define REF0CN	0xD1
#define DAC0L	0xD2
#define DAC0H	0xD3
#define DAC0CN	0xD4
#define DAC1L	0xD5
#define DAC1H	0xD6
#define DAC1CN	0xD7


__sfr __at (0xD8)   PCA0CN;    /*PCA 0 COUNTER CONTROL */ 

__sbit __at (0xDF) PCA0CN_CF;    /*PCA 0 COUNTER OVERFLOW FLAG   */
__sbit __at (0xDE) PCA0CN_CR;    /*PCA 0 COUNTER RUN CONTROL BIT */
__sbit __at (0xDC) PCA0CN_CCF4;  /*PCA 0 MODULE 4 INTERRUPT FLAG */
__sbit __at (0xDB) PCA0CN_CCF3;  /*PCA 0 MODULE 3 INTERRUPT FLAG */
__sbit __at (0xDA) PCA0CN_CCF2;  /*PCA 0 MODULE 2 INTERRUPT FLAG */
__sbit __at (0xD9) PCA0CN_CCF1;  /*PCA 0 MODULE 1 INTERRUPT FLAG */
__sbit __at (0xD8) PCA0CN_CCF0;  /*PCA 0 MODULE 0 INTERRUPT FLAG */


#define PCA0CN_CF 	0x80
#define PCA0CN_CR 	0x40
#define PCA0CN_CCF4	0x10
#define PCA0CN_CCF3	0x08
#define PCA0CN_CCF2	0x04
#define PCA0CN_CCF1	0x02
#define PCA0CN_CCF0	0x01


__sfr __at (0xD9)   PCA0MD;      /*PCA 0 COUNTER MODE */
__sfr __at (0xDA)   PCA0CPM0;    /*CONTROL REGISTER FOR PCA 0 MODULE 0*/
__sfr __at (0xDB)   PCA0CPM1;    /*CONTROL REGISTER FOR PCA 0 MODULE 1*/
__sfr __at (0xDC)   PCA0CPM2;    /*CONTROL REGISTER FOR PCA 0 MODULE 2*/
__sfr __at (0xDD)   PCA0CPM3;    /*CONTROL REGISTER FOR PCA 0 MODULE 3*/
__sfr __at (0xDE)   PCA0CPM4;    /*CONTROL REGISTER FOR PCA 0 MODULE 4 */
#define PCA0MD	0xD9 
#define PCA0CPM0	0xDA
#define PCA0CPM1	0xDB
#define PCA0CPM2	0xDC
#define PCA0CPM3	0xDD
#define PCA0CPM4	0xDE

__sfr __at (0xE0)   ACC;          /* ACCUMULATOR*/   
__sfr __at (0xE1)   XBR0;         /*DIGITAL CROSSBAR CONFIGURATION REGISTER 0  */  
__sfr __at (0xE2)   XBR1;         /*DIGITAL CROSSBAR CONFIGURATION REGISTER 1 */  
__sfr __at (0xE3)   XBR2;         /*DIGITAL CROSSBAR CONFIGURATION REGISTER  */  
__sfr __at (0xE6)   EIE1;         /*EXTERNAL INTERRUPT ENABLE 1  */  
__sfr __at (0xE7)   EIE2;         /*EXTERNAL INTERRUPT ENABLE 2 */  
#define ACC	      0xE0
#define XBR0	0xE1
#define XBR1	0xE2
#define XBR2	0xE3
#define EIE1	0xE6
#define EIE2	0xE7


__sfr __at (0xE8)   ADC0CN;       /* ADC 0 CONTROL*/  

__sbit __at (0xEF) ADC0CN_ADCEN;  /*ADC 0 ENABLE   */  
__sbit __at (0xEE) ADC0CN_ADCTM;  /* ADC 0 TRACK MODE*/  
__sbit __at (0xED) ADC0CN_ADCINT; /* ADC 0 CONVERISION COMPLETE INTERRUPT FLAG*/  
__sbit __at (0xEC) ADC0CN_ADBUSY; /*ADC 0 BUSY FLAG */  
__sbit __at (0xEB) ADC0CN_ADSTM1; /* ADC 0 START OF CONVERSION MODE BIT 1*/  
__sbit __at (0xEA) ADC0CN_ADSTM0; /*ADC 0 START OF CONVERSION MODE BIT 0 */  
__sbit __at (0xE9) ADC0CN_ADWINT; /*ADC 0 WINDOW COMPARE INTERRUPT FLAG */  
__sbit __at (0xE8) ADC0CN_ADLJST; /* ADC 0 RIGHT JUSTIFY DATA BIT */  

#define ADC0CN_ADCEN	0x80
#define ADC0CN_ADCTM	0x40
#define ADC0CN_ADCINT	0x20
#define ADC0CN_ADBUSY	0x10
#define ADC0CN_ADSTM1	0x08
#define ADC0CN_ADSTM0	0x04
#define ADC0CN_ADWINT	0x02
#define ADC0CN_ADLJST	0x01



__sfr __at (0xE9)   PCA0L;         /* PCA 0 TIMER - LOW BYTE*/  
__sfr __at (0xEA)   PCA0CPL0;    /*CAPTURE/COMPARE REGISTER FOR PCA 0 MODULE 0 - LOW BYTE   */  
__sfr __at (0xEB)   PCA0CPL1;    /*CAPTURE/COMPARE REGISTER FOR PCA 0 MODULE 1 - LOW BYTE   */  
__sfr __at (0xEC)   PCA0CPL2;     /* CAPTURE/COMPARE REGISTER FOR PCA 0 MODULE 2 - LOW BYTE  */  
__sfr __at (0xED)   PCA0CPL3;    /*CAPTURE/COMPARE REGISTER FOR PCA 0 MODULE 3 - LOW BYTE   */  
__sfr __at (0xEE)   PCA0CPL4;    /*CAPTURE/COMPARE REGISTER FOR PCA 0 MODULE 4 - LOW BYTE   */  
__sfr __at (0xEF)   RSTSRC;      /* RESET SOURCE*/  
#define PCA0L	      0xE9
#define PCA0CPL0	      0xEA
#define PCA0CPL1        0xEB
#define PCA0CPL2	      0xEC
#define PCA0CPL3	      0xED
#define PCA0CPL4	      0xEE
#define RSTSRC	      0xEF

__sfr __at (0xF0)   B;          /*B REGISTER */  
__sfr __at (0xF6)   EIP1;       /*EXTERNAL INTERRUPT PRIORITY REGISTER 1 */  
__sfr __at (0xF7)   EIP2;       /*EXTERNAL INTERRUPT PRIORITY REGISTER 2  */  
#define B	            0xF0
#define EIP1	      0xF6
#define EIP2	      0xF7

__sfr __at (0xF8)   SPI0CN;      /*SERIAL PERIPHERAL INTERFACE 0 CONTROL */  

__sbit __at (0xFF) SPI0CN_SPIF;   /*SPI 0 INTERRUPT FLAG	 */  
__sbit __at (0xFE) SPI0CN_WCOL;   /*SPI 0 WRITE COLLISION FLAG */  
__sbit __at (0xFD) SPI0CN_MODF;   /*SPI 0 MODE FAULT FLAG */  
__sbit __at (0xFC) SPI0CN_RXOVRN; /*SPI 0 RX OVERRUN FLAG */  
__sbit __at (0xFB) SPI0CN_TXBSY;  /*SPI 0 TX BUSY FLAG */  
__sbit __at (0xFA) SPI0CN_SLVSEL; /*SPI 0 SLAVE SELECT */  
__sbit __at (0xF9) SPI0CN_MSTEN;  /*SPI 0 MASTER ENABLE */  
__sbit __at (0xF8) SPI0CN_SPIEN;  /*SPI 0 SPI ENABLE */  

#define SPI0CN_SPIF	0x80
#define SPI0CN_WCOL	0x40
#define SPI0CN_MODF	0x20
#define SPI0CN_RXOVRN	0x10
#define SPI0CN_TXBSY	0x08
#define SPI0CN_SLVSEL	0x04
#define SPI0CN_MSTEN	0x02
#define SPI0CN_SPIEN	0x01


__sfr __at (0xF9)   PCA0H;        /*PCA 0 TIMER - HIGH BYTE */  
__sfr __at (0xFA)   PCA0CPH0;     /*CAPTURE/COMPARE REGISTER FOR PCA 0 MODULE 0 - HIGH BYTE  */  
__sfr __at (0xFB)   PCA0CPH1;     /*CAPTURE/COMPARE REGISTER FOR PCA 0 MODULE 1 - HIGH BYTE  */  
__sfr __at (0xFC)   PCA0CPH2;     /*CAPTURE/COMPARE REGISTER FOR PCA 0 MODULE 2 - HIGH BYTE */  
__sfr __at (0xFD)   PCA0CPH3;     /*CAPTURE/COMPARE REGISTER FOR PCA 0 MODULE 3 - HIGH BYTE  */  
__sfr __at (0xFE)   PCA0CPH4;     /*CAPTURE/COMPARE REGISTER FOR PCA 0 MODULE 4 - HIGH BYTE */  
__sfr __at (0xFF)   WDTCN;        /*WATCHDOG TIMER CONTROL  */  
#define PCA0H	            0xF9
#define PCA0CPH0	            0xFA
#define PCA0CPH1	            0xFB
#define PCA0CPH2	            0xFC
#define PCA0CPH3	            0xFD
#define PCA0CPH4	            0xFE
#define WDTCN	            0xFF



/* Interrupt numbers: address = (number * 8) + 3 */
/* CC2430 interrupt vectors */


#endif /*8051*/
