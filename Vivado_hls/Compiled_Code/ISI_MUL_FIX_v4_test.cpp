#include "ISI_MUL_FIX_v4.h"
#include "test_data_3.h"
#include "golden_data.h"

int main(){
	int inputs[Channel];
	int outputs[subChannel];
	int ISI[Channel];
	int ISI_final[Channel][col];
	int pre[Channel];
	int up[Channel];
	int t;
	int bin = 200;
	int a,b,c;
	int count = 1;
	int retval = 0;
	for(int i=0;i<Channel;i++){
		pre[i] = 0;
		up[i] =0;
	}

	for(int i = 0; i < size;i++){
		t = (0.0204 + (i+1)/samplingRate)*1000;
		for(int j =0;j<Channel;j++){
			if(test_data[Channel*i+j]==1){
				up[j] = 1;
			}
			a = 0x00000001 & (int) ((test_data[Channel*i+j]));
			b = 0x00000002 & (int) ((up[j]) << 1);
			c = 0xFFFFFFFb & (int) ((t) << 2);
			inputs[j] = c|b|a;
		}
		estimate_ISI(inputs, pre, outputs);


		if(t == bin * count){
			cout<<"Column"<<count<<endl;
			for(int i = 0; i<subChannel;i++){
				ISI_final[3*i][count-1] = (int)(outputs[i] & 0x000003FF);
				ISI_final[3*i+1][count-1] = ((int)(outputs[i] & 0x000FFc00) >> 10);
				ISI_final[3*i+2][count-1] = ((int)(outputs[i] & 0x3FF00000) >> 20);
				cout<< "ISI:"<<ISI_final[3*i][count-1]<<" in channel "<<3*i+1<<endl;
				cout<< "ISI:"<<ISI_final[3*i+1][count-1]<<" in channel "<<3*i+2<<endl;
				cout<< "ISI:"<<ISI_final[3*i+2][count-1]<<" in channel "<<3*i+3<<endl;
				up[3*i] = 0;
				up[3*i+1] = 0;
				up[3*i+2] = 0;
			}
			count ++;
		}
	}

//    //Compare the results file with the golden results
//    printf("Total size is %d\n",col);
//    int diff;
//    int acc = 0;
//    for(int j =0;j<Channel;j++){
//        for(int i =0;i<col;i++){
//        	diff = ISI_final[j][i] - golden_data[col*j+i];
//    		//printf("The %d difference is %f\n",j+1,diff);
//    		if(diff<0){
//    			diff = -diff;
//    		}
//    		acc = acc+diff;
//      	}
//    }
//    printf("The total difference is %d \n",acc);
//    double accuracy = (1-acc/size)*100;
//    printf("The accuracy is %f%%\n",accuracy);
//    if(accuracy>=95){
//    	printf("Test Passed\n");
//    }else{
//    	printf("Test Failed\n");
//    	//retval = 1;
//    }
//
//	return retval;

}
