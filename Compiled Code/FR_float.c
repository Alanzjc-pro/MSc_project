#include "FR.h"


void estimate_FR(din spksTime[N],dout FR[N-1]){
	 double penalty = 30;
	 double p = 0.03125;
	 double ISI[N-1];
     int i,j;
     FR[0] = 0;
	 for (i = 0;i<N-1;i++){
		ISI[i] = spksTime[i+1]-spksTime[i];
	 }
     FiringRate: for(j=1;j<N-1;j++){
    	 FR[j] = 1/ISI[j];
    	 if(FR[j]-FR[j-1] > penalty){
    		 FR[j]=FR[j]*p +FR[j-1]*(1-p);
     	 }
     }
}
