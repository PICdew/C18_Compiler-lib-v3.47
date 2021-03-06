/*-------------------------------------------------------------------------
 * PIC18F66K90 processor header
 *
 * This software is developed by Microchip Technology Inc. and its
 * subsidiaries ("Microchip").
 * 
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are 
 * met:
 * 
 * 1.      Redistributions of source code must retain the above copyright
 *         notice, this list of conditions and the following disclaimer.
 * 2.      Redistributions in binary form must reproduce the above 
 *         copyright notice, this list of conditions and the following 
 *         disclaimer in the documentation and/or other materials provided 
 *         with the distribution.
 * 3.      Microchip's name may not be used to endorse or promote products
 *         derived from this software without specific prior written 
 *         permission.
 * 
 * THIS SOFTWARE IS PROVIDED BY MICROCHIP "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR PURPOSE ARE DISCLAIMED. IN NO EVENT 
 * SHALL MICROCHIP BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING BUT NOT LIMITED TO
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA OR PROFITS;
 * OR BUSINESS INTERRUPTION) HOWSOEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR 
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
 * ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 * 
 * (c) Copyright 1999-2013 Microchip Technology, All rights reserved
 *-------------------------------------------------------------------------*/

#ifndef __18F66K90_H
#define __18F66K90_H

extern volatile far  unsigned char       LCDCON;
extern volatile far  union {
  struct {
    unsigned LMUX:2;
    unsigned CS:2;
    unsigned :1;
    unsigned WERR:1;
    unsigned SLPEN:1;
    unsigned LCDEN:1;
  };
  struct {
    unsigned LMUX0:1;
    unsigned LMUX1:1;
    unsigned CS0:1;
    unsigned CS1:1;
  };
} LCDCONbits;
extern volatile far  unsigned char       LCDPS;
extern volatile far  union {
  struct {
    unsigned LP:4;
    unsigned WA:1;
    unsigned LCDA:1;
    unsigned BIASMD:1;
    unsigned WFT:1;
  };
  struct {
    unsigned LP0:1;
    unsigned LP1:1;
    unsigned LP2:1;
    unsigned LP3:1;
  };
} LCDPSbits;
extern volatile far  unsigned char       LCDSE0;
extern volatile far  struct {
  unsigned SE00:1;
  unsigned SE01:1;
  unsigned SE02:1;
  unsigned SE03:1;
  unsigned SE04:1;
  unsigned SE05:1;
  unsigned SE06:1;
  unsigned SE07:1;
} LCDSE0bits;
extern volatile far  unsigned char       LCDSE1;
extern volatile far  struct {
  unsigned SE08:1;
  unsigned SE09:1;
  unsigned SE10:1;
  unsigned SE11:1;
  unsigned SE12:1;
  unsigned SE13:1;
  unsigned SE14:1;
  unsigned SE15:1;
} LCDSE1bits;
extern volatile far  unsigned char       LCDSE2;
extern volatile far  struct {
  unsigned SE16:1;
  unsigned SE17:1;
  unsigned SE18:1;
  unsigned SE19:1;
  unsigned SE20:1;
  unsigned SE21:1;
  unsigned SE22:1;
  unsigned SE23:1;
} LCDSE2bits;
extern volatile far  unsigned char       LCDSE3;
extern volatile far  struct {
  unsigned SE24:1;
  unsigned SE25:1;
  unsigned SE26:1;
  unsigned SE27:1;
  unsigned SE28:1;
  unsigned SE29:1;
  unsigned SE30:1;
  unsigned SE31:1;
} LCDSE3bits;
extern volatile far  unsigned char       LCDSE4;
extern volatile far  struct {
  unsigned SE32:1;
} LCDSE4bits;
extern volatile far  unsigned char       LCDRL;
extern volatile far  union {
  struct {
    unsigned LRLAT:3;
    unsigned LCDIRI:1;
    unsigned LRLBP:2;
    unsigned LRLAP:2;
  };
  struct {
    unsigned LRLAT0:1;
    unsigned LRLAT1:1;
    unsigned LRLAT2:1;
    unsigned :1;
    unsigned LRLBP0:1;
    unsigned LRLBP1:1;
    unsigned LRLAP0:1;
    unsigned LRLAP1:1;
  };
} LCDRLbits;
extern volatile far  unsigned char       LCDREF;
extern volatile far  union {
  struct {
    unsigned VLCD1PE:1;
    unsigned VLCD2PE:1;
    unsigned VLCD3PE:1;
    unsigned LCDCST:3;
    unsigned LCDIRS:1;
    unsigned LCDIRE:1;
  };
  struct {
    unsigned :3;
    unsigned LCDCST0:1;
    unsigned LCDCST1:1;
    unsigned LCDCST2:1;
  };
} LCDREFbits;
extern volatile far  unsigned char       SSP2CON2;
extern volatile far  union {
  struct {
    unsigned SEN:1;
    unsigned RSEN:1;
    unsigned PEN:1;
    unsigned RCEN:1;
    unsigned ACKEN:1;
    unsigned ACKDT:1;
    unsigned ACKSTAT:1;
    unsigned GCEN:1;
  };
  struct {
    unsigned :1;
    unsigned ADMSK1:1;
    unsigned ADMSK2:1;
    unsigned ADMSK3:1;
    unsigned ADMSK4:1;
    unsigned ADMSK5:1;
  };
} SSP2CON2bits;
extern volatile far  unsigned char       SSP2CON1;
extern volatile far  union {
  struct {
    unsigned SSPM:4;
    unsigned CKP:1;
    unsigned SSPEN:1;
    unsigned SSPOV:1;
    unsigned WCOL:1;
  };
  struct {
    unsigned SSPM0:1;
    unsigned SSPM1:1;
    unsigned SSPM2:1;
    unsigned SSPM3:1;
  };
} SSP2CON1bits;
extern volatile far  unsigned char       SSP2STAT;
extern volatile far  union {
  struct {
    unsigned BF:1;
    unsigned UA:1;
    unsigned R_NOT_W:1;
    unsigned S:1;
    unsigned P:1;
    unsigned D_NOT_A:1;
    unsigned CKE:1;
    unsigned SMP:1;
  };
  struct {
    unsigned :2;
    unsigned R:1;
    unsigned :2;
    unsigned D:1;
  };
  struct {
    unsigned :2;
    unsigned R_W:1;
    unsigned :2;
    unsigned D_A:1;
  };
  struct {
    unsigned :2;
    unsigned NOT_W:1;
    unsigned :2;
    unsigned NOT_A:1;
  };
  struct {
    unsigned :2;
    unsigned NOT_WRITE:1;
    unsigned :2;
    unsigned NOT_ADDRESS:1;
  };
  struct {
    unsigned :2;
    unsigned READ_WRITE:1;
    unsigned :2;
    unsigned DATA_ADDRESS:1;
  };
  struct {
    unsigned :2;
    unsigned I2C_READ:1;
    unsigned I2C_START:1;
    unsigned I2C_STOP:1;
    unsigned I2C_DAT:1;
  };
} SSP2STATbits;
extern volatile far  unsigned char       SSP2ADD;
extern volatile far  union {
  struct {
    unsigned SSP2ADD:8;
  };
  struct {
    unsigned MSK0:1;
    unsigned MSK1:1;
    unsigned MSK2:1;
    unsigned MSK3:1;
    unsigned MSK4:1;
    unsigned MSK5:1;
    unsigned MSK6:1;
    unsigned MSK7:1;
  };
} SSP2ADDbits;
extern volatile far  unsigned char       SSP2BUF;
extern volatile far  unsigned char       T4CON;
extern volatile far  union {
  struct {
    unsigned T4CKPS:2;
    unsigned TMR4ON:1;
    unsigned T4OUTPS:4;
  };
  struct {
    unsigned T4CKPS0:1;
    unsigned T4CKPS1:1;
    unsigned :1;
    unsigned T4OUTPS0:1;
    unsigned T4OUTPS1:1;
    unsigned T4OUTPS2:1;
    unsigned T4OUTPS3:1;
  };
} T4CONbits;
extern volatile far  unsigned char       PR4;
extern volatile far  unsigned char       TMR4;
extern volatile far  unsigned char       CCP7CON;
extern volatile far  union {
  struct {
    unsigned CCP7M:4;
    unsigned DC7B:2;
  };
  struct {
    unsigned CCP7M0:1;
    unsigned CCP7M1:1;
    unsigned CCP7M2:1;
    unsigned CCP7M3:1;
    unsigned DC7B0:1;
    unsigned DC7B1:1;
  };
  struct {
    unsigned :4;
    unsigned CCP7Y:1;
    unsigned CCP7X:1;
  };
} CCP7CONbits;
extern volatile far  unsigned            CCPR7;
extern volatile far  unsigned char       CCPR7L;
extern volatile far  unsigned char       CCPR7H;
extern volatile far  unsigned char       CCP6CON;
extern volatile far  union {
  struct {
    unsigned CCP6M:4;
    unsigned DC6B:2;
  };
  struct {
    unsigned CCP6M0:1;
    unsigned CCP6M1:1;
    unsigned CCP6M2:1;
    unsigned CCP6M3:1;
    unsigned DC6B0:1;
    unsigned DC6B1:1;
  };
  struct {
    unsigned :4;
    unsigned CCP6Y:1;
    unsigned CCP6X:1;
  };
} CCP6CONbits;
extern volatile far  unsigned            CCPR6;
extern volatile far  unsigned char       CCPR6L;
extern volatile far  unsigned char       CCPR6H;
extern volatile far  unsigned char       CCP5CON;
extern volatile far  union {
  struct {
    unsigned CCP5M:4;
    unsigned DC5B:2;
  };
  struct {
    unsigned CCP5M0:1;
    unsigned CCP5M1:1;
    unsigned CCP5M2:1;
    unsigned CCP5M3:1;
    unsigned DC5B0:1;
    unsigned DC5B1:1;
  };
  struct {
    unsigned :4;
    unsigned CCP5Y:1;
    unsigned CCP5X:1;
  };
} CCP5CONbits;
extern volatile far  unsigned            CCPR5;
extern volatile far  unsigned char       CCPR5L;
extern volatile far  unsigned char       CCPR5H;
extern volatile far  unsigned char       CCP4CON;
extern volatile far  union {
  struct {
    unsigned CCP4M:4;
    unsigned DC4B:2;
  };
  struct {
    unsigned CCP4M0:1;
    unsigned CCP4M1:1;
    unsigned CCP4M2:1;
    unsigned CCP4M3:1;
    unsigned DC4B0:1;
    unsigned DC4B1:1;
  };
  struct {
    unsigned :4;
    unsigned CCP4Y:1;
    unsigned CCP4X:1;
  };
} CCP4CONbits;
extern volatile far  unsigned            CCPR4;
extern volatile far  unsigned char       CCPR4L;
extern volatile far  unsigned char       CCPR4H;
extern volatile far  unsigned char       T5GCON;
extern volatile far  union {
  struct {
    unsigned T5GSS:2;
    unsigned T5GVAL:1;
    unsigned T5GGO_NOT_T5DONE:1;
    unsigned T5GSPM:1;
    unsigned T5GTM:1;
    unsigned T5GPOL:1;
    unsigned TMR5GE:1;
  };
  struct {
    unsigned T5GSS0:1;
    unsigned T5GSS1:1;
    unsigned :1;
    unsigned T5GGO:1;
  };
  struct {
    unsigned :3;
    unsigned NOT_T5DONE:1;
  };
} T5GCONbits;
extern volatile far  unsigned char       T5CON;
extern volatile far  union {
  struct {
    unsigned TMR5ON:1;
    unsigned RD16:1;
    unsigned NOT_T5SYNC:1;
    unsigned SOSCEN:1;
    unsigned T5CKPS:2;
    unsigned TMR5CS:2;
  };
  struct {
    unsigned :4;
    unsigned T5CKPS0:1;
    unsigned T5CKPS1:1;
    unsigned TMR5CS0:1;
    unsigned TMR5CS1:1;
  };
} T5CONbits;
extern volatile far  unsigned char       TMR5L;
extern volatile far  unsigned char       TMR5H;
extern volatile far  unsigned char       PMD3;
extern volatile far  struct {
  unsigned TMR12MD:1;
  unsigned CCP4MD:1;
  unsigned CCP5MD:1;
  unsigned CCP6MD:1;
  unsigned CCP7MD:1;
  unsigned CCP8MD:1;
  unsigned CCP9MD:1;
  unsigned CCP10MD:1;
} PMD3bits;
extern volatile far  unsigned char       PMD2;
extern volatile far  struct {
  unsigned CMP1MD:1;
  unsigned CMP2MD:1;
  unsigned CMP3MD:1;
  unsigned TMR5MD:1;
  unsigned TMR6MD:1;
  unsigned TMR7MD:1;
  unsigned TMR8MD:1;
  unsigned TMR10MD:1;
} PMD2bits;
extern volatile far  unsigned char       PMD1;
extern volatile far  struct {
  unsigned :1;
  unsigned TMR1MD:1;
  unsigned TMR2MD:1;
  unsigned TMR3MD:1;
  unsigned TMR4MD:1;
  unsigned RTCCMD:1;
  unsigned CTMUMD:1;
} PMD1bits;
extern volatile far  unsigned char       PMD0;
extern volatile far  struct {
  unsigned ADCMD:1;
  unsigned SSP1MD:1;
  unsigned SSP2MD:1;
  unsigned UART1MD:1;
  unsigned UART2MD:1;
  unsigned CCP1MD:1;
  unsigned CCP2MD:1;
  unsigned CCP3MD:1;
} PMD0bits;
extern volatile far  unsigned char       PSTR3CON;
extern volatile far  union {
  struct {
    unsigned STRA:1;
    unsigned STRB:1;
    unsigned STRC:1;
    unsigned STRD:1;
    unsigned STRSYNC:1;
    unsigned :1;
    unsigned CMPL:2;
  };
  struct {
    unsigned :6;
    unsigned CMPL0:1;
    unsigned CMPL1:1;
  };
} PSTR3CONbits;
extern volatile far  unsigned char       PSTR2CON;
extern volatile far  union {
  struct {
    unsigned STRA:1;
    unsigned STRB:1;
    unsigned STRC:1;
    unsigned STRD:1;
    unsigned STRSYNC:1;
    unsigned :1;
    unsigned CMPL:2;
  };
  struct {
    unsigned :6;
    unsigned CMPL0:1;
    unsigned CMPL1:1;
  };
} PSTR2CONbits;
extern volatile far  unsigned char       TXREG2;
extern volatile far  unsigned char       RCREG2;
extern volatile far  unsigned char       SPBRG2;
extern volatile far  unsigned char       SPBRGH2;
extern volatile far  unsigned char       BAUDCON2;
extern volatile far  struct {
  unsigned ABDEN:1;
  unsigned WUE:1;
  unsigned :1;
  unsigned BRG16:1;
  unsigned TXCKP:1;
  unsigned RXDTP:1;
  unsigned RCIDL:1;
  unsigned ABDOVF:1;
} BAUDCON2bits;
extern volatile far  unsigned char       TXSTA2;
extern volatile far  union {
  struct {
    unsigned TX9D:1;
    unsigned TRMT:1;
    unsigned BRGH:1;
    unsigned SENDB:1;
    unsigned SYNC:1;
    unsigned TXEN:1;
    unsigned TX9:1;
    unsigned CSRC:1;
  };
  struct {
    unsigned TX9D2:1;
    unsigned TRMT2:1;
    unsigned BRGH2:1;
    unsigned SENDB2:1;
    unsigned SYNC2:1;
    unsigned TXEN2:1;
    unsigned TX92:1;
    unsigned CSRC2:1;
  };
} TXSTA2bits;
extern volatile far  unsigned char       RCSTA2;
extern volatile far  union {
  struct {
    unsigned RX9D:1;
    unsigned OERR:1;
    unsigned FERR:1;
    unsigned ADDEN:1;
    unsigned CREN:1;
    unsigned SREN:1;
    unsigned RX9:1;
    unsigned SPEN:1;
  };
  struct {
    unsigned RX9D2:1;
    unsigned OERR2:1;
    unsigned FERR2:1;
    unsigned ADDEN2:1;
    unsigned CREN2:1;
    unsigned SREN2:1;
    unsigned RX92:1;
    unsigned SPEN2:1;
  };
} RCSTA2bits;
extern volatile far  unsigned char       ANCON2;
extern volatile far  struct {
  unsigned ANSEL16:1;
  unsigned ANSEL17:1;
  unsigned ANSEL18:1;
  unsigned ANSEL19:1;
} ANCON2bits;
extern volatile far  unsigned char       ANCON1;
extern volatile far  struct {
  unsigned ANSEL8:1;
  unsigned ANSEL9:1;
  unsigned ANSEL10:1;
  unsigned ANSEL11:1;
} ANCON1bits;
extern volatile far  unsigned char       ANCON0;
extern volatile far  struct {
  unsigned ANSEL0:1;
  unsigned ANSEL1:1;
  unsigned ANSEL2:1;
  unsigned ANSEL3:1;
  unsigned ANSEL4:1;
  unsigned ANSEL5:1;
  unsigned ANSEL6:1;
  unsigned ANSEL7:1;
} ANCON0bits;
extern volatile far  unsigned char       ODCON3;
extern volatile far  struct {
  unsigned CTMUDS:1;
  unsigned :5;
  unsigned U1OD:1;
  unsigned U2OD:1;
} ODCON3bits;
extern volatile far  unsigned char       ODCON2;
extern volatile far  struct {
  unsigned CCP3OD:1;
  unsigned CCP4OD:1;
  unsigned CCP5OD:1;
  unsigned CCP6OD:1;
  unsigned CCP7OD:1;
  unsigned CCP8OD:1;
  unsigned CCP9OD:1;
  unsigned CCP10OD:1;
} ODCON2bits;
extern volatile far  unsigned char       ODCON1;
extern volatile far  struct {
  unsigned SPI2OD:1;
  unsigned :4;
  unsigned CCP1OD:1;
  unsigned CCP2OD:1;
  unsigned SPI1OD:1;
} ODCON1bits;
extern volatile far  unsigned char       REFOCON;
extern volatile far  union {
  struct {
    unsigned RODIV:4;
    unsigned ROSEL:1;
    unsigned ROSSLP:1;
    unsigned :1;
    unsigned ROON:1;
  };
  struct {
    unsigned RODIV0:1;
    unsigned RODIV1:1;
    unsigned RODIV2:1;
    unsigned RODIV3:1;
  };
} REFOCONbits;
extern volatile far  unsigned char       CCPTMRS2;
extern volatile far  union {
  struct {
    unsigned C8TSEL:2;
    unsigned C9TSEL0:1;
    unsigned :1;
    unsigned C10TSEL0:1;
  };
  struct {
    unsigned C8TSEL0:1;
    unsigned C8TSEL1:1;
  };
} CCPTMRS2bits;
extern volatile far  unsigned char       CCPTMRS1;
extern volatile far  union {
  struct {
    unsigned C4TSEL:2;
    unsigned C5TSEL0:1;
    unsigned :1;
    unsigned C6TSEL0:1;
    unsigned :1;
    unsigned C7TSEL:2;
  };
  struct {
    unsigned C4TSEL0:1;
    unsigned C4TSEL1:1;
    unsigned :4;
    unsigned C7TSEL0:1;
    unsigned C7TSEL1:1;
  };
} CCPTMRS1bits;
extern volatile far  unsigned char       CCPTMRS0;
extern volatile far  union {
  struct {
    unsigned C1TSEL:3;
    unsigned C2TSEL:3;
    unsigned C3TSEL:2;
  };
  struct {
    unsigned C1TSEL0:1;
    unsigned C1TSEL1:1;
    unsigned C1TSEL2:1;
    unsigned C2TSEL0:1;
    unsigned C2TSEL1:1;
    unsigned C2TSEL2:1;
    unsigned C3TSEL0:1;
    unsigned C3TSEL1:1;
  };
} CCPTMRS0bits;
extern volatile far  unsigned char       CM3CON;
extern volatile far  union {
  struct {
    unsigned CCH:2;
    unsigned CREF:1;
    unsigned EVPOL:2;
    unsigned CPOL:1;
    unsigned COE:1;
    unsigned CON:1;
  };
  struct {
    unsigned CCH0:1;
    unsigned CCH1:1;
    unsigned :1;
    unsigned EVPOL0:1;
    unsigned EVPOL1:1;
  };
} CM3CONbits;
extern volatile far  unsigned char       CM3CON1;
extern volatile far  union {
  struct {
    unsigned CCH:2;
    unsigned CREF:1;
    unsigned EVPOL:2;
    unsigned CPOL:1;
    unsigned COE:1;
    unsigned CON:1;
  };
  struct {
    unsigned CCH0:1;
    unsigned CCH1:1;
    unsigned :1;
    unsigned EVPOL0:1;
    unsigned EVPOL1:1;
  };
} CM3CON1bits;
extern volatile far  unsigned char       CM2CON;
extern volatile far  union {
  struct {
    unsigned CCH:2;
    unsigned CREF:1;
    unsigned EVPOL:2;
    unsigned CPOL:1;
    unsigned COE:1;
    unsigned CON:1;
  };
  struct {
    unsigned CCH0:1;
    unsigned CCH1:1;
    unsigned :1;
    unsigned EVPOL0:1;
    unsigned EVPOL1:1;
  };
} CM2CONbits;
extern volatile far  unsigned char       CM2CON1;
extern volatile far  union {
  struct {
    unsigned CCH:2;
    unsigned CREF:1;
    unsigned EVPOL:2;
    unsigned CPOL:1;
    unsigned COE:1;
    unsigned CON:1;
  };
  struct {
    unsigned CCH0:1;
    unsigned CCH1:1;
    unsigned :1;
    unsigned EVPOL0:1;
    unsigned EVPOL1:1;
  };
} CM2CON1bits;
extern volatile far  unsigned char       T12CON;
extern volatile far  union {
  struct {
    unsigned T12CKPS:2;
    unsigned TMR12ON:1;
    unsigned T12OUTPS:4;
  };
  struct {
    unsigned T12CKPS0:1;
    unsigned T12CKPS1:1;
    unsigned :1;
    unsigned T12OUTPS0:1;
    unsigned T12OUTPS1:1;
    unsigned T12OUTPS2:1;
    unsigned T12OUTPS3:1;
  };
} T12CONbits;
extern volatile far  unsigned char       PR12;
extern volatile far  unsigned char       TMR12;
extern volatile far  unsigned char       T10CON;
extern volatile far  union {
  struct {
    unsigned T10CKPS:2;
    unsigned TMR10ON:1;
    unsigned T10OUTPS:4;
  };
  struct {
    unsigned T10CKPS0:1;
    unsigned T10CKPS1:1;
    unsigned :1;
    unsigned T10OUTPS0:1;
    unsigned T10OUTPS1:1;
    unsigned T10OUTPS2:1;
    unsigned T10OUTPS3:1;
  };
} T10CONbits;
extern volatile far  unsigned char       PR10;
extern volatile far  unsigned char       TMR10;
extern volatile far  unsigned char       T8CON;
extern volatile far  union {
  struct {
    unsigned T8CKPS:2;
    unsigned TMR8ON:1;
    unsigned T8OUTPS:4;
  };
  struct {
    unsigned T8CKPS0:1;
    unsigned T8CKPS1:1;
    unsigned :1;
    unsigned T8OUTPS0:1;
    unsigned T8OUTPS1:1;
    unsigned T8OUTPS2:1;
    unsigned T8OUTPS3:1;
  };
} T8CONbits;
extern volatile far  unsigned char       PR8;
extern volatile far  unsigned char       TMR8;
extern volatile far  unsigned char       T6CON;
extern volatile far  union {
  struct {
    unsigned T6CKPS:2;
    unsigned TMR6ON:1;
    unsigned T6OUTPS:4;
  };
  struct {
    unsigned T6CKPS0:1;
    unsigned T6CKPS1:1;
    unsigned :1;
    unsigned T6OUTPS0:1;
    unsigned T6OUTPS1:1;
    unsigned T6OUTPS2:1;
    unsigned T6OUTPS3:1;
  };
} T6CONbits;
extern volatile far  unsigned char       PR6;
extern volatile far  unsigned char       TMR6;
extern volatile far  unsigned char       T7GCON;
extern volatile far  union {
  struct {
    unsigned T7GSS:2;
    unsigned T7GVAL:1;
    unsigned T7GGO_NOT_T7DONE:1;
    unsigned T7GSPM:1;
    unsigned T7GTM:1;
    unsigned T7GPOL:1;
    unsigned TMR7GE:1;
  };
  struct {
    unsigned T7GSS0:1;
    unsigned T7GSS1:1;
    unsigned :1;
    unsigned T7GGO:1;
  };
  struct {
    unsigned :3;
    unsigned NOT_T7DONE:1;
  };
} T7GCONbits;
extern volatile far  unsigned char       T7CON;
extern volatile far  union {
  struct {
    unsigned TMR7ON:1;
    unsigned RD16:1;
    unsigned NOT_T7SYNC:1;
    unsigned SOSCEN:1;
    unsigned T7CKPS:2;
    unsigned TMR7CS:2;
  };
  struct {
    unsigned :4;
    unsigned T7CKPS0:1;
    unsigned T7CKPS1:1;
    unsigned TMR7CS0:1;
    unsigned TMR7CS1:1;
  };
} T7CONbits;
extern volatile far  unsigned char       TMR7L;
extern volatile far  unsigned char       TMR7H;
extern volatile far  unsigned char       CCP10CON;
extern volatile far  union {
  struct {
    unsigned CCP10M:4;
    unsigned DC10B:2;
  };
  struct {
    unsigned CCP10M0:1;
    unsigned CCP10M1:1;
    unsigned CCP10M2:1;
    unsigned CCP10M3:1;
    unsigned DC10B0:1;
    unsigned DC10B1:1;
  };
  struct {
    unsigned :4;
    unsigned CCP10Y:1;
    unsigned CCP10X:1;
  };
} CCP10CONbits;
extern volatile far  unsigned            CCPR10;
extern volatile far  unsigned char       CCPR10L;
extern volatile far  unsigned char       CCPR10H;
extern volatile far  unsigned char       CCP9CON;
extern volatile far  union {
  struct {
    unsigned CCP9M:4;
    unsigned DC9B:2;
  };
  struct {
    unsigned CCP9M0:1;
    unsigned CCP9M1:1;
    unsigned CCP9M2:1;
    unsigned CCP9M3:1;
    unsigned DC9B0:1;
    unsigned DC9B1:1;
  };
  struct {
    unsigned :4;
    unsigned CCP9Y:1;
    unsigned CCP9X:1;
  };
} CCP9CONbits;
extern volatile far  unsigned            CCPR9;
extern volatile far  unsigned char       CCPR9L;
extern volatile far  unsigned char       CCPR9H;
extern volatile far  unsigned char       CCP8CON;
extern volatile far  union {
  struct {
    unsigned CCP8M:4;
    unsigned DC8B:2;
  };
  struct {
    unsigned CCP8M0:1;
    unsigned CCP8M1:1;
    unsigned CCP8M2:1;
    unsigned CCP8M3:1;
    unsigned DC8B0:1;
    unsigned DC8B1:1;
  };
  struct {
    unsigned :4;
    unsigned CCP8Y:1;
    unsigned CCP8X:1;
  };
} CCP8CONbits;
extern volatile far  unsigned            CCPR8;
extern volatile far  unsigned char       CCPR8L;
extern volatile far  unsigned char       CCPR8H;
extern volatile far  unsigned char       CCP3CON;
extern volatile far  union {
  struct {
    unsigned CCP3M:4;
    unsigned DC3B:2;
    unsigned P3M:2;
  };
  struct {
    unsigned CCP3M0:1;
    unsigned CCP3M1:1;
    unsigned CCP3M2:1;
    unsigned CCP3M3:1;
    unsigned DC3B0:1;
    unsigned DC3B1:1;
    unsigned P3M0:1;
    unsigned P3M1:1;
  };
  struct {
    unsigned :4;
    unsigned CCP3Y:1;
    unsigned CCP3X:1;
  };
} CCP3CONbits;
extern volatile far  unsigned            CCPR3;
extern volatile far  unsigned char       CCPR3L;
extern volatile far  unsigned char       CCPR3H;
extern volatile far  unsigned char       ECCP3DEL;
extern volatile far  union {
  struct {
    unsigned P3DC:7;
    unsigned P3RSEN:1;
  };
  struct {
    unsigned P3DC0:1;
    unsigned P3DC1:1;
    unsigned P3DC2:1;
    unsigned P3DC3:1;
    unsigned P3DC4:1;
    unsigned P3DC5:1;
    unsigned P3DC6:1;
  };
} ECCP3DELbits;
extern volatile far  unsigned char       PWM3CON;
extern volatile far  union {
  struct {
    unsigned P3DC:7;
    unsigned P3RSEN:1;
  };
  struct {
    unsigned P3DC0:1;
    unsigned P3DC1:1;
    unsigned P3DC2:1;
    unsigned P3DC3:1;
    unsigned P3DC4:1;
    unsigned P3DC5:1;
    unsigned P3DC6:1;
  };
} PWM3CONbits;
extern volatile far  unsigned char       ECCP3AS;
extern volatile far  union {
  struct {
    unsigned PSS3BD:2;
    unsigned PSS3AC:2;
    unsigned ECCP3AS:3;
    unsigned ECCP3ASE:1;
  };
  struct {
    unsigned PSS3BD0:1;
    unsigned PSS3BD1:1;
    unsigned PSS3AC0:1;
    unsigned PSS3AC1:1;
    unsigned ECCP3AS0:1;
    unsigned ECCP3AS1:1;
    unsigned ECCP3AS2:1;
  };
} ECCP3ASbits;
extern volatile far  unsigned char       CCP2CON;
extern volatile far  union {
  struct {
    unsigned CCP2M:4;
    unsigned DC2B:2;
    unsigned P2M:2;
  };
  struct {
    unsigned CCP2M0:1;
    unsigned CCP2M1:1;
    unsigned CCP2M2:1;
    unsigned CCP2M3:1;
    unsigned DC2B0:1;
    unsigned DC2B1:1;
    unsigned P2M0:1;
    unsigned P2M1:1;
  };
  struct {
    unsigned :4;
    unsigned CCP2Y:1;
    unsigned CCP2X:1;
  };
} CCP2CONbits;
extern volatile far  unsigned char       ECCP2CON;
extern volatile far  union {
  struct {
    unsigned CCP2M:4;
    unsigned DC2B:2;
    unsigned P2M:2;
  };
  struct {
    unsigned CCP2M0:1;
    unsigned CCP2M1:1;
    unsigned CCP2M2:1;
    unsigned CCP2M3:1;
    unsigned DC2B0:1;
    unsigned DC2B1:1;
    unsigned P2M0:1;
    unsigned P2M1:1;
  };
  struct {
    unsigned :4;
    unsigned CCP2Y:1;
    unsigned CCP2X:1;
  };
} ECCP2CONbits;
extern volatile far  unsigned            CCPR2;
extern volatile far  unsigned char       CCPR2L;
extern volatile far  unsigned char       CCPR2H;
extern volatile far  unsigned char       ECCP2DEL;
extern volatile far  union {
  struct {
    unsigned P2DC:7;
    unsigned P2RSEN:1;
  };
  struct {
    unsigned P2DC0:1;
    unsigned P2DC1:1;
    unsigned P2DC2:1;
    unsigned P2DC3:1;
    unsigned P2DC4:1;
    unsigned P2DC5:1;
    unsigned P2DC6:1;
  };
} ECCP2DELbits;
extern volatile far  unsigned char       PWM2CON;
extern volatile far  union {
  struct {
    unsigned P2DC:7;
    unsigned P2RSEN:1;
  };
  struct {
    unsigned P2DC0:1;
    unsigned P2DC1:1;
    unsigned P2DC2:1;
    unsigned P2DC3:1;
    unsigned P2DC4:1;
    unsigned P2DC5:1;
    unsigned P2DC6:1;
  };
} PWM2CONbits;
extern volatile far  unsigned char       ECCP2AS;
extern volatile far  union {
  struct {
    unsigned PSS2BD:2;
    unsigned PSS2AC:2;
    unsigned ECCP2AS:3;
    unsigned ECCP2ASE:1;
  };
  struct {
    unsigned PSS2BD0:1;
    unsigned PSS2BD1:1;
    unsigned PSS2AC0:1;
    unsigned PSS2AC1:1;
    unsigned ECCP2AS0:1;
    unsigned ECCP2AS1:1;
    unsigned ECCP2AS2:1;
  };
} ECCP2ASbits;
extern volatile far  unsigned char       PADCFG1;
extern volatile far  union {
  struct {
    unsigned :1;
    unsigned RTSECSEL:2;
    unsigned :3;
    unsigned REPU:1;
    unsigned RDPU:1;
  };
  struct {
    unsigned :1;
    unsigned RTSECSEL0:1;
    unsigned RTSECSEL1:1;
  };
} PADCFG1bits;
extern volatile far  unsigned char       CM1CON;
extern volatile far  union {
  struct {
    unsigned CCH:2;
    unsigned CREF:1;
    unsigned EVPOL:2;
    unsigned CPOL:1;
    unsigned COE:1;
    unsigned CON:1;
  };
  struct {
    unsigned CCH0:1;
    unsigned CCH1:1;
    unsigned :1;
    unsigned EVPOL0:1;
    unsigned EVPOL1:1;
  };
} CM1CONbits;
extern volatile far  unsigned char       CM1CON1;
extern volatile far  union {
  struct {
    unsigned CCH:2;
    unsigned CREF:1;
    unsigned EVPOL:2;
    unsigned CPOL:1;
    unsigned COE:1;
    unsigned CON:1;
  };
  struct {
    unsigned CCH0:1;
    unsigned CCH1:1;
    unsigned :1;
    unsigned EVPOL0:1;
    unsigned EVPOL1:1;
  };
} CM1CON1bits;
extern volatile far  unsigned char       CTMUICON;
extern volatile far  union {
  struct {
    unsigned IRNG:2;
    unsigned ITRIM:6;
  };
  struct {
    unsigned IRNG0:1;
    unsigned IRNG1:1;
    unsigned ITRIM0:1;
    unsigned ITRIM1:1;
    unsigned ITRIM2:1;
    unsigned ITRIM3:1;
    unsigned ITRIM4:1;
    unsigned ITRIM5:1;
  };
} CTMUICONbits;
extern volatile far  unsigned char       CTMUCONL;
extern volatile far  union {
  struct {
    unsigned EDG1STAT:1;
    unsigned EDG2STAT:1;
    unsigned EDG1SEL:2;
    unsigned EDG1POL:1;
    unsigned EDG2SEL:2;
    unsigned EDG2POL:1;
  };
  struct {
    unsigned :2;
    unsigned EDG1SEL0:1;
    unsigned EDG1SEL1:1;
    unsigned :1;
    unsigned EDG2SEL0:1;
    unsigned EDG2SEL1:1;
  };
} CTMUCONLbits;
extern volatile far  unsigned char       CTMUCONH;
extern volatile far  struct {
  unsigned CTTRIG:1;
  unsigned IDISSEN:1;
  unsigned EDGSEQEN:1;
  unsigned EDGEN:1;
  unsigned TGEN:1;
  unsigned CTMUSIDL:1;
  unsigned :1;
  unsigned CTMUEN:1;
} CTMUCONHbits;
extern volatile far  unsigned            ALRMVAL;
extern volatile far  unsigned char       ALRMVALL;
extern volatile far  unsigned char       ALRMVALH;
extern volatile far  unsigned char       ALRMRPT;
extern volatile far  union {
  struct {
    unsigned ARPT:8;
  };
  struct {
    unsigned ARPT0:1;
    unsigned ARPT1:1;
    unsigned ARPT2:1;
    unsigned ARPT3:1;
    unsigned ARPT4:1;
    unsigned ARPT5:1;
    unsigned ARPT6:1;
    unsigned ARPT7:1;
  };
} ALRMRPTbits;
extern volatile far  unsigned char       ALRMCFG;
extern volatile far  union {
  struct {
    unsigned ALRMPTR:2;
    unsigned AMASK:4;
    unsigned CHIME:1;
    unsigned ALRMEN:1;
  };
  struct {
    unsigned ALRMPTR0:1;
    unsigned ALRMPTR1:1;
    unsigned AMASK0:1;
    unsigned AMASK1:1;
    unsigned AMASK2:1;
    unsigned AMASK3:1;
  };
} ALRMCFGbits;
extern volatile far  unsigned            RTCVAL;
extern volatile far  unsigned char       RTCVALL;
extern volatile far  unsigned char       RTCVALH;
extern volatile far  union {
  struct {
    unsigned RTCVALH:8;
  };
  struct {
    unsigned WAITE0:1;
    unsigned WAITE1:1;
    unsigned WAITM0:1;
    unsigned WAITM1:1;
    unsigned WAITM2:1;
    unsigned WAITM3:1;
    unsigned WAITB0:1;
    unsigned WAITB1:1;
  };
} RTCVALHbits;
extern volatile far  unsigned char       RTCCAL;
extern volatile far  union {
  struct {
    unsigned CAL:8;
  };
  struct {
    unsigned CAL0:1;
    unsigned CAL1:1;
    unsigned CAL2:1;
    unsigned CAL3:1;
    unsigned CAL4:1;
    unsigned CAL5:1;
    unsigned CAL6:1;
    unsigned CAL7:1;
  };
} RTCCALbits;
extern volatile far  unsigned char       RTCCFG;
extern volatile far  union {
  struct {
    unsigned RTCPTR:2;
    unsigned RTCOE:1;
    unsigned HALFSEC:1;
    unsigned RTCSYNC:1;
    unsigned RTCWREN:1;
    unsigned :1;
    unsigned RTCEN:1;
  };
  struct {
    unsigned RTCPTR0:1;
    unsigned RTCPTR1:1;
  };
} RTCCFGbits;
extern volatile near unsigned char       PIE6;
extern volatile near struct {
  unsigned CMP1IE:1;
  unsigned CMP2IE:1;
  unsigned CMP3IE:1;
  unsigned :1;
  unsigned EEIE:1;
} PIE6bits;
extern volatile near unsigned char       EEDATA;
extern volatile near unsigned char       EEADR;
extern volatile near unsigned char       EEADRH;
extern volatile near unsigned char       OSCCON2;
extern volatile near struct {
  unsigned MFIOSEL:1;
  unsigned MFIOFS:1;
  unsigned :1;
  unsigned SOSCGO:1;
  unsigned :2;
  unsigned SOSCRUN:1;
} OSCCON2bits;
extern volatile near unsigned char       BAUDCON;
extern volatile near struct {
  unsigned ABDEN:1;
  unsigned WUE:1;
  unsigned :1;
  unsigned BRG16:1;
  unsigned TXCKP:1;
  unsigned RXDTP:1;
  unsigned RCIDL:1;
  unsigned ABDOVF:1;
} BAUDCONbits;
extern volatile near unsigned char       BAUDCON1;
extern volatile near struct {
  unsigned ABDEN:1;
  unsigned WUE:1;
  unsigned :1;
  unsigned BRG16:1;
  unsigned TXCKP:1;
  unsigned RXDTP:1;
  unsigned RCIDL:1;
  unsigned ABDOVF:1;
} BAUDCON1bits;
extern volatile near unsigned char       BAUDCTL;
extern volatile near struct {
  unsigned ABDEN:1;
  unsigned WUE:1;
  unsigned :1;
  unsigned BRG16:1;
  unsigned TXCKP:1;
  unsigned RXDTP:1;
  unsigned RCIDL:1;
  unsigned ABDOVF:1;
} BAUDCTLbits;
extern volatile near unsigned char       LCDDATA0;
extern volatile near struct {
  unsigned S00C0:1;
  unsigned S01C0:1;
  unsigned S02C0:1;
  unsigned S03C0:1;
  unsigned S04C0:1;
  unsigned S05C0:1;
  unsigned S06C0:1;
  unsigned S07C0:1;
} LCDDATA0bits;
extern volatile near unsigned char       LCDDATA1;
extern volatile near struct {
  unsigned S08C0:1;
  unsigned S09C0:1;
  unsigned S10C0:1;
  unsigned S11C0:1;
  unsigned S12C0:1;
  unsigned S13C0:1;
  unsigned S14C0:1;
  unsigned S15C0:1;
} LCDDATA1bits;
extern volatile near unsigned char       LCDDATA2;
extern volatile near struct {
  unsigned S16C0:1;
  unsigned S17C0:1;
  unsigned S18C0:1;
  unsigned S19C0:1;
  unsigned S20C0:1;
  unsigned S21C0:1;
  unsigned S22C0:1;
  unsigned S23C0:1;
} LCDDATA2bits;
extern volatile near unsigned char       LCDDATA3;
extern volatile near struct {
  unsigned S24C0:1;
  unsigned S25C0:1;
  unsigned S26C0:1;
  unsigned S27C0:1;
  unsigned S28C0:1;
  unsigned S29C0:1;
  unsigned S30C0:1;
  unsigned S31C0:1;
} LCDDATA3bits;
extern volatile near unsigned char       LCDDATA4;
extern volatile near struct {
  unsigned S32C0:1;
} LCDDATA4bits;
extern volatile near unsigned char       LCDDATA6;
extern volatile near struct {
  unsigned S00C1:1;
  unsigned S01C1:1;
  unsigned S02C1:1;
  unsigned S03C1:1;
  unsigned S04C1:1;
  unsigned S05C1:1;
  unsigned S06C1:1;
  unsigned S07C1:1;
} LCDDATA6bits;
extern volatile near unsigned char       LCDDATA7;
extern volatile near struct {
  unsigned S08C1:1;
  unsigned S09C1:1;
  unsigned S10C1:1;
  unsigned S11C1:1;
  unsigned S12C1:1;
  unsigned S13C1:1;
  unsigned S14C1:1;
  unsigned S15C1:1;
} LCDDATA7bits;
extern volatile near unsigned char       LCDDATA8;
extern volatile near struct {
  unsigned S16C1:1;
  unsigned S17C1:1;
  unsigned S18C1:1;
  unsigned S19C1:1;
  unsigned S20C1:1;
  unsigned S21C1:1;
  unsigned S22C1:1;
  unsigned S23C1:1;
} LCDDATA8bits;
extern volatile near unsigned char       LCDDATA9;
extern volatile near struct {
  unsigned S24C1:1;
  unsigned S25C1:1;
  unsigned S26C1:1;
  unsigned S27C1:1;
  unsigned S28C1:1;
  unsigned S29C1:1;
  unsigned S30C1:1;
  unsigned S31C1:1;
} LCDDATA9bits;
extern volatile near unsigned char       LCDDATA10;
extern volatile near struct {
  unsigned S32C1:1;
} LCDDATA10bits;
extern volatile near unsigned char       LCDDATA12;
extern volatile near struct {
  unsigned S00C2:1;
  unsigned S01C2:1;
  unsigned S02C2:1;
  unsigned S03C2:1;
  unsigned S04C2:1;
  unsigned S05C2:1;
  unsigned S06C2:1;
  unsigned S07C2:1;
} LCDDATA12bits;
extern volatile near unsigned char       LCDDATA13;
extern volatile near struct {
  unsigned S08C2:1;
  unsigned S09C2:1;
  unsigned S10C2:1;
  unsigned S11C2:1;
  unsigned S12C2:1;
  unsigned S13C2:1;
  unsigned S14C2:1;
  unsigned S15C2:1;
} LCDDATA13bits;
extern volatile near unsigned char       LCDDATA14;
extern volatile near struct {
  unsigned S16C2:1;
  unsigned S17C2:1;
  unsigned S18C2:1;
  unsigned S19C2:1;
  unsigned S20C2:1;
  unsigned S21C2:1;
  unsigned S22C2:1;
  unsigned S23C2:1;
} LCDDATA14bits;
extern volatile near unsigned char       LCDDATA15;
extern volatile near struct {
  unsigned S24C2:1;
  unsigned S25C2:1;
  unsigned S26C2:1;
  unsigned S27C2:1;
  unsigned S28C2:1;
  unsigned S29C2:1;
  unsigned S30C2:1;
  unsigned S31C2:1;
} LCDDATA15bits;
extern volatile near unsigned char       LCDDATA16;
extern volatile near struct {
  unsigned S32C2:1;
} LCDDATA16bits;
extern volatile near unsigned char       LCDDATA18;
extern volatile near struct {
  unsigned S00C3:1;
  unsigned S01C3:1;
  unsigned S02C3:1;
  unsigned S03C3:1;
  unsigned S04C3:1;
  unsigned S05C3:1;
  unsigned S06C3:1;
  unsigned S07C3:1;
} LCDDATA18bits;
extern volatile near unsigned char       LCDDATA19;
extern volatile near struct {
  unsigned S08C3:1;
  unsigned S09C3:1;
  unsigned S10C3:1;
  unsigned S11C3:1;
  unsigned S12C3:1;
  unsigned S13C3:1;
  unsigned S14C3:1;
  unsigned S15C3:1;
} LCDDATA19bits;
extern volatile near unsigned char       LCDDATA20;
extern volatile near struct {
  unsigned S16C3:1;
  unsigned S17C3:1;
  unsigned S18C3:1;
  unsigned S19C3:1;
  unsigned S20C3:1;
  unsigned S21C3:1;
  unsigned S22C3:1;
  unsigned S23C3:1;
} LCDDATA20bits;
extern volatile near unsigned char       LCDDATA21;
extern volatile near struct {
  unsigned S24C3:1;
  unsigned S25C3:1;
  unsigned S26C3:1;
  unsigned S27C3:1;
  unsigned S28C3:1;
  unsigned S29C3:1;
  unsigned S30C3:1;
  unsigned S31C3:1;
} LCDDATA21bits;
extern volatile near unsigned char       LCDDATA22;
extern volatile near struct {
  unsigned S32C3:1;
} LCDDATA22bits;
extern volatile near unsigned char       EECON2;
extern volatile near unsigned char       EECON1;
extern volatile near struct {
  unsigned RD:1;
  unsigned WR:1;
  unsigned WREN:1;
  unsigned WRERR:1;
  unsigned FREE:1;
  unsigned :1;
  unsigned CFGS:1;
  unsigned EEPGD:1;
} EECON1bits;
extern volatile near unsigned char       PORTA;
extern volatile near union {
  struct {
    unsigned RA0:1;
    unsigned RA1:1;
    unsigned RA2:1;
    unsigned RA3:1;
    unsigned RA4:1;
    unsigned RA5:1;
    unsigned RA6:1;
    unsigned RA7:1;
  };
  struct {
    unsigned AN0:1;
    unsigned AN1:1;
    unsigned AN2:1;
    unsigned AN3:1;
    unsigned :1;
    unsigned AN4:1;
    unsigned OSC2:1;
    unsigned OSC1:1;
  };
  struct {
    unsigned ULPWUIN:1;
    unsigned SEG18:1;
    unsigned VREF_MINUS:1;
    unsigned VREF_PLUS:1;
    unsigned SEG14:1;
    unsigned SEG15:1;
    unsigned CLKO:1;
    unsigned CLKI:1;
  };
  struct {
    unsigned :4;
    unsigned T0CKI:1;
    unsigned T1CKI:1;
  };
  struct {
    unsigned :5;
    unsigned T3G:1;
  };
  struct {
    unsigned :5;
    unsigned LVDIN:1;
  };
} PORTAbits;
extern volatile near unsigned char       PORTB;
extern volatile near union {
  struct {
    unsigned RB0:1;
    unsigned RB1:1;
    unsigned RB2:1;
    unsigned RB3:1;
    unsigned RB4:1;
    unsigned RB5:1;
    unsigned RB6:1;
    unsigned RB7:1;
  };
  struct {
    unsigned INT0:1;
    unsigned INT1:1;
    unsigned INT2:1;
    unsigned INT3:1;
    unsigned KBI0:1;
    unsigned KBI1:1;
    unsigned KBI2:1;
    unsigned KBI3:1;
  };
  struct {
    unsigned SEG30:1;
    unsigned SEG8:1;
    unsigned SEG9:1;
    unsigned SEG10:1;
    unsigned SEG11:1;
    unsigned SEG29:1;
  };
  struct {
    unsigned FLT0:1;
    unsigned :1;
    unsigned CTED1:1;
    unsigned CTED2:1;
    unsigned :1;
    unsigned T3CKI:1;
  };
  struct {
    unsigned :3;
    unsigned CCP2_PA2:1;
    unsigned :1;
    unsigned T1G:1;
  };
  struct {
    unsigned :5;
    unsigned PGM:1;
    unsigned PGC:1;
    unsigned PGD:1;
  };
} PORTBbits;
extern volatile near unsigned char       PORTC;
extern volatile near union {
  struct {
    unsigned RC0:1;
    unsigned RC1:1;
    unsigned RC2:1;
    unsigned RC3:1;
    unsigned RC4:1;
    unsigned RC5:1;
    unsigned RC6:1;
    unsigned RC7:1;
  };
  struct {
    unsigned :1;
    unsigned SEG32:1;
    unsigned SEG13:1;
    unsigned SEG17:1;
    unsigned SEG16:1;
    unsigned SEG12:1;
    unsigned SEG27:1;
    unsigned SEG28:1;
  };
  struct {
    unsigned SOSCO:1;
    unsigned SOSCI:1;
    unsigned :1;
    unsigned SCK1:1;
    unsigned SDI1:1;
    unsigned SDO1:1;
    unsigned TX1:1;
    unsigned RX1:1;
  };
  struct {
    unsigned SCKLI:1;
    unsigned CCP2:1;
    unsigned CCP1:1;
    unsigned SCL1:1;
    unsigned SDA1:1;
    unsigned :1;
    unsigned CK1:1;
    unsigned DT1:1;
  };
  struct {
    unsigned :1;
    unsigned PA2:1;
    unsigned PA1:1;
  };
} PORTCbits;
extern volatile near unsigned char       PORTD;
extern volatile near union {
  struct {
    unsigned RD0:1;
    unsigned RD1:1;
    unsigned RD2:1;
    unsigned RD3:1;
    unsigned RD4:1;
    unsigned RD5:1;
    unsigned RD6:1;
    unsigned RD7:1;
  };
  struct {
    unsigned AD0:1;
    unsigned AD1:1;
    unsigned AD2:1;
    unsigned AD3:1;
    unsigned AD4:1;
    unsigned AD5:1;
    unsigned AD6:1;
    unsigned AD7:1;
  };
  struct {
    unsigned PSP0:1;
    unsigned PSP1:1;
    unsigned PSP2:1;
    unsigned PSP3:1;
    unsigned PSP4:1;
    unsigned PSP5:1;
    unsigned PSP6:1;
    unsigned PSP7:1;
  };
  struct {
    unsigned SEG0:1;
    unsigned SEG1:1;
    unsigned SEG2:1;
    unsigned SEG3:1;
    unsigned SEG4:1;
    unsigned SEG5:1;
    unsigned SEG6:1;
    unsigned SEG7:1;
  };
  struct {
    unsigned CTPLS:1;
    unsigned T5CKI:1;
    unsigned :2;
    unsigned SDO2:1;
    unsigned SDI2:1;
    unsigned SCK2:1;
    unsigned SS2:1;
  };
  struct {
    unsigned :1;
    unsigned T7G:1;
    unsigned :3;
    unsigned SDA2:1;
    unsigned SCL2:1;
  };
} PORTDbits;
extern volatile near unsigned char       PORTE;
extern volatile near union {
  struct {
    unsigned RE0:1;
    unsigned RE1:1;
    unsigned RE2:1;
    unsigned RE3:1;
    unsigned RE4:1;
    unsigned RE5:1;
    unsigned RE6:1;
    unsigned RE7:1;
  };
  struct {
    unsigned AD8:1;
    unsigned AD9:1;
    unsigned AD10:1;
    unsigned AD11:1;
    unsigned AD12:1;
    unsigned AD13:1;
    unsigned AD14:1;
    unsigned AD15:1;
  };
  struct {
    unsigned PD2:1;
    unsigned PC2:1;
    unsigned PB2:1;
    unsigned PC3:1;
    unsigned PB3:1;
    unsigned PC1:1;
    unsigned PB1:1;
    unsigned PA2:1;
  };
  struct {
    unsigned :2;
    unsigned CCP10:1;
    unsigned CCP9:1;
    unsigned CCP8:1;
    unsigned CCP7:1;
    unsigned CCP6:1;
    unsigned CCP2:1;
  };
  struct {
    unsigned RD:1;
    unsigned WR:1;
    unsigned CS:1;
    unsigned COM0:1;
    unsigned COM1:1;
    unsigned COM2:1;
    unsigned COM3:1;
    unsigned SEG31:1;
  };
  struct {
    unsigned LCDBIAS1:1;
    unsigned LCDBIAS2:1;
    unsigned LCDBIAS3:1;
    unsigned :1;
    unsigned REFO:1;
  };
} PORTEbits;
extern volatile near unsigned char       PORTF;
extern volatile near union {
  struct {
    unsigned :1;
    unsigned RF1:1;
    unsigned RF2:1;
    unsigned RF3:1;
    unsigned RF4:1;
    unsigned RF5:1;
    unsigned RF6:1;
    unsigned RF7:1;
  };
  struct {
    unsigned :1;
    unsigned AN6:1;
    unsigned AN7:1;
    unsigned AN8:1;
    unsigned AN9:1;
    unsigned AN10:1;
    unsigned AN11:1;
    unsigned AN5:1;
  };
  struct {
    unsigned :1;
    unsigned SEG19:1;
    unsigned SEG20:1;
    unsigned SEG21:1;
    unsigned SEG22:1;
    unsigned SEG23:1;
    unsigned SEG24:1;
    unsigned SEG25:1;
  };
  struct {
    unsigned :1;
    unsigned C2OUT:1;
    unsigned C1OUT:1;
    unsigned C2INB:1;
    unsigned C2INA:1;
    unsigned C1INB:1;
    unsigned C1INA:1;
    unsigned SS1:1;
  };
  struct {
    unsigned :1;
    unsigned CTDIN:1;
    unsigned :1;
    unsigned CTMUI:1;
    unsigned :1;
    unsigned CVREF:1;
  };
} PORTFbits;
extern volatile near unsigned char       PORTG;
extern volatile near union {
  struct {
    unsigned RG0:1;
    unsigned RG1:1;
    unsigned RG2:1;
    unsigned RG3:1;
    unsigned RG4:1;
    unsigned RG5:1;
  };
  struct {
    unsigned CCP3:1;
    unsigned C3OUT:1;
    unsigned C3INA:1;
    unsigned C3INB:1;
    unsigned C3INC:1;
  };
  struct {
    unsigned PA3:1;
    unsigned TX2:1;
    unsigned RX2:1;
    unsigned PD3:1;
    unsigned PD1:1;
  };
  struct {
    unsigned :1;
    unsigned AN19:1;
    unsigned AN18:1;
    unsigned AN17:1;
    unsigned AN16:1;
  };
  struct {
    unsigned :1;
    unsigned CK2:1;
    unsigned DT2:1;
    unsigned CCP4:1;
    unsigned CCP5:1;
  };
  struct {
    unsigned :4;
    unsigned SEG26:1;
  };
  struct {
    unsigned :4;
    unsigned T7CKI:1;
  };
  struct {
    unsigned :4;
    unsigned T5G:1;
  };
  struct {
    unsigned :4;
    unsigned RTCC:1;
  };
} PORTGbits;
extern volatile near unsigned char       LATA;
extern volatile near struct {
  unsigned LATA0:1;
  unsigned LATA1:1;
  unsigned LATA2:1;
  unsigned LATA3:1;
  unsigned LATA4:1;
  unsigned LATA5:1;
  unsigned LATA6:1;
  unsigned LATA7:1;
} LATAbits;
extern volatile near unsigned char       LATB;
extern volatile near struct {
  unsigned LATB0:1;
  unsigned LATB1:1;
  unsigned LATB2:1;
  unsigned LATB3:1;
  unsigned LATB4:1;
  unsigned LATB5:1;
  unsigned LATB6:1;
  unsigned LATB7:1;
} LATBbits;
extern volatile near unsigned char       LATC;
extern volatile near struct {
  unsigned LATC0:1;
  unsigned LATC1:1;
  unsigned LATC2:1;
  unsigned LATC3:1;
  unsigned LATC4:1;
  unsigned LATC5:1;
  unsigned LATC6:1;
  unsigned LATC7:1;
} LATCbits;
extern volatile near unsigned char       LATD;
extern volatile near struct {
  unsigned LATD0:1;
  unsigned LATD1:1;
  unsigned LATD2:1;
  unsigned LATD3:1;
  unsigned LATD4:1;
  unsigned LATD5:1;
  unsigned LATD6:1;
  unsigned LATD7:1;
} LATDbits;
extern volatile near unsigned char       LATE;
extern volatile near struct {
  unsigned LATE0:1;
  unsigned LATE1:1;
  unsigned LATE2:1;
  unsigned LATE3:1;
  unsigned LATE4:1;
  unsigned LATE5:1;
  unsigned LATE6:1;
  unsigned LATE7:1;
} LATEbits;
extern volatile near unsigned char       LATF;
extern volatile near struct {
  unsigned :1;
  unsigned LATF1:1;
  unsigned LATF2:1;
  unsigned LATF3:1;
  unsigned LATF4:1;
  unsigned LATF5:1;
  unsigned LATF6:1;
  unsigned LATF7:1;
} LATFbits;
extern volatile near unsigned char       LATG;
extern volatile near struct {
  unsigned LATG0:1;
  unsigned LATG1:1;
  unsigned LATG2:1;
  unsigned LATG3:1;
  unsigned LATG4:1;
} LATGbits;
extern volatile near unsigned char       TRISA;
extern volatile near struct {
  unsigned TRISA0:1;
  unsigned TRISA1:1;
  unsigned TRISA2:1;
  unsigned TRISA3:1;
  unsigned TRISA4:1;
  unsigned TRISA5:1;
  unsigned TRISA6:1;
  unsigned TRISA7:1;
} TRISAbits;
extern volatile near unsigned char       TRISB;
extern volatile near struct {
  unsigned TRISB0:1;
  unsigned TRISB1:1;
  unsigned TRISB2:1;
  unsigned TRISB3:1;
  unsigned TRISB4:1;
  unsigned TRISB5:1;
  unsigned TRISB6:1;
  unsigned TRISB7:1;
} TRISBbits;
extern volatile near unsigned char       TRISC;
extern volatile near struct {
  unsigned TRISC0:1;
  unsigned TRISC1:1;
  unsigned TRISC2:1;
  unsigned TRISC3:1;
  unsigned TRISC4:1;
  unsigned TRISC5:1;
  unsigned TRISC6:1;
  unsigned TRISC7:1;
} TRISCbits;
extern volatile near unsigned char       TRISD;
extern volatile near struct {
  unsigned TRISD0:1;
  unsigned TRISD1:1;
  unsigned TRISD2:1;
  unsigned TRISD3:1;
  unsigned TRISD4:1;
  unsigned TRISD5:1;
  unsigned TRISD6:1;
  unsigned TRISD7:1;
} TRISDbits;
extern volatile near unsigned char       TRISE;
extern volatile near struct {
  unsigned TRISE0:1;
  unsigned TRISE1:1;
  unsigned TRISE2:1;
  unsigned TRISE3:1;
  unsigned TRISE4:1;
  unsigned TRISE5:1;
  unsigned TRISE6:1;
  unsigned TRISE7:1;
} TRISEbits;
extern volatile near unsigned char       TRISF;
extern volatile near struct {
  unsigned :1;
  unsigned TRISF1:1;
  unsigned TRISF2:1;
  unsigned TRISF3:1;
  unsigned TRISF4:1;
  unsigned TRISF5:1;
  unsigned TRISF6:1;
  unsigned TRISF7:1;
} TRISFbits;
extern volatile near unsigned char       TRISG;
extern volatile near struct {
  unsigned TRISG0:1;
  unsigned TRISG1:1;
  unsigned TRISG2:1;
  unsigned TRISG3:1;
  unsigned TRISG4:1;
} TRISGbits;
extern volatile near unsigned char       OSCTUNE;
extern volatile near union {
  struct {
    unsigned TUN:6;
    unsigned PLLEN:1;
    unsigned INTSRC:1;
  };
  struct {
    unsigned TUN0:1;
    unsigned TUN1:1;
    unsigned TUN2:1;
    unsigned TUN3:1;
    unsigned TUN4:1;
    unsigned TUN5:1;
  };
} OSCTUNEbits;
extern volatile near unsigned char       PSTR1CON;
extern volatile near union {
  struct {
    unsigned STRA:1;
    unsigned STRB:1;
    unsigned STRC:1;
    unsigned STRD:1;
    unsigned STRSYNC:1;
    unsigned :1;
    unsigned CMPL:2;
  };
  struct {
    unsigned :6;
    unsigned CMPL0:1;
    unsigned CMPL1:1;
  };
} PSTR1CONbits;
extern volatile near unsigned char       PIE1;
extern volatile near union {
  struct {
    unsigned TMR1IE:1;
    unsigned TMR2IE:1;
    unsigned TMR1GIE:1;
    unsigned SSP1IE:1;
    unsigned TX1IE:1;
    unsigned RC1IE:1;
    unsigned ADIE:1;
  };
  struct {
    unsigned :3;
    unsigned SSPIE:1;
    unsigned TXIE:1;
    unsigned RCIE:1;
  };
} PIE1bits;
extern volatile near unsigned char       PIR1;
extern volatile near union {
  struct {
    unsigned TMR1IF:1;
    unsigned TMR2IF:1;
    unsigned TMR1GIF:1;
    unsigned SSP1IF:1;
    unsigned TX1IF:1;
    unsigned RC1IF:1;
    unsigned ADIF:1;
  };
  struct {
    unsigned :3;
    unsigned SSPIF:1;
    unsigned TXIF:1;
    unsigned RCIF:1;
  };
} PIR1bits;
extern volatile near unsigned char       IPR1;
extern volatile near union {
  struct {
    unsigned TMR1IP:1;
    unsigned TMR2IP:1;
    unsigned TMR1GIP:1;
    unsigned SSP1IP:1;
    unsigned TX1IP:1;
    unsigned RC1IP:1;
    unsigned ADIP:1;
  };
  struct {
    unsigned :3;
    unsigned SSPIP:1;
    unsigned TXIP:1;
    unsigned RCIP:1;
  };
} IPR1bits;
extern volatile near unsigned char       PIE2;
extern volatile near union {
  struct {
    unsigned TMR3GIE:1;
    unsigned TMR3IE:1;
    unsigned HLVDIE:1;
    unsigned BCL1IE:1;
    unsigned BCL2IE:1;
    unsigned SSP2IE:1;
    unsigned :1;
    unsigned OSCFIE:1;
  };
  struct {
    unsigned :2;
    unsigned LVDIE:1;
    unsigned BCLIE:1;
  };
} PIE2bits;
extern volatile near unsigned char       PIR2;
extern volatile near union {
  struct {
    unsigned TMR3GIF:1;
    unsigned TMR3IF:1;
    unsigned HLVDIF:1;
    unsigned BCL1IF:1;
    unsigned BCL2IF:1;
    unsigned SSP2IF:1;
    unsigned :1;
    unsigned OSCFIF:1;
  };
  struct {
    unsigned :2;
    unsigned LVDIF:1;
    unsigned BCLIF:1;
  };
} PIR2bits;
extern volatile near unsigned char       IPR2;
extern volatile near union {
  struct {
    unsigned TMR3GIP:1;
    unsigned TMR3IP:1;
    unsigned HLVDIP:1;
    unsigned BCL1IP:1;
    unsigned BCL2IP:1;
    unsigned SSP2IP:1;
    unsigned :1;
    unsigned OSCFIP:1;
  };
  struct {
    unsigned :2;
    unsigned LVDIP:1;
    unsigned BCLIP:1;
  };
} IPR2bits;
extern volatile near unsigned char       PIE3;
extern volatile near struct {
  unsigned RTCCIE:1;
  unsigned CCP1IE:1;
  unsigned CCP2IE:1;
  unsigned CTMUIE:1;
  unsigned TX2IE:1;
  unsigned RC2IE:1;
  unsigned LCDIE:1;
  unsigned TMR5GIE:1;
} PIE3bits;
extern volatile near unsigned char       PIR3;
extern volatile near struct {
  unsigned RTCCIF:1;
  unsigned CCP1IF:1;
  unsigned CCP2IF:1;
  unsigned CTMUIF:1;
  unsigned TX2IF:1;
  unsigned RC2IF:1;
  unsigned LCDIF:1;
  unsigned TMR5GIF:1;
} PIR3bits;
extern volatile near unsigned char       IPR3;
extern volatile near struct {
  unsigned RTCCIP:1;
  unsigned CCP1IP:1;
  unsigned CCP2IP:1;
  unsigned CTMUIP:1;
  unsigned TX2IP:1;
  unsigned RC2IP:1;
  unsigned LCDIP:1;
  unsigned TMR5GIP:1;
} IPR3bits;
extern volatile near unsigned char       PIR6;
extern volatile near struct {
  unsigned CMP1IF:1;
  unsigned CMP2IF:1;
  unsigned CMP3IF:1;
  unsigned :1;
  unsigned EEIF:1;
} PIR6bits;
extern volatile near unsigned char       HLVDCON;
extern volatile near union {
  struct {
    unsigned HLVDL:4;
    unsigned HLVDEN:1;
    unsigned IRVST:1;
    unsigned BGVST:1;
    unsigned VDIRMAG:1;
  };
  struct {
    unsigned HLVDL0:1;
    unsigned HLVDL1:1;
    unsigned HLVDL2:1;
    unsigned HLVDL3:1;
  };
} HLVDCONbits;
extern volatile near unsigned char       IPR6;
extern volatile near struct {
  unsigned CMP1IP:1;
  unsigned CMP2IP:1;
  unsigned CMP3IP:1;
  unsigned :1;
  unsigned EEIP:1;
} IPR6bits;
extern volatile near unsigned char       T1GCON;
extern volatile near union {
  struct {
    unsigned T1GSS:2;
    unsigned T1GVAL:1;
    unsigned T1GGO_NOT_T1DONE:1;
    unsigned T1GSPM:1;
    unsigned T1GTM:1;
    unsigned T1GPOL:1;
    unsigned TMR1GE:1;
  };
  struct {
    unsigned T1GSS0:1;
    unsigned T1GSS1:1;
    unsigned :1;
    unsigned T1GGO:1;
  };
  struct {
    unsigned :3;
    unsigned NOT_T1DONE:1;
  };
} T1GCONbits;
extern volatile near unsigned char       RCSTA;
extern volatile near union {
  struct {
    unsigned RX9D:1;
    unsigned OERR:1;
    unsigned FERR:1;
    unsigned ADDEN:1;
    unsigned CREN:1;
    unsigned SREN:1;
    unsigned RX9:1;
    unsigned SPEN:1;
  };
  struct {
    unsigned RCD8:1;
    unsigned :2;
    unsigned ADEN:1;
    unsigned :2;
    unsigned RC9:1;
  };
  struct {
    unsigned :6;
    unsigned NOT_RC8:1;
  };
  struct {
    unsigned :6;
    unsigned RC8_9:1;
  };
  struct {
    unsigned RX9D1:1;
    unsigned OERR1:1;
    unsigned FERR1:1;
    unsigned ADDEN1:1;
    unsigned CREN1:1;
    unsigned SREN1:1;
    unsigned RX91:1;
    unsigned SPEN1:1;
  };
} RCSTAbits;
extern volatile near unsigned char       RCSTA1;
extern volatile near union {
  struct {
    unsigned RX9D:1;
    unsigned OERR:1;
    unsigned FERR:1;
    unsigned ADDEN:1;
    unsigned CREN:1;
    unsigned SREN:1;
    unsigned RX9:1;
    unsigned SPEN:1;
  };
  struct {
    unsigned RCD8:1;
    unsigned :2;
    unsigned ADEN:1;
    unsigned :2;
    unsigned RC9:1;
  };
  struct {
    unsigned :6;
    unsigned NOT_RC8:1;
  };
  struct {
    unsigned :6;
    unsigned RC8_9:1;
  };
  struct {
    unsigned RX9D1:1;
    unsigned OERR1:1;
    unsigned FERR1:1;
    unsigned ADDEN1:1;
    unsigned CREN1:1;
    unsigned SREN1:1;
    unsigned RX91:1;
    unsigned SPEN1:1;
  };
} RCSTA1bits;
extern volatile near unsigned char       TXSTA;
extern volatile near union {
  struct {
    unsigned TX9D:1;
    unsigned TRMT:1;
    unsigned BRGH:1;
    unsigned SENDB:1;
    unsigned SYNC:1;
    unsigned TXEN:1;
    unsigned TX9:1;
    unsigned CSRC:1;
  };
  struct {
    unsigned TXD8:1;
    unsigned :5;
    unsigned TX8_9:1;
  };
  struct {
    unsigned :6;
    unsigned NOT_TX8:1;
  };
  struct {
    unsigned TX9D1:1;
    unsigned TRMT1:1;
    unsigned BRGH1:1;
    unsigned SENDB1:1;
    unsigned SYNC1:1;
    unsigned TXEN1:1;
    unsigned TX91:1;
    unsigned CSRC1:1;
  };
} TXSTAbits;
extern volatile near unsigned char       TXSTA1;
extern volatile near union {
  struct {
    unsigned TX9D:1;
    unsigned TRMT:1;
    unsigned BRGH:1;
    unsigned SENDB:1;
    unsigned SYNC:1;
    unsigned TXEN:1;
    unsigned TX9:1;
    unsigned CSRC:1;
  };
  struct {
    unsigned TXD8:1;
    unsigned :5;
    unsigned TX8_9:1;
  };
  struct {
    unsigned :6;
    unsigned NOT_TX8:1;
  };
  struct {
    unsigned TX9D1:1;
    unsigned TRMT1:1;
    unsigned BRGH1:1;
    unsigned SENDB1:1;
    unsigned SYNC1:1;
    unsigned TXEN1:1;
    unsigned TX91:1;
    unsigned CSRC1:1;
  };
} TXSTA1bits;
extern volatile near unsigned char       TXREG;
extern volatile near unsigned char       TXREG1;
extern volatile near unsigned char       RCREG;
extern volatile near unsigned char       RCREG1;
extern volatile near unsigned char       SPBRG;
extern volatile near unsigned char       SPBRG1;
extern volatile near unsigned char       T3GCON;
extern volatile near union {
  struct {
    unsigned T3GSS:2;
    unsigned T3GVAL:1;
    unsigned T3GGO_NOT_T3DONE:1;
    unsigned T3GSPM:1;
    unsigned T3GTM:1;
    unsigned T3GPOL:1;
    unsigned TMR3GE:1;
  };
  struct {
    unsigned T3GSS0:1;
    unsigned T3GSS1:1;
    unsigned :1;
    unsigned T3GGO:1;
  };
  struct {
    unsigned :3;
    unsigned NOT_T3DONE:1;
  };
} T3GCONbits;
extern volatile near unsigned char       T3CON;
extern volatile near union {
  struct {
    unsigned TMR3ON:1;
    unsigned RD16:1;
    unsigned NOT_T3SYNC:1;
    unsigned SOSCEN:1;
    unsigned T3CKPS0:1;
    unsigned T3CKPS1:1;
    unsigned TMR3CS0:1;
    unsigned TMR3CS1:1;
  };
  struct {
    unsigned :4;
    unsigned T3CKPS:2;
    unsigned TMR3CS:2;
  };
} T3CONbits;
extern volatile near unsigned char       TMR3L;
extern volatile near unsigned char       TMR3H;
extern volatile near unsigned char       CMSTAT;
extern volatile near union {
  struct {
    unsigned :5;
    unsigned CMP1OUT:1;
    unsigned CMP2OUT:1;
    unsigned CMP3OUT:1;
  };
  struct {
    unsigned :5;
    unsigned C1OUT:1;
    unsigned C2OUT:1;
    unsigned C3OUT:1;
  };
} CMSTATbits;
extern volatile near unsigned char       CMSTATUS;
extern volatile near union {
  struct {
    unsigned :5;
    unsigned CMP1OUT:1;
    unsigned CMP2OUT:1;
    unsigned CMP3OUT:1;
  };
  struct {
    unsigned :5;
    unsigned C1OUT:1;
    unsigned C2OUT:1;
    unsigned C3OUT:1;
  };
} CMSTATUSbits;
extern volatile near unsigned char       CVRCON;
extern volatile near union {
  struct {
    unsigned CVR:5;
    unsigned CVRSS:1;
    unsigned CVROE:1;
    unsigned CVREN:1;
  };
  struct {
    unsigned CVR0:1;
    unsigned CVR1:1;
    unsigned CVR2:1;
    unsigned CVR3:1;
    unsigned CVR4:1;
  };
} CVRCONbits;
extern volatile near unsigned char       PIE4;
extern volatile near struct {
  unsigned CCP3IE:1;
  unsigned CCP4IE:1;
  unsigned CCP5IE:1;
  unsigned CCP6IE:1;
  unsigned CCP7IE:1;
  unsigned CCP8IE:1;
  unsigned CCP9IE:1;
  unsigned CCP10IE:1;
} PIE4bits;
extern volatile near unsigned char       PIR4;
extern volatile near struct {
  unsigned CCP3IF:1;
  unsigned CCP4IF:1;
  unsigned CCP5IF:1;
  unsigned CCP6IF:1;
  unsigned CCP7IF:1;
  unsigned CCP8IF:1;
  unsigned CCP9IF:1;
  unsigned CCP10IF:1;
} PIR4bits;
extern volatile near unsigned char       IPR4;
extern volatile near struct {
  unsigned CCP3IP:1;
  unsigned CCP4IP:1;
  unsigned CCP5IP:1;
  unsigned CCP6IP:1;
  unsigned CCP7IP:1;
  unsigned CCP8IP:1;
  unsigned CCP9IP:1;
  unsigned CCP10IP:1;
} IPR4bits;
extern volatile near unsigned char       PIE5;
extern volatile near struct {
  unsigned TMR4IE:1;
  unsigned TMR5IE:1;
  unsigned TMR6IE:1;
  unsigned TMR7IE:1;
  unsigned TMR8IE:1;
  unsigned TMR10IE:1;
  unsigned TMR12IE:1;
  unsigned TMR7GIE:1;
} PIE5bits;
extern volatile near unsigned char       PIR5;
extern volatile near struct {
  unsigned TMR4IF:1;
  unsigned TMR5IF:1;
  unsigned TMR6IF:1;
  unsigned TMR7IF:1;
  unsigned TMR8IF:1;
  unsigned TMR10IF:1;
  unsigned TMR12IF:1;
  unsigned TMR7GIF:1;
} PIR5bits;
extern volatile near unsigned char       CCP1CON;
extern volatile near union {
  struct {
    unsigned CCP1M:4;
    unsigned DC1B:2;
    unsigned P1M:2;
  };
  struct {
    unsigned CCP1M0:1;
    unsigned CCP1M1:1;
    unsigned CCP1M2:1;
    unsigned CCP1M3:1;
    unsigned DC1B0:1;
    unsigned DC1B1:1;
    unsigned P1M0:1;
    unsigned P1M1:1;
  };
  struct {
    unsigned :4;
    unsigned CCP1Y:1;
    unsigned CCP1X:1;
  };
} CCP1CONbits;
extern volatile near unsigned char       ECCP1CON;
extern volatile near union {
  struct {
    unsigned CCP1M:4;
    unsigned DC1B:2;
    unsigned P1M:2;
  };
  struct {
    unsigned CCP1M0:1;
    unsigned CCP1M1:1;
    unsigned CCP1M2:1;
    unsigned CCP1M3:1;
    unsigned DC1B0:1;
    unsigned DC1B1:1;
    unsigned P1M0:1;
    unsigned P1M1:1;
  };
  struct {
    unsigned :4;
    unsigned CCP1Y:1;
    unsigned CCP1X:1;
  };
} ECCP1CONbits;
extern volatile near unsigned            CCPR1;
extern volatile near unsigned char       CCPR1L;
extern volatile near unsigned char       CCPR1H;
extern volatile near unsigned char       ECCP1DEL;
extern volatile near union {
  struct {
    unsigned P1DC:7;
    unsigned P1RSEN:1;
  };
  struct {
    unsigned P1DC0:1;
    unsigned P1DC1:1;
    unsigned P1DC2:1;
    unsigned P1DC3:1;
    unsigned P1DC4:1;
    unsigned P1DC5:1;
    unsigned P1DC6:1;
  };
} ECCP1DELbits;
extern volatile near unsigned char       PWM1CON;
extern volatile near union {
  struct {
    unsigned P1DC:7;
    unsigned P1RSEN:1;
  };
  struct {
    unsigned P1DC0:1;
    unsigned P1DC1:1;
    unsigned P1DC2:1;
    unsigned P1DC3:1;
    unsigned P1DC4:1;
    unsigned P1DC5:1;
    unsigned P1DC6:1;
  };
} PWM1CONbits;
extern volatile near unsigned char       ECCP1AS;
extern volatile near union {
  struct {
    unsigned PSS1BD:2;
    unsigned PSS1AC:2;
    unsigned ECCP1AS:3;
    unsigned ECCP1ASE:1;
  };
  struct {
    unsigned PSS1BD0:1;
    unsigned PSS1BD1:1;
    unsigned PSS1AC0:1;
    unsigned PSS1AC1:1;
    unsigned ECCP1AS0:1;
    unsigned ECCP1AS1:1;
    unsigned ECCP1AS2:1;
  };
} ECCP1ASbits;
extern volatile near unsigned char       ADCON2;
extern volatile near union {
  struct {
    unsigned ADCS:3;
    unsigned ACQT:3;
    unsigned :1;
    unsigned ADFM:1;
  };
  struct {
    unsigned ADCS0:1;
    unsigned ADCS1:1;
    unsigned ADCS2:1;
    unsigned ACQT0:1;
    unsigned ACQT1:1;
    unsigned ACQT2:1;
  };
} ADCON2bits;
extern volatile near unsigned char       ADCON1;
extern volatile near union {
  struct {
    unsigned CHSN:3;
    unsigned VNCFG:1;
    unsigned VCFG:2;
    unsigned TRIGSEL:2;
  };
  struct {
    unsigned CHSN0:1;
    unsigned CHSN1:1;
    unsigned CHSN2:1;
    unsigned :1;
    unsigned VCFG0:1;
    unsigned VCFG1:1;
    unsigned TRIGSEL0:1;
    unsigned TRIGSEL1:1;
  };
} ADCON1bits;
extern volatile near unsigned char       ADCON0;
extern volatile near union {
  struct {
    unsigned ADON:1;
    unsigned GO_NOT_DONE:1;
    unsigned CHS:5;
  };
  struct {
    unsigned :1;
    unsigned DONE:1;
    unsigned CHS0:1;
    unsigned CHS1:1;
    unsigned CHS2:1;
    unsigned CHS3:1;
    unsigned CHS4:1;
  };
  struct {
    unsigned :1;
    unsigned GO:1;
  };
  struct {
    unsigned :1;
    unsigned NOT_DONE:1;
  };
} ADCON0bits;
extern volatile near unsigned            ADRES;
extern volatile near unsigned char       ADRESL;
extern volatile near unsigned char       ADRESH;
extern volatile near unsigned char       SSP1CON2;
extern volatile near union {
  struct {
    unsigned SEN:1;
    unsigned RSEN:1;
    unsigned PEN:1;
    unsigned RCEN:1;
    unsigned ACKEN:1;
    unsigned ACKDT:1;
    unsigned ACKSTAT:1;
    unsigned GCEN:1;
  };
  struct {
    unsigned :1;
    unsigned ADMSK1:1;
    unsigned ADMSK2:1;
    unsigned ADMSK3:1;
    unsigned ADMSK4:1;
    unsigned ADMSK5:1;
  };
} SSP1CON2bits;
extern volatile near unsigned char       SSPCON2;
extern volatile near union {
  struct {
    unsigned SEN:1;
    unsigned RSEN:1;
    unsigned PEN:1;
    unsigned RCEN:1;
    unsigned ACKEN:1;
    unsigned ACKDT:1;
    unsigned ACKSTAT:1;
    unsigned GCEN:1;
  };
  struct {
    unsigned :1;
    unsigned ADMSK1:1;
    unsigned ADMSK2:1;
    unsigned ADMSK3:1;
    unsigned ADMSK4:1;
    unsigned ADMSK5:1;
  };
} SSPCON2bits;
extern volatile near unsigned char       SSP1CON1;
extern volatile near union {
  struct {
    unsigned SSPM0:1;
    unsigned SSPM1:1;
    unsigned SSPM2:1;
    unsigned SSPM3:1;
    unsigned CKP:1;
    unsigned SSPEN:1;
    unsigned SSPOV:1;
    unsigned WCOL:1;
  };
  struct {
    unsigned SSPM:4;
  };
} SSP1CON1bits;
extern volatile near unsigned char       SSPCON1;
extern volatile near union {
  struct {
    unsigned SSPM0:1;
    unsigned SSPM1:1;
    unsigned SSPM2:1;
    unsigned SSPM3:1;
    unsigned CKP:1;
    unsigned SSPEN:1;
    unsigned SSPOV:1;
    unsigned WCOL:1;
  };
  struct {
    unsigned SSPM:4;
  };
} SSPCON1bits;
extern volatile near unsigned char       SSP1STAT;
extern volatile near union {
  struct {
    unsigned BF:1;
    unsigned UA:1;
    unsigned R_NOT_W:1;
    unsigned S:1;
    unsigned P:1;
    unsigned D_NOT_A:1;
    unsigned CKE:1;
    unsigned SMP:1;
  };
  struct {
    unsigned :2;
    unsigned R:1;
    unsigned :2;
    unsigned D:1;
  };
  struct {
    unsigned :2;
    unsigned R_W:1;
    unsigned :2;
    unsigned D_A:1;
  };
  struct {
    unsigned :2;
    unsigned NOT_W:1;
    unsigned :2;
    unsigned NOT_A:1;
  };
  struct {
    unsigned :2;
    unsigned NOT_WRITE:1;
    unsigned :2;
    unsigned NOT_ADDRESS:1;
  };
  struct {
    unsigned :2;
    unsigned READ_WRITE:1;
    unsigned :2;
    unsigned DATA_ADDRESS:1;
  };
  struct {
    unsigned :2;
    unsigned I2C_READ:1;
    unsigned I2C_START:1;
    unsigned I2C_STOP:1;
    unsigned I2C_DAT:1;
  };
} SSP1STATbits;
extern volatile near unsigned char       SSPSTAT;
extern volatile near union {
  struct {
    unsigned BF:1;
    unsigned UA:1;
    unsigned R_NOT_W:1;
    unsigned S:1;
    unsigned P:1;
    unsigned D_NOT_A:1;
    unsigned CKE:1;
    unsigned SMP:1;
  };
  struct {
    unsigned :2;
    unsigned R:1;
    unsigned :2;
    unsigned D:1;
  };
  struct {
    unsigned :2;
    unsigned R_W:1;
    unsigned :2;
    unsigned D_A:1;
  };
  struct {
    unsigned :2;
    unsigned NOT_W:1;
    unsigned :2;
    unsigned NOT_A:1;
  };
  struct {
    unsigned :2;
    unsigned NOT_WRITE:1;
    unsigned :2;
    unsigned NOT_ADDRESS:1;
  };
  struct {
    unsigned :2;
    unsigned READ_WRITE:1;
    unsigned :2;
    unsigned DATA_ADDRESS:1;
  };
  struct {
    unsigned :2;
    unsigned I2C_READ:1;
    unsigned I2C_START:1;
    unsigned I2C_STOP:1;
    unsigned I2C_DAT:1;
  };
} SSPSTATbits;
extern volatile near unsigned char       SSP1ADD;
extern volatile near union {
  struct {
    unsigned MSK0:1;
    unsigned MSK1:1;
    unsigned MSK2:1;
    unsigned MSK3:1;
    unsigned MSK4:1;
    unsigned MSK5:1;
    unsigned MSK6:1;
    unsigned MSK7:1;
  };
  struct {
    unsigned SSPADD:8;
  };
} SSP1ADDbits;
extern volatile near unsigned char       SSPADD;
extern volatile near union {
  struct {
    unsigned MSK0:1;
    unsigned MSK1:1;
    unsigned MSK2:1;
    unsigned MSK3:1;
    unsigned MSK4:1;
    unsigned MSK5:1;
    unsigned MSK6:1;
    unsigned MSK7:1;
  };
  struct {
    unsigned SSPADD:8;
  };
} SSPADDbits;
extern volatile near unsigned char       SSP1BUF;
extern volatile near unsigned char       SSPBUF;
extern volatile near unsigned char       T2CON;
extern volatile near union {
  struct {
    unsigned T2CKPS:2;
    unsigned TMR2ON:1;
    unsigned T2OUTPS:4;
  };
  struct {
    unsigned T2CKPS0:1;
    unsigned T2CKPS1:1;
    unsigned :1;
    unsigned T2OUTPS0:1;
    unsigned T2OUTPS1:1;
    unsigned T2OUTPS2:1;
    unsigned T2OUTPS3:1;
  };
} T2CONbits;
extern volatile near unsigned char       PR2;
extern volatile near unsigned char       TMR2;
extern volatile near unsigned char       T1CON;
extern volatile near union {
  struct {
    unsigned TMR1ON:1;
    unsigned RD16:1;
    unsigned NOT_T1SYNC:1;
    unsigned SOSCEN:1;
    unsigned T1CKPS:2;
    unsigned TMR1CS:2;
  };
  struct {
    unsigned :4;
    unsigned T1CKPS0:1;
    unsigned T1CKPS1:1;
    unsigned TMR1CS0:1;
    unsigned TMR1CS1:1;
  };
} T1CONbits;
extern volatile near unsigned char       TMR1L;
extern volatile near unsigned char       TMR1H;
extern volatile near unsigned char       RCON;
extern volatile near union {
  struct {
    unsigned NOT_BOR:1;
    unsigned NOT_POR:1;
    unsigned NOT_PD:1;
    unsigned NOT_TO:1;
    unsigned NOT_RI:1;
    unsigned NOT_CM:1;
    unsigned SBOREN:1;
    unsigned IPEN:1;
  };
  struct {
    unsigned BOR:1;
    unsigned POR:1;
    unsigned PD:1;
    unsigned TO:1;
    unsigned RI:1;
    unsigned CM:1;
  };
} RCONbits;
extern volatile near unsigned char       WDTCON;
extern volatile near union {
  struct {
    unsigned SWDTEN:1;
    unsigned ULPSINK:1;
    unsigned ULPEN:1;
    unsigned :1;
    unsigned SRETEN:1;
    unsigned ULPLVL:1;
    unsigned :1;
    unsigned REGSLP:1;
  };
  struct {
    unsigned SWDTE:1;
  };
} WDTCONbits;
extern volatile near unsigned char       IPR5;
extern volatile near struct {
  unsigned TMR4IP:1;
  unsigned TMR5IP:1;
  unsigned TMR6IP:1;
  unsigned TMR7IP:1;
  unsigned TMR8IP:1;
  unsigned TMR10IP:1;
  unsigned TMR12IP:1;
  unsigned TMR7GIP:1;
} IPR5bits;
extern volatile near unsigned char       OSCCON;
extern volatile near union {
  struct {
    unsigned SCS:2;
    unsigned HFIOFS:1;
    unsigned OSTS:1;
    unsigned IRCF:3;
    unsigned IDLEN:1;
  };
  struct {
    unsigned SCS0:1;
    unsigned SCS1:1;
    unsigned :2;
    unsigned IRCF0:1;
    unsigned IRCF1:1;
    unsigned IRCF2:1;
  };
} OSCCONbits;
extern volatile near unsigned char       SPBRGH1;
extern volatile near unsigned char       T0CON;
extern volatile near union {
  struct {
    unsigned T0PS:3;
    unsigned PSA:1;
    unsigned T0SE:1;
    unsigned T0CS:1;
    unsigned T08BIT:1;
    unsigned TMR0ON:1;
  };
  struct {
    unsigned T0PS0:1;
    unsigned T0PS1:1;
    unsigned T0PS2:1;
  };
} T0CONbits;
extern volatile near unsigned char       TMR0L;
extern volatile near unsigned char       TMR0H;
extern          near unsigned char       STATUS;
extern          near struct {
  unsigned C:1;
  unsigned DC:1;
  unsigned Z:1;
  unsigned OV:1;
  unsigned N:1;
} STATUSbits;
extern          near unsigned            FSR2;
extern          near unsigned char       FSR2L;
extern          near unsigned char       FSR2H;
extern volatile near unsigned char       PLUSW2;
extern volatile near unsigned char       PREINC2;
extern volatile near unsigned char       POSTDEC2;
extern volatile near unsigned char       POSTINC2;
extern          near unsigned char       INDF2;
extern          near unsigned char       BSR;
extern          near unsigned            FSR1;
extern          near unsigned char       FSR1L;
extern          near unsigned char       FSR1H;
extern volatile near unsigned char       PLUSW1;
extern volatile near unsigned char       PREINC1;
extern volatile near unsigned char       POSTDEC1;
extern volatile near unsigned char       POSTINC1;
extern          near unsigned char       INDF1;
extern          near unsigned char       WREG;
extern          near unsigned            FSR0;
extern          near unsigned char       FSR0L;
extern          near unsigned char       FSR0H;
extern volatile near unsigned char       PLUSW0;
extern volatile near unsigned char       PREINC0;
extern volatile near unsigned char       POSTDEC0;
extern volatile near unsigned char       POSTINC0;
extern          near unsigned char       INDF0;
extern volatile near unsigned char       INTCON3;
extern volatile near union {
  struct {
    unsigned INT1IF:1;
    unsigned INT2IF:1;
    unsigned INT3IF:1;
    unsigned INT1IE:1;
    unsigned INT2IE:1;
    unsigned INT3IE:1;
    unsigned INT1IP:1;
    unsigned INT2IP:1;
  };
  struct {
    unsigned INT1F:1;
    unsigned INT2F:1;
    unsigned INT3F:1;
    unsigned INT1E:1;
    unsigned INT2E:1;
    unsigned INT3E:1;
    unsigned INT1P:1;
    unsigned INT2P:1;
  };
} INTCON3bits;
extern volatile near unsigned char       INTCON2;
extern volatile near union {
  struct {
    unsigned RBIP:1;
    unsigned INT3IP:1;
    unsigned TMR0IP:1;
    unsigned INTEDG3:1;
    unsigned INTEDG2:1;
    unsigned INTEDG1:1;
    unsigned INTEDG0:1;
    unsigned NOT_RBPU:1;
  };
  struct {
    unsigned :1;
    unsigned INT3P:1;
    unsigned T0IP:1;
    unsigned :4;
    unsigned RBPU:1;
  };
} INTCON2bits;
extern volatile near unsigned char       INTCON;
extern volatile near union {
  struct {
    unsigned RBIF:1;
    unsigned INT0IF:1;
    unsigned TMR0IF:1;
    unsigned RBIE:1;
    unsigned INT0IE:1;
    unsigned TMR0IE:1;
    unsigned PEIE_GIEL:1;
    unsigned GIE_GIEH:1;
  };
  struct {
    unsigned :1;
    unsigned INT0F:1;
    unsigned T0IF:1;
    unsigned :1;
    unsigned INT0E:1;
    unsigned T0IE:1;
    unsigned PEIE:1;
    unsigned GIE:1;
  };
  struct {
    unsigned :6;
    unsigned GIEL:1;
    unsigned GIEH:1;
  };
} INTCONbits;
extern          near unsigned            PROD;
extern          near unsigned char       PRODL;
extern          near unsigned char       PRODH;
extern volatile near unsigned char       TABLAT;
extern volatile near unsigned short long TBLPTR;
extern volatile near unsigned char       TBLPTRL;
extern volatile near unsigned char       TBLPTRH;
extern volatile near unsigned char       TBLPTRU;
extern volatile near unsigned short long PC;
extern volatile near unsigned char       PCL;
extern volatile near unsigned char       PCLATH;
extern volatile near unsigned char       PCLATU;
extern volatile near unsigned char       STKPTR;
extern volatile near union {
  struct {
    unsigned STKPTR:5;
    unsigned :1;
    unsigned STKUNF:1;
    unsigned STKFUL:1;
  };
  struct {
    unsigned SP0:1;
    unsigned SP1:1;
    unsigned SP2:1;
    unsigned SP3:1;
    unsigned SP4:1;
    unsigned :2;
    unsigned STKOVF:1;
  };
} STKPTRbits;
extern          near unsigned short long TOS;
extern          near unsigned char       TOSL;
extern          near unsigned char       TOSH;
extern          near unsigned char       TOSU;

#pragma varlocate 14 LCDCON
#pragma varlocate 14 LCDCONbits
#pragma varlocate 14 LCDPS
#pragma varlocate 14 LCDPSbits
#pragma varlocate 14 LCDSE0
#pragma varlocate 14 LCDSE0bits
#pragma varlocate 14 LCDSE1
#pragma varlocate 14 LCDSE1bits
#pragma varlocate 14 LCDSE2
#pragma varlocate 14 LCDSE2bits
#pragma varlocate 14 LCDSE3
#pragma varlocate 14 LCDSE3bits
#pragma varlocate 14 LCDSE4
#pragma varlocate 14 LCDSE4bits
#pragma varlocate 14 LCDRL
#pragma varlocate 14 LCDRLbits
#pragma varlocate 14 LCDREF
#pragma varlocate 14 LCDREFbits
#pragma varlocate 14 SSP2CON2
#pragma varlocate 14 SSP2CON2bits
#pragma varlocate 14 SSP2CON1
#pragma varlocate 14 SSP2CON1bits
#pragma varlocate 15 SSP2STAT
#pragma varlocate 15 SSP2STATbits
#pragma varlocate 15 SSP2ADD
#pragma varlocate 15 SSP2ADDbits
#pragma varlocate 15 SSP2BUF
#pragma varlocate 15 T4CON
#pragma varlocate 15 T4CONbits
#pragma varlocate 15 PR4
#pragma varlocate 15 TMR4
#pragma varlocate 15 CCP7CON
#pragma varlocate 15 CCP7CONbits
#pragma varlocate 15 CCPR7
#pragma varlocate 15 CCPR7L
#pragma varlocate 15 CCPR7H
#pragma varlocate 15 CCP6CON
#pragma varlocate 15 CCP6CONbits
#pragma varlocate 15 CCPR6
#pragma varlocate 15 CCPR6L
#pragma varlocate 15 CCPR6H
#pragma varlocate 15 CCP5CON
#pragma varlocate 15 CCP5CONbits
#pragma varlocate 15 CCPR5
#pragma varlocate 15 CCPR5L
#pragma varlocate 15 CCPR5H
#pragma varlocate 15 CCP4CON
#pragma varlocate 15 CCP4CONbits
#pragma varlocate 15 CCPR4
#pragma varlocate 15 CCPR4L
#pragma varlocate 15 CCPR4H
#pragma varlocate 15 T5GCON
#pragma varlocate 15 T5GCONbits
#pragma varlocate 15 T5CON
#pragma varlocate 15 T5CONbits
#pragma varlocate 15 TMR5L
#pragma varlocate 15 TMR5H
#pragma varlocate 15 PMD3
#pragma varlocate 15 PMD3bits
#pragma varlocate 15 PMD2
#pragma varlocate 15 PMD2bits
#pragma varlocate 15 PMD1
#pragma varlocate 15 PMD1bits
#pragma varlocate 15 PMD0
#pragma varlocate 15 PMD0bits
#pragma varlocate 15 PSTR3CON
#pragma varlocate 15 PSTR3CONbits
#pragma varlocate 15 PSTR2CON
#pragma varlocate 15 PSTR2CONbits
#pragma varlocate 15 TXREG2
#pragma varlocate 15 RCREG2
#pragma varlocate 15 SPBRG2
#pragma varlocate 15 SPBRGH2
#pragma varlocate 15 BAUDCON2
#pragma varlocate 15 BAUDCON2bits
#pragma varlocate 15 TXSTA2
#pragma varlocate 15 TXSTA2bits
#pragma varlocate 15 RCSTA2
#pragma varlocate 15 RCSTA2bits
#pragma varlocate 15 ANCON2
#pragma varlocate 15 ANCON2bits
#pragma varlocate 15 ANCON1
#pragma varlocate 15 ANCON1bits
#pragma varlocate 15 ANCON0
#pragma varlocate 15 ANCON0bits
#pragma varlocate 15 ODCON3
#pragma varlocate 15 ODCON3bits
#pragma varlocate 15 ODCON2
#pragma varlocate 15 ODCON2bits
#pragma varlocate 15 ODCON1
#pragma varlocate 15 ODCON1bits
#pragma varlocate 15 REFOCON
#pragma varlocate 15 REFOCONbits
#pragma varlocate 15 CCPTMRS2
#pragma varlocate 15 CCPTMRS2bits
#pragma varlocate 15 CCPTMRS1
#pragma varlocate 15 CCPTMRS1bits
#pragma varlocate 15 CCPTMRS0
#pragma varlocate 15 CCPTMRS0bits
#pragma varlocate 15 CM3CON
#pragma varlocate 15 CM3CONbits
#pragma varlocate 15 CM3CON1
#pragma varlocate 15 CM3CON1bits
#pragma varlocate 15 CM2CON
#pragma varlocate 15 CM2CONbits
#pragma varlocate 15 CM2CON1
#pragma varlocate 15 CM2CON1bits
#pragma varlocate 15 T12CON
#pragma varlocate 15 T12CONbits
#pragma varlocate 15 PR12
#pragma varlocate 15 TMR12
#pragma varlocate 15 T10CON
#pragma varlocate 15 T10CONbits
#pragma varlocate 15 PR10
#pragma varlocate 15 TMR10
#pragma varlocate 15 T8CON
#pragma varlocate 15 T8CONbits
#pragma varlocate 15 PR8
#pragma varlocate 15 TMR8
#pragma varlocate 15 T6CON
#pragma varlocate 15 T6CONbits
#pragma varlocate 15 PR6
#pragma varlocate 15 TMR6
#pragma varlocate 15 T7GCON
#pragma varlocate 15 T7GCONbits
#pragma varlocate 15 T7CON
#pragma varlocate 15 T7CONbits
#pragma varlocate 15 TMR7L
#pragma varlocate 15 TMR7H
#pragma varlocate 15 CCP10CON
#pragma varlocate 15 CCP10CONbits
#pragma varlocate 15 CCPR10
#pragma varlocate 15 CCPR10L
#pragma varlocate 15 CCPR10H
#pragma varlocate 15 CCP9CON
#pragma varlocate 15 CCP9CONbits
#pragma varlocate 15 CCPR9
#pragma varlocate 15 CCPR9L
#pragma varlocate 15 CCPR9H
#pragma varlocate 15 CCP8CON
#pragma varlocate 15 CCP8CONbits
#pragma varlocate 15 CCPR8
#pragma varlocate 15 CCPR8L
#pragma varlocate 15 CCPR8H
#pragma varlocate 15 CCP3CON
#pragma varlocate 15 CCP3CONbits
#pragma varlocate 15 CCPR3
#pragma varlocate 15 CCPR3L
#pragma varlocate 15 CCPR3H
#pragma varlocate 15 ECCP3DEL
#pragma varlocate 15 ECCP3DELbits
#pragma varlocate 15 PWM3CON
#pragma varlocate 15 PWM3CONbits
#pragma varlocate 15 ECCP3AS
#pragma varlocate 15 ECCP3ASbits
#pragma varlocate 15 CCP2CON
#pragma varlocate 15 CCP2CONbits
#pragma varlocate 15 ECCP2CON
#pragma varlocate 15 ECCP2CONbits
#pragma varlocate 15 CCPR2
#pragma varlocate 15 CCPR2L
#pragma varlocate 15 CCPR2H
#pragma varlocate 15 ECCP2DEL
#pragma varlocate 15 ECCP2DELbits
#pragma varlocate 15 PWM2CON
#pragma varlocate 15 PWM2CONbits
#pragma varlocate 15 ECCP2AS
#pragma varlocate 15 ECCP2ASbits
#pragma varlocate 15 PADCFG1
#pragma varlocate 15 PADCFG1bits
#pragma varlocate 15 CM1CON
#pragma varlocate 15 CM1CONbits
#pragma varlocate 15 CM1CON1
#pragma varlocate 15 CM1CON1bits
#pragma varlocate 15 CTMUICON
#pragma varlocate 15 CTMUICONbits
#pragma varlocate 15 CTMUCONL
#pragma varlocate 15 CTMUCONLbits
#pragma varlocate 15 CTMUCONH
#pragma varlocate 15 CTMUCONHbits
#pragma varlocate 15 ALRMVAL
#pragma varlocate 15 ALRMVALL
#pragma varlocate 15 ALRMVALH
#pragma varlocate 15 ALRMRPT
#pragma varlocate 15 ALRMRPTbits
#pragma varlocate 15 ALRMCFG
#pragma varlocate 15 ALRMCFGbits
#pragma varlocate 15 RTCVAL
#pragma varlocate 15 RTCVALL
#pragma varlocate 15 RTCVALH
#pragma varlocate 15 RTCVALHbits
#pragma varlocate 15 RTCCAL
#pragma varlocate 15 RTCCALbits
#pragma varlocate 15 RTCCFG
#pragma varlocate 15 RTCCFGbits

/*-------------------------------------------------------------------------
 * Some useful defines for inline assembly stuff
 *-------------------------------------------------------------------------*/
#define ACCESS 0
#define BANKED 1

/*-------------------------------------------------------------------------
 * Some useful macros for inline assembly stuff
 *-------------------------------------------------------------------------*/
#define Nop()    {_asm nop _endasm}
#define ClrWdt() {_asm clrwdt _endasm}
#define Sleep()  {_asm sleep _endasm}
#define Reset()  {_asm reset _endasm}

#define Rlcf(f,dest,access)  {_asm movlb f rlcf f,dest,access _endasm}
#define Rlncf(f,dest,access) {_asm movlb f rlncf f,dest,access _endasm}
#define Rrcf(f,dest,access)  {_asm movlb f rrcf f,dest,access _endasm}
#define Rrncf(f,dest,access) {_asm movlb f rrncf f,dest,access _endasm}
#define Swapf(f,dest,access) {_asm movlb f swapf f,dest,access _endasm }

/*-------------------------------------------------------------------------
 * A fairly inclusive set of registers to save for interrupts.
 * These are locations which are commonly used by the compiler.
 *-------------------------------------------------------------------------*/
#define INTSAVELOCS TBLPTR, TABLAT, PROD


#endif
