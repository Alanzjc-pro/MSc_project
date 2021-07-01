
#include <stdio.h>
#include <iostream>
#include <stdint.h>
#include <math.h>
#include <ap_fixed.h>
#include <ap_int.h>

#define N 75

typedef ap_ufixed<20,6> din;
typedef ap_fixed<17,3> dout;

void estimate_ISI(din spksTime[N],dout ISI[N-1]);


