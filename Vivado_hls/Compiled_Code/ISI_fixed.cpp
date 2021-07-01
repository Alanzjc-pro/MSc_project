#include "ISI_fixed.h"


void estimate_ISI(din spksTime[N],dout ISI[N-1]){
	 const ap_ufixed<5,5> penalty = 30;
     int i,j;
     for(i=0;i<N-1;i++){
    	 ISI[i] = spksTime[i+1]-spksTime[i];
     }
     FiringRate: for(j=1;j<N-1;j++){
    	 if(ISI[j-1]-ISI[j] > penalty * ISI[j]*ISI[j-1]){
    		 printf("%d In",j-1);
    		 ISI[j] = ISI[j-1]-(ap_fixed<17,3>)(ISI[j]>>2);
     	 }
     }
}
