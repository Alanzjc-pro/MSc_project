#include "ISI_MUL_FIX_v4.h"
#include "test_data_2.h"

int main(){
	int inputs[Channel];
	int outputs[Channel];
	float ISI_final[Channel];
	int pre[Channel];
	int up[Channel];
	int t;
	int bin = 200;
	int a,b,c;
	int count = 1;

	for(int i=0;i<Channel;i++){
		pre[i] = 0;
		up[i] =0;
	}

	for(int i = 0; i < size;i++){
		t = (0.0204 + (i+1)/samplingRate)*1000;
		for(int j =0;j<Channel;j++){
			if(test_data[2*i+j]==1){
				up[j] = 1;
			}
			a = 0x00000001 & (int) ((test_data[2*i+j]));
			b = 0x00000002 & (int) ((up[j]) << 1);
			c = 0xFFFFFFFb & (int) ((t) << 2);
			inputs[j] = c|b|a;
		}
		estimate_ISI(inputs, pre, outputs);
		if(t == bin * count){
			cout<<"Column"<<count<<endl;
			for(int i = 0; i<Channel;i++){
				ISI_final[i] = outputs[i];
				cout<< "ISI:"<<ISI_final[i]<<" in channel "<<i+1<<endl;
				up[i] = 0;
			}
			count ++;
		}
	}
	return 0;

}
