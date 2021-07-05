
#include <stdio.h>
#include <iostream>
#include <stdint.h>
#include <math.h>
#include <ap_fixed.h>



#define N 75

typedef double din;
typedef double dout;
typedef double coeff;

void estimate_ISI(din spksTime,din *spksPre,dout *ISI,dout *ISIpre, coeff penalty,int num);
