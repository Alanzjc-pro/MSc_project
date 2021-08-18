#include "ISI_MUL_En.h"

void estimate_ISI_encode(int inputs[Channel], int rem[Channel],int output[subChannel]){

	 din spks[Channel];
     din update[Channel];
     dout ISI[Channel];
     din2 spksPre;
     din2 spksTime;
     dout ISIPre;
     int a,b,c,d,e,f,g,h;
	 dout2 ISI_n ;
	 dout2 ISIPre_n ;
	 dout3 ISIquan[Channel];

     //Get the input values
     estimate_ISI:for(int j = 0;j<Channel;j++){
    	 spks[j] = (din)(inputs[j] & 0x00000001);
    	 update[j] = (din)((inputs[j] & 0x00000002)>>1);
    	 if (update[j] == 1){
    		 if(spks[j] == 1){
    	    	 spksTime = (din2)((inputs[j] & 0xFFFFFFFb)>>2);
    			 spksPre = (din2)(rem[j] & 0x000FFFFF);
    			 ISIPre = (dout)((rem[j] & 0xFFF00000) >> 20);
    			 ISI[j] = spksTime- spksPre;
    			 ISI_n = (dout2) (ISI[j] >> 5);
    			 ISIPre_n = (dout2) (ISIPre >> 5);
			    if (ISIPre_n  - ISI_n > (ISI_n * ISIPre_n)){
    				 ISI[j] = ISIPre - (dout)(ISI[j] >> 5)- (dout)(ISIPre >> 5);
    			 }
    			 a = 0x000FFFFF & (int)(spksTime);
    			 b = 0xFFF00000 & (int)(ISI[j].to_int() << 20);
    			 rem[j] = b | a;
    			 ISIquan[j] = reduce_range(ISI[j]);
    		 }
    	 }else{
    		     ISIquan[j] = 15;
    	 }
     }

     Pack_output: for(int i = 0;i< subChannel;i++){
    	 a = 0x0000000F & (unsigned int)(ISIquan[8*i].to_int());
    	 b = 0x000000F0 & (unsigned int)(ISIquan[8*i+1].to_int() << 4);
    	 c = 0x00000F00 & (unsigned int)(ISIquan[8*i+2].to_int() << 8);
    	 d = 0x0000F000 & (unsigned int)(ISIquan[8*i+3].to_int() << 12);
    	 e = 0x000F0000 & (unsigned int)(ISIquan[8*i+4].to_int() << 16);
    	 f = 0x00F00000 & (unsigned int)(ISIquan[8*i+5].to_int() << 20);
    	 g = 0x0F000000 & (unsigned int)(ISIquan[8*i+6].to_int() << 24);
    	 h = 0xF0000000 & (unsigned int)(ISIquan[8*i+7].to_int() << 28);
    	 output[i] = h|g|f|e|d|c|b|a;
     }
}


dout3 reduce_range(dout ISI){
	dout3 ISI_q;
	if(ISI < 10 && ISI>=0){
		ISI_q = 13;
	}else if(10 <= ISI && ISI<=100){
		ISI_q = (dout3)(ISI >> 3);
	}else{
		ISI_q = 14;
	}
	return ISI_q;
}
