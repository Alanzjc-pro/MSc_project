#include "BIN_FLOAT.h"


void estimate_FR(int spks[Channel],int update, int counts[Channel],int outputs[Channel]){

	FR_estimation: for (int i = 0;i<Channel;i++){
		if (spks[i] == 1){
			counts[i] ++;
		}
	    if (update == 1){
	    	outputs[i] = counts[i]/0.2;
	    	counts[i]  = 0;
	    }
	}

}
