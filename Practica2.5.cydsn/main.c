#include "project.h"


int main()
{
    
    int estado[4] = {0,0,0,0};
    int pos = 0;
    int error = 0;
    
    CyGlobalIntEnable; /* Enable global interrupts. */
    
    int uestado = estado[0]+(estado[1]<<1)+(estado[2]<<2)+(estado[3]<<3);
    
    Paso_sig_Write(uestado);
    LCD_Start();
    for(;;)
    {   
        if (!Siguiente_Read()) {
            pos = (pos+1)%4;
            while(!Siguiente_Read()){}
        } else if (!Marcar_Read()) {
            if (pos != 3) {
                if ((estado[0] == 0 && estado[pos+1] == 0)||(estado[0] == 1 && estado[pos+1] == 1))
                    estado[pos+1] = (estado[pos+1]+1)%2;
            }
                
            //Damos un pulso de reloj
            Reloj_controlado_Write(1);
            Reloj_controlado_Write(0);
            
            //El estado sera la combinacion de tu posicion(granjero) mas la de los tres componentes
            uestado = estado[0]+(estado[1]<<1)+(estado[2]<<2)+(estado[3]<<3);
            Paso_sig_Write(uestado);
            
            estado[0] = 1-estado[0];
            
            //Esperamos a que el usuario le de al boton de marcar para continuar
            while(!Marcar_Read());
        }
        //Comprobamos si el paso escogido es erroneo
        error = Paso_erroneo_Read();
        
        LCD_ClearDisplay();
        LCD_Position(0,0);
        
        //Imprimimos en el LCD por que ha perdido el jugador, segun el codigo de error devuelto
        if (error == 1) {            
		    LCD_PrintString("La gallina te");
            LCD_Position(1,0);
		    LCD_PrintString("dejo sin maiz");
            
            CyDelay(10000);
        } else if (error == 2) {            
		    LCD_PrintString("La gallina ya no");
		    LCD_Position(1,0);
		    LCD_PrintString("te dara problema");
            CyDelay(10000);
        } else if (Paso_actual_Read() != (Ultimo_Paso_Read()+1) && (Paso_actual_Read() != Ultimo_Paso_Read())) {
            LCD_PrintString("Paso incorrecto");
            CyDelay(5000);
        } else if (Paso_actual_Read() == 7U) {
            LCD_PrintString("Tremenda jugada!");
        } else {      
            
    		LCD_PrintString(" M:");
            LCD_PrintDecUint16(1-estado[1]);
            
            LCD_PrintString(" G:");
            LCD_PrintDecUint16(1-estado[2]);
            
            LCD_PrintString(" Z:");
            LCD_PrintDecUint16(1-estado[3]);
            
            LCD_Position(1,0);
    		LCD_PrintString(" M:");
            LCD_PrintDecUint16(estado[1]);
            
            LCD_PrintString(" G:");
            LCD_PrintDecUint16(estado[2]);
            
            LCD_PrintString(" Z:");
            LCD_PrintDecUint16(estado[3]);
            if (pos != 3) {
                if (estado[0] == 0)
                    LCD_Position(0,(pos*4));
                else
                    LCD_Position(1,(pos*4));
                LCD_PrintString("*");
            }
        }        

        CyDelay(100);
    }
}
