#include "project.h"

uint8 intep;
int cont_int = 0;
int flag_5hz = 1;
int flag_05hz = 0;

void toggle_LED1(){
    LED1_Write(LED1_Read() ^ 1U);   
}

void toggle_LED2(){
    LED2_Write(LED2_Read() ^ 1U);   
}

CY_ISR(isr_1_Interrupt){
        intep=1;
}

int main(void)
{
    isr_1_Start();
    isr_1_SetVector(&isr_1_Interrupt);
    
    PWM_Start();
    
    CyGlobalIntEnable;
    
    intep=0;
    
    for(;;)
    {
        if(intep==1 && flag_5hz==1){
            toggle_LED2();
            intep=0;
        }
        else if(intep == 1 && flag_05hz ==1){
            cont_int++;
            if(cont_int == 5){
                toggle_LED2();
                cont_int=0;
            }
            intep=0;
        }
        
        if(!Boton_Read()){
            flag_05hz = 1;
            flag_5hz = 0;
        }
        else{
            flag_05hz = 0;
            flag_5hz = 1;
        }
    }
}

