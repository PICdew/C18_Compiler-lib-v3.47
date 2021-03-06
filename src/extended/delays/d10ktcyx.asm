#include "p18cxxx.inc"

;/********************************************************************
;*   Function Name: Delay10KTCYx                                     *
;*   Return Value:  void                                             *
;*   Parameters:    unit:                                            *
;*   Description:   This routine delays for multiples of 10000       *
;*                  instruction cycles that is specified in unit.    *
;*   Special Note:  This routine provides multiples of 10000 Tcy     *
;*                  A value of 1 to 255 to provides 10000 to         *
;*                  2550000 Tcy delay.  A value of 0 will            *
;*                  provide a delay of 2560000 Tcy.                  *
;********************************************************************/
    EXTERN   DelayCounter1, DelayCounter2

D10KTCYXCODE CODE

Delay10KTCYx FUSTART
    movlw   0xff
    stkadj    1                    ; added STKADJ PSEUDO-INSTRUCTION for stack analysis
    movf    PLUSW1,0
    movlb   DelayCounter1
    movwf   DelayCounter1
    movlw   0xee
    bra     D10K_1

D10Kx
    movlw   0xf2
    nop
D10K_1 
    movwf   INDF1
    decfsz  INDF1,1
    goto    $-2

    movlw   0x0c
    movlb   DelayCounter2
    movwf   DelayCounter2
D10Kl
    clrf    INDF1
    decfsz  INDF1,1
    goto    $-2

    decfsz  DelayCounter2,1
    goto    D10Kl

    movlb   DelayCounter1
    decfsz  DelayCounter1,1
    goto    D10Kx
    FUEND
    return

    GLOBAL  Delay10KTCYx
    END
    
