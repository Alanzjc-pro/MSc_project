#include "FRbin_fixed.h"

int main(){
	din spksTime[M];
	dout FR[N-1];
	double FR_true[N-1];
	double spks,firingRate;
	FILE *fr,*fr2;
	int count = 0;
	//Read Input and output
		fr = fopen("SpksTime.dat","r");
		if(!fr){
			printf("Error opening file\n");
		}else{
			printf("Successfully opening file\n");
		}
		if(fr){
			while(fscanf(fr,"%lf",&spks)==1){
				spksTime[count] = spks;
				count++;
			}
		}
		fclose(fr);
	estimate_FR(spksTime,FR);
	count = 0;
	fr2 = fopen("FRbin.dat","r");
	if(!fr2){
		printf("Error opening file\n");
	}else{
		printf("Successfully opening file\n");
	}
	if(fr2){
		while(fscanf(fr2,"%lf",&firingRate)==1){
			FR_true[count] = firingRate;
			count++;
		}
	}
	fclose(fr2);

	//Compare the results file with the golden results
	    printf("Total size is %d\n",count);
	    double acc,diff;
	    acc = 0;
	    for(int j =0;j<count;j++){
	    	diff = double(FR[j])-FR_true[j];
	    	std::cout<<FR[j]<<std::endl;
	    	if(diff<0){
	    		diff = -diff;
	    	}
	    	acc = acc+diff;
	    }
	    printf("The total difference is %f \n",acc);
	    double accuracy = (1-acc/count)*100;
	    printf("The accuracy is %f%%\n",accuracy);
	    if(accuracy>=99.9){
	    	printf("Test Passed\n");
	    }else{
	    	printf("Test Failed\n");
	    }
}
