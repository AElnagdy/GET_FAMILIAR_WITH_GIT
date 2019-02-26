/*
 * DIO.h
 *
 * * Created: 1/22/2018 2:30:13 PM
 *  Author: Ahmed Lotfy
 */

#include <avr/io.h>
#include "mylib.h"
#include "common.h"

/*void DIO_WritePortVal(char Port_Num,char Val);
void DIO_WritePinVal(char Pin_Num, char Val);
void DIO_ReadPortVal(char Port_Num,char *Val);
void DIO_ReadPinVal(char Pin_Num,char *Val);*/
void DIO_Init();

/**********************Configuration****************/
//#define DDRA_INIT    0b00000000
#define DDRB_INIT    0b11111111
#define DDRC_INIT    0b1111111
#define DDRD_INIT    0b1111110

//#define PORTA_INIT   0b00000000
#define PORTB_INIT   0b00000000
#define PORTC_INIT   0b00000000
#define PORTD_INIT   0b00000000

#define LONG_PRESS

