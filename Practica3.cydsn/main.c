/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include "project.h"
#include <stdio.h>
#include "common.h"

#if defined (__GNUC__)
    asm (".global _printf_float");
#endif

uint8 errorStatus = 0u;
CY_ISR(RxIsr)
{
    uint8 rxStatus;         
    uint8 rxData;           
    
    do
    {
        /* Read receiver status register */
        rxStatus = UART_RXSTATUS_REG;

        if((rxStatus & (UART_RX_STS_BREAK      | UART_RX_STS_PAR_ERROR |
                        UART_RX_STS_STOP_ERROR | UART_RX_STS_OVERRUN)) != 0u)
        {
            /* ERROR handling. */
            errorStatus |= rxStatus & ( UART_RX_STS_BREAK      | UART_RX_STS_PAR_ERROR | 
                                        UART_RX_STS_STOP_ERROR | UART_RX_STS_OVERRUN);
        }
        
        if((rxStatus & UART_RX_STS_FIFO_NOTEMPTY) != 0u)
        {
            /* Read data from the RX data register */
            rxData = UART_RXDATA_REG;
            if(errorStatus == 0u)
            {
                /* Send data backward */
                UART_TXDATA_REG = rxData;

                if(rxData == 'd'){
                    Clock_1_SetSource(CYCLK_SRC_SEL_IMO);
                }else if(rxData == 'u'){
                    Clock_1_SetSource(CYCLK_SRC_SEL_PLL);
                }else if(rxData == 'p'){
                    generadorPulsosPWM_Stop();
                    generadorPulsosPWM_Sleep();
                    UART_PutString("Vamos a parar el led");
                }else if(rxData == 'a'){
                    generadorPulsosPWM_Start();   
                }
                Pantalla_Position(1,0);
                Pantalla_PrintString((const char8 *)&rxData);
                
            }
        }
    }while((rxStatus & UART_RX_STS_FIFO_NOTEMPTY) != 0u);

}

int main(void)
{


    #if(INTERRUPT_CODE_ENABLED == ENABLED)
    UART_isr_StartEx(RxIsr);
    #endif /* INTERRUPT_CODE_ENABLED == ENABLED */
        
    CyGlobalIntEnable;      /* Enable global interrupts. */
        
    
    generadorPulsosPWM_Start();
    
    CyGlobalIntEnable; /* Enable global interrupts. */
    
    Pantalla_Start();
    UART_Start();
    Pantalla_ClearDisplay();
    Pantalla_PrintString("Bienvenido");
    
    generadorPulsosPWM_WriteCompare(90);
    
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    for(;;)
    {

    }
}
