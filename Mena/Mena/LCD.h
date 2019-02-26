/*
 * LCD.h
 *
 * Created: 21/01/2018 07:53:52 م
 *  Author: M.D
 */ 


#ifndef LCD_H_
#define LCD_H_





#endif /* LCD_H_ */


#include <avr/io.h>
#include "std_types.h"
#include "common.h"
#define RS PD3
#define RW PD5
#define E PD6
#define control_port PORTD
#define control_dir DDRD
#define data_port1 PORTB
#define data_dir1 DDRB
#define data_port2 PORTC
#define data_dir2 DDRC
#define cursor_off 0x0c
#define clear_lcd 0x01
#define SET_MODE 0x38


void LCD_send_comand(char comand);
void LCD_Init();
void LCD_Disply(char Data);
void LCD_Display_String(char arr[]);