/*
 * Mena.c
 *
 * Created: 21/01/2018 07:53:25 م
 * Author : M.D
 */ 

#define  F_CPU 8000000UL
#include <avr/io.h>
#include "LCD.h"
#include "std_types.h"
#include "Common_Macros.h"
#include <util/delay.h>

int main(void)
{
	 LCD_Init();
	 
	
    /* Replace with your application code */
    while (1) 
    {
		
		  LCD_send_comand(clear_lcd);
		   _delay_ms(10);
		  LCD_Display_String("Mostafa ");
		  LCD_Display_String("Dawod ");
		  _delay_ms(500);
		
    }
}

