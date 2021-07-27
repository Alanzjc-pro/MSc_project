#include <stdio.h>
#include <math.h>
#include<fstream>
#include<iostream>
#include <string.h>
#include <ap_fixed.h>

using namespace std;

#define Channel 96
#define col 5
#define subChannel 24
const double samplingRate= 24400;
const int Max_Char = 3000;
#define size 23916

typedef ap_uint<1> din;
typedef ap_uint<8> dout;

void estimate_FR(int inputs[Channel],int counts[subChannel],int outputs[subChannel]);
