
#include "project.h"

int main(void)
{


    uint8 count;
    LCD_Start();

    for(;;)
    {
        LCD_ClearDisplay();
        LCD_Position(0,0);
        LCD_PrintString("Count: ");
        count = Status_Reg_Read();
        LCD_PrintDecUint16(count);
        CyDelay(100);
    }
}

/* [] END OF FILE */
