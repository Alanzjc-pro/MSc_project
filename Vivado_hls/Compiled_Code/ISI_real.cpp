#include "ISI_real.h"


void estimate_ISI(din spksTime,din *spksPre,dout *ISI,dout *ISIpre,coeff penalty, int num){
	if(num==0){
		*ISI = spksTime;
	}else{
		*ISI = spksTime-*spksPre;
		if(*ISIpre-*ISI > penalty**ISIpre**ISI){
		    *ISI = *ISIpre - *ISI*0.03125;
		}
	}
	*spksPre = spksTime;
	*ISIpre = *ISI;
}

