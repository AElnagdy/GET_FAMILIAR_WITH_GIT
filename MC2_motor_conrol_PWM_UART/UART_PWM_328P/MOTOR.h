/*
 * MOTOR.h
 *
 * Created: 1/22/2018 12:49:28 AM
 *  Author: A.lotfy
 */
#include <avr/io.h>
#include "mylib.h"
#include "common.h"
#include "DIO.h"
#include "UART_init.h"
#include "PWM.h" 
void motor_on(void);
void motor_off(void);