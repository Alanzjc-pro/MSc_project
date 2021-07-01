#include "FR.h"


void estimate_FR(din spksTime[N],dout FR[N-1],din_t ISI[N-1]){
	 const ap_ufixed<5,5> penalty = 30;
	 const ap_ufixed<10,1> u =1.00000;
	 //const ap_ufixed<5,0> p =0.03125;
     int i,j;
     FR[0] = 0;
	 for (i = 0;i<N-1;i++){
		ISI[i] = spksTime[i+1]-spksTime[i];
		//std::cout<<"ISI:"<<ISI[i]<<std::endl;
	 }
     FiringRate: for(j=1;j<N-1;j++){
    	 FR[j] = u/ISI[j];
    	 if(FR[j]-FR[j-1] > penalty){
    		 FR[j]=FR[j-1]+(ap_ufixed<17,12>)((FR[j]-FR[j-1])>>5);
    		 //FR[j] = FR[j]*p+(1-p)*FR[j-1];
     	 }
  		//std::cout<<"FR:"<<FR[j]<<std::endl;
     }
}
