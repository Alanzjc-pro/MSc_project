#include "BIN_RealTime_float.h"

int main(){
	din spksTime[M];
	dout FR[N-1],FR_true[N-1];
	dout c = 0;
	din_coeff num;
	double spks,firingRate;
	FILE *fr,*fr2;
	int count = 0;
	double bin = 0.1;
	bool finish = false;

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
	for(num=0;num<N;num++){
		for(int j=0;j<M;j++){
			estimate_FR(spksTime[j],&FR[num],&c,num,&finish);
		}
		finish = true;
	}
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
	    for(int j =0;j<count-1;j++){
	    	diff = FR[j+1]-FR_true[j];
	    	std::cout<<FR[j+1]<<std::endl;
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
