#include <stdio.h>
#include <math.h>
#include<fstream>
#include<iostream>
#include <string.h>
#include <ap_fixed.h>

using namespace std;

#define Channel 96
#define col 50
#define maxElm 40
const int Max_Char = 3000;

typedef ap_ufixed<18,6> din;
typedef ap_uint <6> din2;
typedef ap_uint <8> din3;
typedef ap_ufixed<10,2>dout;

void estimate_ISI(din spksTime[Channel][maxElm],din spksPre[Channel],dout ISI[Channel], dout ISIpre[Channel],din2 elements[Channel]);
