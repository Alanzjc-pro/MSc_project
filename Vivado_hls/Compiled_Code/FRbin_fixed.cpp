#include "FRbin_fixed.h"


void estimate_FR(din spksTime[M], dout FR[N-1]){
		int i;
		ap_uint<64> count= 0;
		ap_ufixed<16,0> bin = 0.1;
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
