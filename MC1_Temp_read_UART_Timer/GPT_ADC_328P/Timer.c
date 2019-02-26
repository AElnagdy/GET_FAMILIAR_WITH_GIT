/*
 * Timer.c
 *
 * * Created: 1/22/2018 2:30:13 PM
 *  Author: Ahmed Lotfy
 */
#include <avr/io.h>
#include <avr/interrupt.h>
#include "Timer.h"
volatile uint16 no_of_overflow=0;
void Init_Timer(void)
{
	CLR_BIT(TCCR0A,WGM00);
	CLR_BIT(TCCR0A,WGM01);
	CLR_BIT(TCCR0A,COM0A1);
	CLR_BIT(TCCR0A,COM0A0);
	CLR_BIT(TCCR0B,WGM02);
	CLR_BIT(TCCR0B,CS02); //timer clock 8MHZ/64=125KHZ
	SET_BIT(TCCR0B,CS01);
	SET_BIT(TCCR0B,CS00);
	//OCR0=125;
	SET_BIT(TIMSK0,TOIE0);
    TCNT0=0;	
}
void CLR_TIMER(void)
{
	TCNT0=0;
	no_of_overflow=0;
}
unsigned long Get_time(void)
{
 return((no_of_overflow*2)+(TCNT0*0.008));	//time for over flow=2.048ms
}

ISR(TIMER0_OVF_vect)
{
 no_of_overflow++;
}