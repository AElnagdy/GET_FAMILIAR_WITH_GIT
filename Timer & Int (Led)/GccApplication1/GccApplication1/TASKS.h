/*
 * TASKS.h
 *
 * Created: 1/19/2019 11:30:13 PM
 *  Author: Ahmed Elnagdy
 */ 


#ifndef TASKS_H_
#define TASKS_H_
#include "Services.h"
typedef enum tButton
{
	S_B=0,
	H_B=1,
	L_B=2,
	R_B=3,
	NO_B
};
typedef enum tLed
{
	left_led=0,
	right_led=1,
	nutral_led=2,
	NO_L
};
void TASK_1(void);
void TASK_2(void);
void TASK_3(void);



#endif /* TASKS_H_ */