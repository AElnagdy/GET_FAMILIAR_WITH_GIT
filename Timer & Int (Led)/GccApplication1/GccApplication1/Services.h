/*
 * Services.h
 *
 * Created: 1/20/2019 12:32:09 AM
 *  Author: Ahmed Elnagdy
 */ 


#ifndef SERVICES_H_
#define SERVICES_H_

typedef enum Tstate
{
	ON,
	OFF
};
unsigned char Get_Button(tButton Button);
void led_apply(tLed LED,Tstate state);



#endif /* SERVICES_H_ */