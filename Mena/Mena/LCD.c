/*
 * LCD.c
 *
 * Created: 21/01/2018 07:56:56 م
 *  Author: M.D
 */ 

#include "LCD.h"
#include <avr/io.h>
#include "std_types.h"
#include "Common_Macros.h"
#include <util/delay.h>


void LCD_send_comand(char comand)
{
	
	
	CLEAR_BIT(control_port,RS);     // RS
	CLEAR_BIT(control_port,RW);		// RW
	_delay_ms(1);					// Delay
	SET_BIT(control_port,E);		// Enable
	_delay_ms(1);                   // Delay
	data_port1=(comand);			// Half command
	data_port2=(comand>>4);			// Half command
	_delay_ms(1);
	CLEAR_BIT(control_port,E);		// Disable
	_delay_ms(1);					// Delay
	/*
	CLEAR_BIT(control_port,RS);     // RS
	CLEAR_BIT(control_port,RW);		// RW
	_delay_ms(1);					// Delay
	SET_BIT(control_port,E);		// Enable
	_delay_ms(1);                   // Delay
	data_port=comand;				//second half of comand
	_delay_ms(1);
	CLEAR_BIT(control_port,E);		// Disable
	_delay_ms(1);					// Delay

*/
}
	
void LCD_Init()
{
	data_dir1=0xff;
	data_dir2|=0b00001100;
	control_dir|= 0b01101000;
	
	SET_BIT(control_port,E);
	SET_BIT(control_port,RS);
	SET_BIT(control_port,RW);
	LCD_send_comand(SET_MODE);
	LCD_send_comand(clear_lcd);
	LCD_send_comand(cursor_off);
}

void LCD_Disply(char Data)
{
	
	
	SET_BIT(control_port,RS);			// RS
	CLEAR_BIT(control_port,RW);			// RW
	_delay_ms(1);						// delay
	SET_BIT(control_port,E);			// Enable
	_delay_ms(1);						// delay
	data_port1=Data;				// Half command
	data_port2=(Data>>4);				// Half command
	
	_delay_ms(1);						//delay 
	CLEAR_BIT(control_port,E);			// Disable
	_delay_ms(1);						// Delay
	
/*	
	
	SET_BIT(control_port,RS);			// RS
	CLEAR_BIT(control_port,RW);			// RW
	_delay_ms(1);						// delay
	SET_BIT(control_port,E);			// Enable
	_delay_ms(1);						// delay
	data_port=Data;					// Second Half command
	_delay_ms(1);						//delay
	CLEAR_BIT(control_port,E);			// Disable
	_delay_ms(1);						// Delay
	*/
}

void LCD_Display_String(char arr[])
{
	char a=0;
	while (arr[a]!='\0')
	{
		LCD_Disply(arr[a]);
		a ++;
	}
}
	
	
	


