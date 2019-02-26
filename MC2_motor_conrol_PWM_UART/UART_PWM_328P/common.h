/*
 * common.h
 *
 * * Created: 1/22/2018 2:30:13 PM
 *  Author: Ahmed Lotfy
 */


#ifndef COMMON_H_
#define COMMON_H_

#define SET_BIT(reg,bitnum) reg|=(1<<bitnum)
#define CLR_BIT(reg,bitnum) reg&=~(1<<bitnum)
#define GET_BIT(reg,bitnum) (reg&(1<<bitnum))>>bitnum
#define TOOGLE_BIT(reg,bitnum) reg^=(1<<bitnum)



#endif /* COMMON_H_ */