#include "BIN_RealTime_float.h"



void estimate_FR(din spksTime, dout *FR, dout *c, din_coeff Num, bool *finish){
	double bin = 0.1;
	if(*finish == false){
		if((spksTime>=bin*Num)&&(spksTime<=bin*(Num+1))){
			*c = *c +1;
		}
	}else{
			std::cout<<"count:"<<*c<<std::endl;
			*FR = (*c)/bin;
		    *c = 0;
		    *finish = false;
	}
}
