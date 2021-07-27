#include "ISI_MUL_FIX_v4.h"

void estimate_ISI(int inputs[Channel], int rem[Channel], int output[subChannel]){

	 din spks[Channel];
     din update[Channel];
     dout ISI[Channel];
     din2 spksPre;
     din2 spksTime;
     dout ISIPre;
     int a,b,c,d,e;
	 dout2 ISI_n ;
	 dout2 ISIPre_n ;
     //Get the input values
     estimate_ISI:for(int j = 0;j<Channel;j++){
    	 spks[j] = (din)(inputs[j] & 0x00000001);
    	 update[j] = (din)((inputs[j] & 0x00000002)>>1);
    	 if (update[j] == 1){
    		 if(spks[j] == 1){
    			 spksPre = (din2)(rem[j] & 0x000FFFFF);
    	    	 spksTime = (din2)((inputs[j] & 0xFFFFFFFb)>>2);
    			 ISIPre = (dout)((rem[j] & 0xFFF00000) >> 20);
    			 ISI[j] = spksTime- spksPre;
    			 ISI_n = (dout2) (ISI[j] >> 4);
    			 ISIPre_n = (dout2) (ISIPre >> 4);
				 if (ISIPre_n  - ISI_n >= (dout2)((ISI_n*ISIPre_n>>5)<<4)){
    				 ISI[j] = (dout)ISIPre - (dout)(ISIPre >> 5) - (dout)(ISI[j]>>5);
    			 }
    			 a = 0x000FFFFF & (int)(spksTime);
    			 b = 0xFFF00000 & (int)(ISI[j].to_int() << 20);
    			 rem[j] = b | a;
    		 }
    	 }else{
    	     	 ISI[j] = 1000;
    	 }
     }

     Pack_output: for(int i = 0;i< subChannel;i++){
    	 c = 0x000003FF & (int)(ISI[3*i].to_int());
    	 d = 0x000FFc00 & (int)(ISI[3*i+1].to_int() << 10);
    	 e = 0x3FF00000 & (int)(ISI[3*i+2].to_int() << 20);
    	 output[i] = e|d|c;
     }
}
