#include <p18cxxx.h>
#include <usart.h>

/*********************************************************************
*    Function Name:  Busy3USART                                       *
*    Return Value:   char: transmit successful status                *
*    Parameters:     none                                            *
*    Description:    This routine checks to see if a byte can be     *
*                    written to the USART by checking the TRMT bit   *
*********************************************************************/
#if defined (EAUSART_V12)
#undef Busy3USART
char Busy3USART(void)
{
  if(!TXSTA3bits.TRMT)  // Is the transmit shift register empty
    return 1;          // No, return FALSE
    return 0;            // Return TRUE
}

#endif
