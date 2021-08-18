#include "BIN_MUL_FIX_v3.h"
#include "test_data_3.h"

int main(){
	int inputs[Channel];
	int counts[subChannel];
	int outputs[subChannel];
	int FR_final [Channel][col];

	int bin = 200;
	int update = 0;
	int t;
	int a,b;
	int incre = 1;

	for(int i = 0;i<subChannel;i++){
		counts[i] = 0;
	}

	for(int i = 0; i < size;i++){

		t = (0.0204 + (i+1)/samplingRate)*1000;

		if(t == bin*incre){
			update = 1;
			incre ++;
		}

		for(int j =0;j<Channel;j++){
			a = 0x00000001 & (int) ((test_data[Channel*i+j]));
			b = 0x00000002 & (int) (update << 1);
			inputs[j] = b|a;
		}

		estimate_FR(inputs,counts,outputs);

		if(update == 1){
			cout<<"Column"<<incre<<endl;
			for(int i = 0; i<subChannel;i++){
				FR_final[4*i][incre-1] = (int)(outputs[i] & 0x000000FF);
				FR_final[4*i+1][incre-1] = ((int)(outputs[i] & 0x0000FF00) >> 8);
				FR_final[4*i+2][incre-1] = ((int)(outputs[i] & 0x00FF0000) >> 16);
				FR_final[4*i+3][incre-1] = ((int)(outputs[i] & 0xFF000000) >> 24);
				cout<< "FR:"<<FR_final[4*i][incre-1]<<" in channel "<<4*i+1<<endl;
				cout<< "FR:"<<FR_final[4*i+1][incre-1]<<" in channel "<<4*i+2<<endl;
				cout<< "FR:"<<FR_final[4*i+2][incre-1]<<" in channel "<<4*i+3<<endl;
				cout<< "FR:"<<FR_final[4*i+3][incre-1]<<" in channel "<<4*i+4<<endl;
			}
			update = 0;
		}
	}

		return 0;
}
