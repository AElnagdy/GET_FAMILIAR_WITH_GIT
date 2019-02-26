/*
 * PWM.c
 *
 * Created: 1/22/2018 12:49:28 AM
 *  Author: A.lotfy
 */ 
#include "PWM.h"
#include "common.h"
#include <avr/io.h>
void PWM_init(void)
{
	SET_BIT(TCCR0A,COM0A1);
	CLR_BIT(TCCR0A,COM0A0);
	SET_BIT(TCCR0A,WGM00);
	SET_BIT(TCCR0A,WGM01);
	CLR_BIT(TCCR0B,WGM02);
	CLR_BIT(TCCR0B,CS00);
	SET_BIT(TCCR0B,CS01);
	CLR_BIT(TCCR0B,CS02);
	OCR0A=0;
	//TCNT0=0;
}
void PWM_DUTY_CYCLE(char x)
{
 OCR0A=x*255/100;	
}