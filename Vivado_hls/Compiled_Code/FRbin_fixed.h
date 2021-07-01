#include <iostream>
#include <stdio.h>
#include <ap_fixed.h>
#include <ap_int.h>

#define N 200
#define M 75

typedef ap_ufixed<12,6> din;
typedef ap_ufixed<8,8> dout;

void estimate_FR(din spksTime[M], dout FR[N-1]);
