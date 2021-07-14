#include "ISI_MUL_FIX.h"

void estimate_ISI(din spksTime[Channel][maxElm],din spksPre[Channel],dout ISI[Channel], dout ISIpre[Channel],din2 elements[Channel]){
	//Update signal check whether there is a spike event in current time
	ap_uint<1> update = 1;
	dout one = 1;
	Iterate_Channel: for(din3 i = 0;i<Channel;i++){
		Iterate_spks: for(din2 j = 0; j< elements[i];j++){
			#pragma HLS loop_tripcount min=1 max = 39
			//if else statement operate according to active or inactive spike events
			Update_Checking: if (spksTime[i][j]== 0){
				//If there is no spike event, we can directly set ISI to random values > 1 ensuring spike rate = 1/ISI very small.
				ISI[i] = one;
				update = 0;
			}else{
				// if there is spike event, we calculate the difference and check penalty action.
				update = 1;
				ISI[i] = spksTime[i][j]-spksPre[i];
				Penalty: if(ISIpre[i]-ISI[i]>= (dout)(ISI[i]*ISIpre[i]<<5)){
					ISI[i] = ISIpre[i]-(dout)(ISIpre[i]>>5)-(dout)(ISI[i]>>5);
				}
			}
			//The previous spksTime and ISI are only updated if this current time has spike events.
			Save: if(update==1){
				spksPre[i] = spksTime[i][j];
				ISIpre[i] = ISI[i];
			}
		}
	}
}
