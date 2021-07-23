#include "ISI_MUL_FIX_v4.h"

void estimate_ISI(int inputs[Channel], int rem[Channel], int output[Channel]){

	 din spks[Channel];
     din update[Channel];
     dout ISI[Channel];
     din2 spksPre;
     din2 spksTime;
     dout ISIPre;
     int a;
	 int b;
     //Get the input values
     estimate_ISI: for(int j = 0;j<Channel;j++){
    	 spks[j] = (din)(inputs[j] & 0x00000001);
    	 update[j] = (din)((inputs[j] & 0x00000002)>>1);
    	 spksTime = (din2)((inputs[j] & 0xFFFFFFFb)>>2);
    	 if (update[j] == 1){
    		 if(spks[j] == 1){
    			 spksPre = (din2)(rem[j] & 0x000FFFFF);
    			 ISIPre = (dout)((rem[j] & 0xFFF00000) >> 20);
    			 ISI[j] = spksTime - spksPre;
    			 if (ISIPre - ISI[j] >= (dout)(ISI[j]*ISIPre>>5)){
    				 ISI[j] = (dout)ISIPre - (dout)(ISIPre >> 5) - (dout)(ISI[j]>>5);
    			 }
    			 a = 0x000FFFFF & (int)(spksTime);
    			 b = 0xFFF00000 & (int)(ISI[j].to_int() << 20);
    			 rem[j] = b | a;
    		 }
    	 }else{
    	     	 ISI[j] = 1;
    	 }
    	 output[j] = ISI[j].to_int();
     }
}
