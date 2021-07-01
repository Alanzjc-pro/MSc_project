#include "FR.h"


void estimate_FR(din spksTime[N],dout FR[N-1]){
	 const ap_uint<8> penalty = 30;
	 ap_fixed<14,12> ISI[N-1];
     int i,j;
     FR[0] = 0;
	 for (i = 0;i<N-1;i++){
		ISI[i] = spksTime[i+1]-spksTime[i];
	 }
     FiringRate: for(j=1;j<N-1;j++){
    	 FR[j] = 1/ISI[j];
    	 if(FR[j]-FR[j-1] > penalty){
    		 FR[j]=FR[j]>>6 + FR[j-1]-FR[j-1]>>6;
     	 }
     }
}
