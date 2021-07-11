#include <stdio.h>
#include <math.h>
#include<fstream>
#include<iostream>
#include <vector>
#include <string.h>

using namespace std;

#define Channel 96
#define col 50
const int Max_Char = 10000;

typedef vector< vector<double> > din;
typedef double din_t;
typedef double dout;

void estimate_ISI(din spksTime,double spksPre[Channel -1],dout ISI[col-1][Channel-1], double ISIpre[Channel-1],int count);

