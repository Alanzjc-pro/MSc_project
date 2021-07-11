#include "ISI_MUL_FLOAT.h"

void estimate_ISI(din spksTime,double spkPre[Channel-1],dout ISI[col-1][Channel-1], double ISIpre[Channel-1],int count){
	bool update = true;
	for(int i = 0;i<Channel;i++){
		for(int j = 0; j< spksTime[i].size();j++){
			//cout<<" "<<j<<" SpksTime:"<<spksTime[i][j];
			if (spksTime[i][j]==0 ){
				ISI[count][i] = 1;
				update = false;
			}else{
				update = true;
				ISI[count][i] = spksTime[i][j]-spkPre[i];
				if(ISIpre[i]-ISI[count][i]>= 32*ISI[count][i]*ISIpre[i]){
					ISI[count][i] = (1-0.03125)*ISIpre[i]-0.03125*ISI[count][i];
				}
			}
			if(update){
				spkPre[i] = spksTime[i][j];
				ISIpre[i] = ISI[count][i];
			}
		}
		//cout<<"*spkPre:"<<*spkPre[i] <<endl;
		//cout<<" the"<<" ISI:"<<ISI[count][i]<<endl;
	}
}
