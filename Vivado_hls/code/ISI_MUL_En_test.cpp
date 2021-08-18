#include "ISI_MUL_En.h"
#include "test_data_3.h"
#include "golden_data1.h"

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

			estimate_ISI_encode(inputs, pre, outputs);


		if(t == bin * count){
			cout<<"Column: "<<count<<endl;
			for(int i = 0; i<subChannel;i++){
				ISI_final[8*i][count-1]   = (unsigned int)(outputs[i] & 0x0000000F);
				ISI_final[8*i+1][count-1] =((unsigned int)(outputs[i] & 0x000000F0) >> 4);
				ISI_final[8*i+2][count-1] = ((unsigned int)(outputs[i] & 0x00000F00) >> 8);
				ISI_final[8*i+3][count-1] = ((unsigned int)(outputs[i] & 0x0000F000) >> 12);
				ISI_final[8*i+4][count-1] = ((unsigned int)(outputs[i] & 0x000F0000) >> 16);
				ISI_final[8*i+5][count-1] = ((unsigned int)(outputs[i] & 0x00F00000) >> 20);
				ISI_final[8*i+6][count-1] = ((unsigned int)(outputs[i] & 0x0F000000) >> 24);
				ISI_final[8*i+7][count-1] = ((unsigned int)(outputs[i] & 0xF0000000) >> 28);
//				cout<< "ISI encode:"<<ISI_final[8*i][count-1]<<" in channel "<<8*i+1<<endl;
//				cout<< "ISI encode:"<<ISI_final[8*i+1][count-1]<<" in channel "<<8*i+2<<endl;
//				cout<< "ISI encode:"<<ISI_final[8*i+2][count-1]<<" in channel "<<8*i+3<<endl;
//				cout<< "ISI encode:"<<ISI_final[8*i+3][count-1]<<" in channel "<<8*i+4<<endl;
//				cout<< "ISI encode:"<<ISI_final[8*i+4][count-1]<<" in channel "<<8*i+5<<endl;
//				cout<< "ISI encode:"<<ISI_final[8*i+5][count-1]<<" in channel "<<8*i+6<<endl;
//				cout<< "ISI encode:"<<ISI_final[8*i+6][count-1]<<" in channel "<<8*i+7<<endl;
//				cout<< "ISI encode:"<<ISI_final[8*i+7][count-1]<<" in channel "<<8*i+8<<endl;
			}
			for(int i = 0;i<Channel;i++){
				up[i] = 0;
			}
			count ++;
		}
	}
    //Compare the results file with the golden results
    printf("Total size is %d\n",col);
    double diff;
    double acc = 0;
    for(int i =0;i<col;i++){
    	cout<<"Column: "<<i+1<<endl;
        for(int j =0;j<Channel;j++){
        	diff = ISI_final[j][i] - golden_data[col*j+i];
    		if(diff<0){
    			diff = -diff;
    		}
    		if(diff == 1){
    			diff = 0;
    		}
    		acc = acc+diff;
    		printf("The %f difference is %d\n",j+1,diff);
      	}
    }
    printf("The total difference is %f \n",acc);
    double accuracy = (1-acc/(Channel*col))*100;
    printf("The accuracy is %f%%\n",accuracy);
    if(accuracy>=90){
    	printf("Test Passed\n");
    }else{
    	printf("Test Failed\n");
    	retval = 1;
    }

	return retval;
}
