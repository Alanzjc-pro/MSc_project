
#include <stdio.h>
#include <iostream>
#include <stdint.h>
#include <math.h>
#include <ap_fixed.h>
#include <ap_int.h>

#define N 75

typedef ap_ufixed<20,6> din;
typedef ap_ufixed<17,12> dout;
typedef ap_fixed<17,3> din_t;

void estimate_FR(din spksTime[N],dout FR[N-1],din_t ISI[N-1]);


