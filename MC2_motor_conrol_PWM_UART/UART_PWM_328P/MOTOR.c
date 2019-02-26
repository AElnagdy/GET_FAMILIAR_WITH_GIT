/*
 * MOTOR.c
 *
 * Created: 1/22/2018 12:49:28 AM
 *  Author: A.lotfy
 */ 
#include "MOTOR.h"
void motor_on(void)
{
 PWM_DUTY_CYCLE(75);	
}
void motor_off(void)
{
 PWM_DUTY_CYCLE(0);	
}