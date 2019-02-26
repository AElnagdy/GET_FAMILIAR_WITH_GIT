/*
 * Timer.h
 *
 * * Created: 1/22/2018 2:30:13 PM
 *  Author: Ahmed Lotfy
 */
#include <avr/io.h>
#include "common.h"
#include "mylib.h"
void Init_Timer(void);
void CLR_TIMER(void);
unsigned long Get_time(void);
extern volatile uint16 no_of_overflow;