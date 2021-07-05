#include "BIN_RealTime_fix.h"



void estimate_FR(din spksTime, dout *FR, din_t *c, din_coeff Num, bool *finish){
	ap_ufixed<16,0> bin = 0.1;
	if(*finish == false){
		if((spksTime>=bin*Num)&&(spksTime<=bin*(Num+1))){
			*c = *c +1;
		}
	}else{
			//std::cout<<"count:"<<*c<<std::endl;
			*FR = (din_t)(*c<<3)+ (din_t)(*c<<1);
		    *c = 0;
		    *finish = false;
	}
}
