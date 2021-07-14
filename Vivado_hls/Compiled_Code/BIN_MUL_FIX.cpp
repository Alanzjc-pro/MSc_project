#include"BIN_MUL_FIX.h"



void estimate_FR(din2 spksTime[Channel][maxElm],din elements[Channel],dout FR[Channel]){
	din c[Channel-1] = {0};
	bool nospikes = false;

	Iterate_Channel: for(int i = 0;i<Channel;i++){
		Iterate_SpksElement: for(int j = 0;j<elements[i];j++){
			#pragma HLS loop_tripcount min=1 max = 39
			if (spksTime[i][j]==0){
				nospikes = true;
			}else{
				nospikes = false;
			}
			c[i] = j+1;
		}
		cout<<c[i]<<" in channel "<<i+1<<endl;
		if(nospikes){
			FR[i] = 0;
		}else{
			FR[i] = (dout)(c[i]<<2);
		}
	}
}
