/*
 * LED.c
 *
 * Created: 1/26/2017 12:46:01 PM
 *  Author: Ahmed Lotfy
 */ 
#include "LED.h"
void LED_ON(void)
{
	SET_BIT(PORTD,PORTD2); 
}
void LED_OFF(void)
{
	CLR_BIT(PORTD,PORTD2); 
}
void LED_TOGGLE(void)
{
	TOOGLE_BIT(PORTD,PORTD2);
}