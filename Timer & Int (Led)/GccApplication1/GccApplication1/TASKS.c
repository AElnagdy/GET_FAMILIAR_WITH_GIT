/*
 * TASKS.c
 *
 * Created: 1/19/2019 11:29:52 PM
 *  Author: Ahmed Elnagdy
 */ 

#include "TASKS.h"


void TASK_1(void)
{
	//Switch Task === S_B
	// check on S_B state on or off then rais flag.
	
	unsigned char Button=0; //Button intial state
	
	Button= Get_Button(S_B);
	if(Button==1)
	{
		 Button=Get_Button(H_B);
		 if(Button==1)
		 {
			 led_apply(left_led,ON);
			 led_apply(right_led,ON);
			 led_apply(nutral_led,OFF);
		 }
		 else
		 {
			Button=Get_Button(L_B);
			if(Button==0)
			{
				led_apply(left_led,OFF);
			}
			else
			{
				led_apply(left_led,ON);
			}
		
			Button=Get_Button(R_B);
			if(Button==0)
			{
				led_apply(right_led,OFF);
			}
			else
			{
				led_apply(right_led,ON);
			}
		
		 }
	}
	else
	{
		led_apply(right_led,OFF);
		led_apply(left_led,OFF);
		led_apply(nutral_led,OFF);
		
	}
}
void TASK_2(void)
{

	
	
}
void TASK_3(void)
{
	//tasks runtime toggle.s
	
}