#include "ISI_fixed.h"

int main(){
	din spksTime[N];
	dout ISI[N-1];
	double FR_true[N-1];
	int retval, count = 0;
	double spks,firingRate;
	ap_ufixed<17,12> FR[N-1];
	int i;
	FILE *fr,*fr2,*fw;

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


	//Call the Top-level Function
	estimate_ISI(spksTime,ISI);
	const ap_ufixed<10,1> u =1.00000;
    for(i=0;i<N-1;i++){
    	FR[i] =u/ISI[i];
    	std::cout<<i<<" ";
    	std::cout<<"FR:"<<FR[i]<<std::endl;
    }
	//Read the golden results
	count = 0;
	fr2 = fopen("FR_isi.dat","r");
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

    //Compare the results file with the golden results
    printf("Total size is %d\n",count);
    double acc,diff;
    acc = 0;
    for(int j =0;j<count;j++){
    	diff = double(FR[j])-FR_true[j];
    	//printf("The %d difference is %f\n",j+1,diff);
    	if(diff<0){
    		diff = -diff;
    	}
    	acc = acc+diff;
    }
    printf("The total difference is %f \n",acc);
    double accuracy = (1-acc/count)*100;
    printf("The accuracy is %f%%\n",accuracy);
    if(accuracy>=95){
    	printf("Test Passed\n");
    }else{
    	printf("Test Failed\n");
    	retval = 1;
    }
    //return retval;
}
