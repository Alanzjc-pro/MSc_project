#include "BIN_FLOAT.h"
#include "test_data_3.h"

int main(){
	int spks[Channel];
	int counts[Channel];
	int outputs[Channel];
	int FR_final [Channel][col];

	int bin = 200;
	int t;
	int update = 0;
	int incre = 1;

	for(int i = 0;i<Channel;i++){
		counts[i] = 0;
	}

	for(int i = 0; i < size;i++){

		t = (0.0204 + (i+1)/samplingRate)*1000;

		for(int j =0;j<Channel;j++){
			spks[j] = test_data[Channel*i+j];
		}

		if(t == bin*incre){
			update = 1;
			incre ++;
		}

		estimate_FR(spks,update, counts,outputs);

		if(update == 1){
			cout<<"Column: "<<incre<<endl;
			for(int k = 0; k<Channel;k++){
				FR_final[k][incre-1] = outputs[k];
				cout<< "FR:"<<FR_final[k][incre-1]<<" in channel "<<k+1<<endl;
			}
			update = 0;
		}
	}

		return 0;
}
