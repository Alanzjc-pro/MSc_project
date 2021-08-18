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
#define size 23916


void estimate_FR(int spks[Channel],int update, int counts[Channel],int outputs[Channel]);
