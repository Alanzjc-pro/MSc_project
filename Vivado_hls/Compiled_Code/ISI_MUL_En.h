#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#include <ap_fixed.h>
#include <ap_int.h>
using namespace std;

#define Channel 96
#define subChannel 12
#define size 23916
#define col 5
const double samplingRate= 24400;


typedef ap_uint <1> din;
typedef ap_uint <20> din2;
typedef ap_uint <10> dout;
typedef ap_uint <6> dout2;
typedef ap_uint <4> dout3;

void estimate_ISI_encode(int inputs[Channel], int rem[Channel],int output[subChannel]);
dout3 reduce_range(dout ISI);
