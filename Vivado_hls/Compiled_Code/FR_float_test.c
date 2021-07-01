#include "FR.h"

int main(){
	din spksTime[N-1];
	dout FR[N-1];
	dout FR_true[N-1];
	int count = 0;
	double spks,firingRate;
	int i= 0;
	FILE *fr,*fr2;

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
	count = 0;
	fr2 = fopen("FR.dat","r");
	if(!fr){
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

	//Call the Function
	estimate_FR(spksTime,FR);


    //Compare the results file with the golden results
    printf("Total size is %d\n",count);
    double acc,diff;
    acc = 0;
    for(int j =0;j<count;j++){
    	diff = FR[j]-FR_true[j];
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
