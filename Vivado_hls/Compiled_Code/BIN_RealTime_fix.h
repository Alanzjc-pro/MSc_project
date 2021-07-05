#include <stdio.h>
#include <stdint.h>
#include <iostream>
#include <math.h>
#include <ap_fixed.h>
#include <ap_int.h>

#define N 200
#define M 75

typedef ap_ufixed<12,6> din;
typedef ap_ufixed<8,8> dout;
typedef ap_uint<8> din_t;
typedef int din_coeff;

void estimate_FR(din spksTime, dout *FR, din_t *c,din_coeff Num, bool *finish);
