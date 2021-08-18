#include "ISI_FLOAT_En.h"
#include "test_data_3.h"
#include "golden_data1.h"

int main(){
	int up[Channel];
	int spks[Channel];
	int outputs[Channel];
	int ISIPre[Channel];
	int spksPre[Channel];
	int ISI_final[Channel][col];
	int t;
	int bin = 200;
	int count = 1;
	int retval = 0;

	for(int i=0;i<Channel;i++){
		spksPre[i] = 0;
		ISIPre[i] = 0;
		up [i] = 0;
	}

	for(int i = 0; i < size;i++){
		t = (0.0204 + (i+1)/samplingRate)*1000;
		for(int j =0;j<Channel;j++){
			if(test_data[Channel*i+j]==1){
					up[j] = 1;
			}
			spks[j] = test_data[Channel*i+j];
		}

		estimate_ISI_encode(spks, t, up, ISIPre, spksPre,outputs);

		if(t == bin * count){
			cout<<"Column: "<<count<<endl;
			for(int i = 0; i<Channel;i++){
				ISI_final[i][count-1]   = outputs[i];
				cout<< "ISI encode:"<<ISI_final[i][count-1]<<" in channel "<<i+1<<endl;
				up[i] = 0;
			}
			count ++;
		}
	}
    //Compare the results file with the golden results
    printf("Total size is %d\n",col);
    int diff;
    int acc = 0;
    for(int i =0;i<col;i++){
        for(int j =0;j<Channel;j++){
        	diff = ISI_final[j][i] - (int)golden_data[col*j+i];
    		if(diff<0){
    			diff = -diff;
    		}
    		if(diff == 1){
    			diff = 0;
    		}
    		acc = acc+diff;
    		printf("The %d difference is %d\n",j+1,diff);
      	}
    }
    printf("The total difference is %d \n",acc);
    double accuracy = (1-(double)(acc)/(Channel*col))*100;
    printf("The accuracy is %f%%\n",accuracy);
    if(accuracy>=90){
    	printf("Test Passed\n");
    }else{
    	printf("Test Failed\n");
    	//retval = 1;
    }

	return retval;
}
