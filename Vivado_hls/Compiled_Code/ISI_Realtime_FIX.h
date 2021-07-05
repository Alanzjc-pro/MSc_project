
#include <stdio.h>
#include <iostream>
#include <stdint.h>
#include <math.h>
#include <ap_fixed.h>



#define N 75

typedef ap_ufixed<19,6> din;
typedef ap_fixed<16,3> dout;
typedef const ap_ufixed<5,5> coeff;

void estimate_ISI(din spksTime,din *spksPre,dout *ISI,dout *ISIpre, coeff penalty,bool yes);
