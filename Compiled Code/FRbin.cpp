#include "FRbin.h"

void estimate_FR(din spksTime[M], dout FR[N-1]){
	double t = 0;
	int i,count= 0;
	int k_new;
	double bin = 0.1;
	for(i = 0;i<N;i++){
		for(int j=0; j<M;j++){
			if((spksTime[j]>=bin*(i))&&(spksTime[j]<=bin*(i+1))){
				count++;
			}
		}
		FR[i] = count/bin;
		count = 0;
	}
}
