/*
 * Services.c
 *
 * Created: 1/20/2019 12:32:28 AM
 *  Author: Ahmed Elnagdy
 */ 
#include "Services.h"
#include "Wrapper.h"

unsigned char Get_Button(tButton Button)
{
	unsigned char retVal=0;
	switch (Button)
	{
		case H_B:
			retVal = DIO_ReadPin(HAZARD_BUTTON_PIN);
			break;
		case L_B:
			retVal = DIO_ReadPin(LEFT_BUTTON_PIN);
			break;
		case R_B:
			retVal = DIO_ReadPin(RIGHT_BUTTON_PIN);
			break;
		default:
			break;
	}
	return retVal;
}
void led_apply(tLed LED,Tstate state)
{
	switch (LED)
	{
		case left_led:
			 DIO_WritePin(LEFT_LED_PIN);
		break;
		case right_led:
		   DIO_WritePin(RIGHT_LED_PIN);
		break;
		case nutral_led:
			DIO_WritePin(NUT_LED_PIN);
		break;
		default:
		break;
		}
	
}
