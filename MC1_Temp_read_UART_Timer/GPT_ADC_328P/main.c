/*
 * Micro_controller_1 sense temperature degree and send message to Micro_controller_2 to control motor
 *
 * Created: 1/26/2018 7:49:53 AM
 * Author : Ahmed lotfy
 */ 

#define F_CPU 8000000UL
#include <avr/io.h>
#include <avr/interrupt.h>
#include "mylib.h"
#include "common.h"
#include "DIO.h"
#include "Timer.h"
#include "AVC.h"
#include "UART_init.h"
#include "Temp_Sensor.h"
#include "LED.h"
extern volatile uint16 no_of_overflow;

int main(void)
{
	sei();
	DIO_Init();
	Init_Timer();
	ADC_Init();
	UART_init();
	unsigned long Time;
	uint16 temp;
	/* Replace with your application code */
	while (1)
	{
		Time=Get_time();
		if(Time>1000 )
		{
			temp=Temp_Read();
			if(temp>19)
			{
		     UART_Transmit(1);
			 LED_ON();
			}
			else if(temp<=19)
			{
			 UART_Transmit(0);
			 LED_OFF();
			}
			CLR_TIMER();
		}
	}
}

