/*
 * UART.h
 *
 * * Created: 1/22/2018 2:30:13 PM
 *  Author: Ahmed Lotfy
 */
#define Baud_rate ((8000000UL/(16*9600UL))-1)
void UART_init();
void UART_Transmit(char data);
char UART_recieve();