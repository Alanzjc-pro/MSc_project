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



void estimate_ISI_encode(int spks[Channel], int spksTime, int update[Channel],
		int ISIPre[Channel], int spksPre[Channel], int output[Channel]);
int reduce_range(int ISI);
