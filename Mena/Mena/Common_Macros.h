#ifndef COMMOMN_MACROS_H_INCLUDED
#define COMMOMN_MACROS_H_INCLUDED


#define SET_BIT(REG,Bit_no) REG=REG|((1)<<Bit_no)
#define CLEAR_BIT(REG,Bit_no) REG=REG&(~((1)<<Bit_no))
#define TOGGLE_BIT(REG,Bit_no) REG=REG^((1)<<Bit_no)
#define BIT_IS_SET(REG,Bit_no) (REG &((1)<<Bit_n)
#define BIT_IS_CLEAR(REG,Bit_no) !(REG&((1)<<Bit_no))




#endif // COMMOMN_MACROS_H_INCLUDED
