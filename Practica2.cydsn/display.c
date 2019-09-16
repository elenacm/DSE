#include "project.h"
#include "display.h"

void DisplayWelcome(){
	LCD_ClearDisplay();
	LCD_Position(0, 0);
	LCD_PrintString("PSoC Mola");

}

void DisplayTitle(){
    LCD_ClearDisplay();
	LCD_Position(0,0);
	LCD_PrintString("Contador: ");
	
}

void DisplayCount(int count){
	LCD_Position(1,2);
	LCD_PrintNumber((uint16)count);
	LCD_PrintString(" ");

}