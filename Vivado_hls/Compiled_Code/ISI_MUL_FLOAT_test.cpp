#include "ISI_MUL_FLOAT.h"


int main(){
	din spksTime;
	double spksPre[Channel-1] = {0};
	dout ISI[col-1][Channel-1];
	double ISIpre[Channel-1]={0};
	ifstream fin;
	fin.open("SpksTimecell.dat");
	if(fin){
	printf("Successfully opening file\n");
	}
	int count = 0;
    char s[Max_Char];
    while(fin.getline(s,Max_Char)){
    	char *token[Channel];
    	token[0] = strtok(s,";");
    	//cout<<"Channel 0 token:"<<token[0]<<endl;
    	for(int i = 1;i<Channel;i++){
    		token[i] = strtok(0,";");
    		//cout<<"Channel "<<i<<" token:"<<token[i]<<endl;
    	}

    	char *token1[Channel];
    	std::vector<double> row;
    	for(int j=0;j<Channel;j++){
    		token1[j] = strtok(token[j],",");
    		row.push_back(stod(token1[j]));
    		//cout<<"j:"<<j<<" "<<"token1:"<<token1[j]<<endl;
    		while(token1[j]!= NULL){
    			token1[j] = strtok(NULL,",");
    			if(!token1[j]) break;
    			row.push_back(stod(token1[j]));
    			//cout<<"j:"<<j<<" "<<"token1:"<<token1[j]<<endl;
    		}
    		spksTime.push_back(row);
    		row.clear();
    	}

    	for(int i = 0; i<spksTime.size();i++){
    		for(int j =0; j< spksTime[i].size();j++){
    		//cout<<" "<<j<<" spksTime:"<<spksTime[i][j]<<" in Channel"<<i<<endl;
    		}
    	}
    	estimate_ISI(spksTime,spksPre,ISI,ISIpre,count);
    	spksTime.clear();
    	count++;
	}
    for(int i = 0;i<col;i++){
    	cout<<"Colume:"<<i+1<<endl;
    	for(int j=0;j<Channel;j++){
    		cout<<"ISI:"<<ISI[i][j]<<" in Channel "<<j+1<<endl;
    	}
    }
}

