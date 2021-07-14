#include "ISI_MUL_FIX.h"


int main(){
//	#pragma HLS stream variable = spksTime depth = 95 dim = 2
//	#pragma HLS stream variable = spksPre depth = 95 dim = 1
//	#pragma HLS stream variable = ISIpre depth = 95 dim = 1
//	#pragma HLS stream variable = elements depth = 95 dim = 1
	din spksTime[Channel][maxElm];
	din spksPre[Channel] = {0};
	dout ISI[Channel];
	dout ISIpre[Channel] = {0};
	din2 elements[Channel];
	double isi;

    //Read the spikeTime input one by one. The spike time would be updated at each fixed time.
	//Corresponding input with 96 channels would be fetched directly to function to get ISI[count][96] -> count here is the current number of fixed time period.
		ifstream fin;
		fin.open("SpksTimecell.dat");
		char s[Max_Char];
		// while(fin.getline(s,Max_Char)){
    	fin.getline(s,Max_Char);
    	//spksTime[Channel-1][maxElm-1]={0};
    	char *token[Channel];
    	token[0] = strtok(s,";");
    	//cout<<"Channel 0 token:"<<token[0]<<endl;
    	for(din3 i = 1;i<Channel;i++){
    		token[i] = strtok(0,";");
    		//cout<<"Channel "<<i<<" token:"<<token[i]<<endl;
    	}

    	char *token1[Channel];
    	din2 c =0;
    	for(din3 j=0;j<Channel;j++){
    		token1[j] = strtok(token[j],",");
    		spksTime[j][c] = stod(token1[j]);
    		//cout<<"j:"<<j<<" "<<"token1:"<<token1[j]<<endl;
    		while(token1[j]!= NULL){
    			c++;
    			token1[j] = strtok(NULL,",");
    			if(!token1[j]) break;
    			spksTime[j][c] = stod(token1[j]);
    			//cout<<"j:"<<j<<" "<<"token1:"<<token1[j]<<endl;
    		}
    		elements[j] = c;
    		c = 0;
    	}

    	estimate_ISI(spksTime,spksPre,ISI,ISIpre,elements);

    	//Compare the results file with the golden results
    	for(din3 j =0;j<Channel;j++){
    		cout<<"ISI: "<<ISI[j]<<" in Channel "<<j+1<<endl;
    	}
    	return 0;
}
