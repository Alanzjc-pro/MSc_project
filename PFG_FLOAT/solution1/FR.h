
#include <stdio.h>
#include <stdint.h>
#include <ap_fixed.h>
#include<ap_int.h>


#define N 75

typedef ap_fixed<14,12> din;
typedef ap_fixed<13,1> dout;


void estimate_FR(din spksTime[N],dout FR[N-1]);


