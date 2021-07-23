#include <stdio.h>
#include<stdlib.h>
#include <math.h>
#include<fstream>
#include<iostream>
#include <string.h>
#include <ap_fixed.h>

using namespace std;

#define Channel 2
#define col 5
#define size 48330
const double samplingRate= 24400;

const int Max_Char = 3000;

typedef ap_uint <1> din;
typedef ap_uint <20> din2;
typedef ap_uint <12> dout;


void estimate_ISI(int inputs[Channel], int rem[Channel],int output[Channel]);
