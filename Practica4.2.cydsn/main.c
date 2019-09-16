#include <math.h>
#include <stdlib.h>
#include "project.h"
#include <stdio.h>
#include "common.h"

#if defined (__GNUC__)
    asm (".global _printf_float");
#endif


#define PI_DOS (3.14159 * 2)

#define MUESTRAS 4000

#define SENO 0
#define CUADRADA 1
#define SIERRA 2
#define TRIANGULAR 3

char op;
uint8 signal [MUESTRAS];
uint8 type = SENO;
uint8 amp = 127;
uint16 i = 0;
uint8 j = 0;

float incrementarFase = PI_DOS/MUESTRAS;

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

                switch(rxData)
                {
                    case 'a':
                    case 'A':
                        amp += 5;
                        UART_PutString("Amplitud aumentada\r\n");
                        Pantalla_ClearDisplay();
                        Pantalla_Position(0u, 0u);                            
                        Pantalla_PrintString("Amplitud aumentada");
                        
                        break;
                    case 'z':
                    case 'Z':
                        amp -= 5;
                        UART_PutString("Amplitud decrementada\r\n");
                        Pantalla_ClearDisplay();
                        Pantalla_Position(0u, 0u);                            
                        Pantalla_PrintString("Amplitud decrementada");                    
                        break;
                    case 's':
                    case 'S':
                        if ( ((Clock_1_GetDividerRegister()+1)/2) >=1 )
                        Clock_1_SetDividerValue((Clock_1_GetDividerRegister()+1)/2);
                        UART_PutString("Frecuencia aumentada\r\n");
                        Pantalla_ClearDisplay();
                        Pantalla_Position(0u, 0u);                            
                        Pantalla_PrintString("Frecuencia aumentada");
                        
                        break;
                    case 'x':
                    case 'X':                        
                        Clock_1_SetDividerValue((Clock_1_GetDividerRegister()+1)*2);                        
                        UART_PutString("Frecuencia decrementada\r\n");
                        Pantalla_ClearDisplay();
                        Pantalla_Position(0u, 0u);                            
                        Pantalla_PrintString("Frecuencia decrementada");
                        
                        break;
                    case 't':
                    case 'T':
                        type = (type+1)%4;
                        UART_PutString("Tipo de onda cambiado\r\n");
                        Pantalla_ClearDisplay();
                        Pantalla_Position(0u, 0u);                            
                        Pantalla_PrintString("Tipo de onda cambiado");
                        break;
                    default:
                        UART_PutString("Comando desconocido\r\n");
                        
                        Pantalla_ClearDisplay();
                        Pantalla_Position(0u, 0u);                            
                        Pantalla_PrintString("Comando desconocido");
                        break;
                }
                
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
    
    generadorOnda_Start();
    
    Pantalla_Start();
    UART_Start();
    Pantalla_ClearDisplay();
    Pantalla_PrintString("Bienvenido!!!");

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    for(;;)
    {
                switch (type) {
                    case SENO:
                        for (i=0; i < MUESTRAS; i++) {
                            signal[i] = amp*sin(incrementarFase*i)+amp;
                        }
                        break;
                    case CUADRADA:
                        for (i=0; i < MUESTRAS; i++) {
                            signal[i] = (amp*sin(incrementarFase*i)>=0)?amp*2:0;
                        }
                        break;                        
                    case SIERRA:
                        for (i=0; i < MUESTRAS; i++) {                    
                            signal[i] = 2*amp*(float)(i / MUESTRAS);
                        }
                        break;                        
                    case TRIANGULAR:
                        for (i=0; i < MUESTRAS; i++) {
                            signal[i] = 2*amp - abs(i % (2*2*amp) - 2*amp);
                        }
                        break;                        
                }
                generadorOnda_Stop();
                generadorOnda_Wave1Setup(signal, 4000);
                generadorOnda_Start();
                CyDelay(1000);
    }
}



