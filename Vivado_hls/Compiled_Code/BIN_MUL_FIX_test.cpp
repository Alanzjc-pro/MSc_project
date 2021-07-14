#include"BIN_MUL_FIX.h"

int main(){
	din2 spksTime[Channel][maxElm];
	dout FR[Channel];
	double FR_true[Channel];
	din elements[Channel];
	double firingRate;

	int count = 0;

    //Read the spikeTime input one by one. The spike time would be updated at each fixed time.
	//Corresponding input with 96 channels would be fetched directly to function to get ISI[count][96] -> count here is the current number of fixed time period.
	ifstream fin;
	fin.open("SpksTimebin.dat");
    char s[maxChar];
    fin.getline(s,maxChar);
    spksTime[Channel][maxElm]={0};
    char *token[Channel];
    token[0] = strtok(s,";");
    //cout<<"Channel 0 token:"<<token[0]<<endl;
    for(int i = 1;i<Channel;i++){
    	token[i] = strtok(0,";");
    	//cout<<"Channel "<<i<<" token:"<<token[i]<<endl;
    }

    char *token1[Channel];
    int c =0;
    for(int j=0;j<Channel;j++){
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
    	//cout<<"j:"<<j<<" "<<"elements:"<<elements[j]<<endl;
    	c = 0;
    }

    estimate_FR(spksTime,elements,FR);

    for(int j =0;j<Channel;j++){
    	cout<<"FR: "<<FR[j]<<" in Channel "<<j+1<<endl;
    }

    return 0;

}
