/*
 * Temp_Sensor.c
 *
 * * Created: 1/22/2018 2:30:13 PM
 *  Author: Ahmed Lotfy
 */
#include "Temp_Sensor.h"
uint16 Temp_Read(void)
{
	return (ADC_Read(0));
	
}