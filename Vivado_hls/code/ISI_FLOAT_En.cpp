#include "ISI_FLOAT_En.h"

void estimate_ISI_encode(int spks[Channel], int spksTime, int update[Channel],
		int ISIPre[Channel], int spksPre[Channel], int output[Channel]){

     int ISI[Channel];
     //Get the input values
     estimate_ISI:for(int j = 0;j<Channel;j++){
    	 if (update[j] == 1){
    		 if(spks[j] == 1){
    			 ISI[j] = spksTime - spksPre[j];
				 if (ISIPre[j]  - ISI[j] >=  (0.03125*ISI[j]*ISIPre[j])){
    				 ISI[j] = ISIPre[j]*(1-0.03125) - ISI[j]*0.03125;
    			 }
    			 output[j] = reduce_range(ISI[j]);
    			 ISIPre[j] = ISI[j];
    			 spksPre[j] = spksTime;
    		 }
    	 }else{
    		     output[j] = 15;
    	 }
     }

}


int reduce_range(int ISI){
	int ISI_q;
	if(ISI < 10 && ISI>=0){
		ISI_q = 13;
	}else if(10 <= ISI && ISI<=100){
		ISI_q = ISI/8;
	}else{
		ISI_q = 14;
	}
	return ISI_q;
}
