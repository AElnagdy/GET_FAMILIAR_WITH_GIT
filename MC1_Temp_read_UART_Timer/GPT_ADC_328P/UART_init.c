/*
 * UART.c
 *
 * * Created: 1/22/2018 2:30:13 PM
 *  Author: Ahmed Lotfy
 */
#include <avr\io.h>
#include "UART_init.h"
void UART_init()
{
	UBRR0L = Baud_rate;
	UBRR0H = Baud_rate >> 8;
    UCSR0B = (1<<RXEN0)|(1<<TXEN0);
	UCSR0C = (1<<UCSZ01)|(1<<UCSZ00);
}
void UART_Transmit(char data)
{
	while(!(UCSR0A & ( 1<<UDRE0)))
	{
	}
	UDR0 = data;
}
char UART_recieve()
{
	while(!(UCSR0A &(1<<RXC0)))
	{
		
	}
	return UDR0;
}