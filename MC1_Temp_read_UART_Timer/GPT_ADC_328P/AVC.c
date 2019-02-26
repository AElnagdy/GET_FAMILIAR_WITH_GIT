/*
*AVC.C
*
*created: 7/1/2018 1:00 PM
*Author: Ahmed lotfy
*/
#include "AVC.h"
void ADC_Init()
{
	ADMUX = 0b11000000;
	ADCSRA = 0b10000111;
}
int ADC_Read( char channel_num)
{
	channel_num &=0x07; //must be from 0 --> 7
	
	ADMUX = ADMUX | channel_num; //choose the correct channel by setting the channel number in MUX4:0 bits
	
	ADCSRA |= (1<<ADSC); //start conversion write ’1? to ADSC
	
	while((ADCSRA & (1<<ADIF)) == 0); // wait for conversion to complete ADIF becomes '1'
	
	ADCSRA |=(1<<ADIF); //clear ADIF by write'1' to it :)
	
	return (ADC/9); //return the data register
}