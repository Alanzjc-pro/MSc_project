
#include <stdio.h>
#include <stdint.h>
#include <math.h>
#include <ap_fixed.h>
#include<ap_int.h>


#define N 75

typedef ap_fixed<14,6> din;
typedef ap_fixed<14,12> dout;
typedef ap_fixed<14,2> din_t;

void estimate_FR(din spksTime[N],dout FR[N-1],din_t ISI[N-1]);


