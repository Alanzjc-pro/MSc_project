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
#define maxChar 10000

typedef ap_ufixed<19,6> din2;
typedef ap_uint<8> din;
typedef ap_ufixed<8,8> dout;

void estimate_FR(din2 spksTime[Channel][maxElm],din elements[Channel],dout FR[Channel]);
