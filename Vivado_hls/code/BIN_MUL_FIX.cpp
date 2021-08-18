#include "BIN_MUL_FIX_v3.h"


void estimate_FR(int inputs[Channel],int counts[subChannel],int outputs[subChannel]){
	din spks[Channel];
	din update;
	dout2 cnt[Channel];
	dout FR[Channel];
	int a,b,c,d;
	int a1,b1,c1,d1;

	Unpack_count: for(int j = 0;j<subChannel;j++){
		cnt[4*j] = (dout2)(counts[j] & 0x000000FF);
		cnt[4*j+1] = (dout2)((counts[j] & 0x0000FF00) >> 8);
		cnt[4*j+2] = (dout2)((counts[j] & 0x00FF0000) >> 16);
	    cnt[4*j+3] = (dout2)((counts[j] & 0xFF000000) >> 24);
	}

	FR_estimation: for (int i = 0;i<Channel;i++){
		spks[i] = (din)(inputs[i] & 0x00000001);
		update = (din)((inputs[i] & 0x00000002) >> 1);
		if (spks[i] == 1){
			cnt[i] ++;
		}
	    if (update == 1){
	    	FR[i] = (dout)(cnt[i] << 2) + (dout)(cnt[i]);
	    	cnt[i] = 0;
	    }
	}

	Pack_outputs: for (int k= 0;k<subChannel;k++){
		d = 0x000000FF & (int)(cnt[4*k].to_int());
		c = 0x0000FF00 & (int)(cnt[4*k+1].to_int() << 8);
		b = 0x00FF0000 & (int)(cnt[4*k+2].to_int() << 16);
		a = 0xFF000000 & (int)(cnt[4*k+3].to_int() << 24);
		counts[k] = a|b|c|d;
		if(update == 1){
			d1 = 0x000000FF & (int)(FR[4*k].to_int());
			c1 = 0x0000FF00 & (int)(FR[4*k+1].to_int() << 8);
			b1 = 0x00FF0000 & (int)(FR[4*k+2].to_int() << 16);
			a1 = 0xFF000000 & (int)(FR[4*k+3].to_int() << 24);
			outputs[k] = a1|b1|c1|d1;
		}else{
			outputs[k] = 1;
		}
	}
}
