/*
 * Micro_controller_2 control motor based on signal received from Micro_controller_1
 *
 * * Created: 1/22/2018 2:30:13 PM
 *  Author: Ahmed Lotfy
 */

#define F_CPU 8000000UL
#include <avr/io.h>
#include <avr/interrupt.h>
#include "mylib.h"
#include "common.h"
#include "DIO.h"
#include "UART_init.h"
#include "PWM.h"
#include "MOTOR.h"
int main(void)
{
	DIO_Init();
	UART_init();
	PWM_init();
	char motor_status;
    /* Replace with your application code */
    while (1) 
    {
		motor_status=UART_recieve();
		if(motor_status==1)
		{
		 motor_on();
		}
		if(motor_status==0)
		{
			motor_off();
		}
    }
}

