; $Id: schrpgm.asm,v 1.3 2009/02/17 08:16:03 guptan Exp $

#include "P18CXXX.INC"
#include "P18MACRO.INC"

; @name strchrpgm
;``The {\bf strchrpgm} function locates the first occurence of {\bf c} [...]
;in the string pointed to by {\bf s}. The terminating null character is
;considered to be part of the string.''
; * The MPLAB-C18 version of the {\bf strchrpgm} function differs from the ANSI
;specified function in that {\bf c} is defined as an {\bf unsigned char}
;parameter rather than an {\bf int} parameter.
;Stack usage: 3 bytes. Re-entrant.
;@param s pointer to string to search
;@param c character to search for
;@return ``The {\bf strchrpgm} function returns a pointer to the located character,
;or a null pointer if the character does not occur in the string.''
;
;rom char *strchrpgm (const rom char *s, unsigned char c);

extern __RETVAL0

STRING CODE
strchrpgm   FUSTART
  global strchrpgm

#ifdef __SMALL__
 messg "strchrpgm - SMALL"

; Assumes TBLPTRU = 0

  ; Load TBLPTR with the 's' pointer
          Stk2CpyToReg -2,TBLPTRL

jLoop:

  ; get 'c'
          movlw     -3
          stkadj    1                    ; added STKADJ PSEUDO-INSTRUCTION for stack analysis
          movf      PLUSW1, W, ACCESS

  ; Compare with character in 's'
          tblrd     *                    ; read

          subwf     TABLAT, W, ACCESS
          bz        jMatch               ; match

  ; Test for '\0'
          tblrd     *+                  ; read & increment
          tstfsz    TABLAT,ACCESS
          bra       jLoop

  ; No match - Load NULL to PROD
          clrf      PRODL, ACCESS
          clrf      PRODH, ACCESS
          bra       jEnd

jMatch
  ; Found match - Load PROD with current value of TBLPTR which points to
  ; match character.

	  movff     TBLPTRL, PRODL
	  movff     TBLPTRH, PRODH

jEnd

          FUEND
          return

#else
#ifdef __LARGE__
 messg "strchrpgm - LARGE"


  ; Load TBLPTR with the 's' pointer
          Stk3CpyToReg -3,TBLPTRL

jLoop:

  ; get 'c'
          movlw     -4
          stkadj    1                    ; added STKADJ PSEUDO-INSTRUCTION for stack analysis
          movf      PLUSW1, W, ACCESS

  ; Compare with character in 's'
          tblrd     *                    ; read

          subwf     TABLAT, W, ACCESS
          bz        jMatch               ; match

  ; Test for '\0'
          tblrd     *+                  ; read & increment
          tstfsz    TABLAT,ACCESS
          bra       jLoop

  ; No match - Load NULL to 's'
          movlw     -3
          stkadj    1                    ; added STKADJ PSEUDO-INSTRUCTION for stack analysis
          clrf      PLUSW1,ACCESS
          movlw     -2
          stkadj    1                    ; added STKADJ PSEUDO-INSTRUCTION for stack analysis
          clrf      PLUSW1,ACCESS
          movlw     -1
          stkadj    1                    ; added STKADJ PSEUDO-INSTRUCTION for stack analysis
          clrf      PLUSW1,ACCESS
          bra       jEnd

jMatch
  ; Found match - Load 's' with current value of TBLPTR which points to
  ; match character.

          Stk3CpyFromReg TBLPTRL,-3

jEnd

  ; Set __RETVAL0 to point to 's' for return
          Stk3CpyToReg -3,__RETVAL0

          FUEND
          return

#else
 error "No Model Specified"
#endif
#endif
  end

