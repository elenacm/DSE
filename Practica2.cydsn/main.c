#include "project.h"
#include "display.h"

int main(void)
{
    int contador = 0;
    LCD_Start();
    DisplayWelcome();
    DisplayTitle();

    for(;;)
    {
        DisplayCount(contador);
        contador++;
        
        if(contador>99)
            contador=0;
        
        CyDelay(500);
    }
}