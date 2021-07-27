#include <stdio.h>
#include<stdlib.h>
#include <math.h>
#include<fstream>
#include<iostream>
#include <string.h>
#include <ap_fixed.h>

using namespace std;

#define Channel 96
#define subChannel 32
#define size 23916
#define col 5
const double samplingRate= 24400;

const int Max_Char = 3000;

typedef ap_uint <1> din;
typedef ap_uint <20> din2;
typedef ap_uint <10> dout;
typedef ap_uint <6> dout2;

void estimate_ISI(int inputs[Channel], int rem[Channel],int output[subChannel]);
