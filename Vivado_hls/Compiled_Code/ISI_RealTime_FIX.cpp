#include "ISI_Realtime_FIX.h"


void estimate_ISI(din spksTime,din *spksPre,dout *ISI,dout *ISIpre,coeff penalty, bool yes){
	if(yes==false){
		*ISI = spksTime;
	}else{
		*ISI = spksTime-*spksPre;
		if(*ISIpre-*ISI > (ap_fixed<16,3>)(*ISIpre**ISI<<5)){
		    *ISI = *ISIpre - (ap_fixed<16,3>)(*ISI >> 5);
		}
	}
	*spksPre = spksTime;
	*ISIpre = *ISI;
}

