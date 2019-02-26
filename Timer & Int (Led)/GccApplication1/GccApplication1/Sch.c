/*
 * Sch.c
 *
 * Created: 1/19/2019 10:54:54 PM
 *  Author: Ahmed Elnagdy
 */ 
//PreProcessor's
#include "Sch.h"
#include "TASKS.h"

//Global Var
 
 void* Tasks_Arr[NO_TASKS]()= { &TASK_1,&TASK_2,&TASK_3 };

void Sch_Start(void)
{
	int Sch_u8TaskScroller;
	
	while(1)
	{
		
		for(Sch_u8TaskScroller=0;Sch_u8TaskScroller<NO_TASKS;Sch_u8TaskScroller++)	
		{
			Tasks_Arr[Sch_u8TaskScroller]();
			
		}
	}
}
