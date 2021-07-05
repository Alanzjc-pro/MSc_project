#include <stdio.h>
#include <stdint.h>
#include <iostream>
#include <math.h>

#define N 200
#define M 75

typedef double din;
typedef double dout;
typedef int din_coeff;

void estimate_FR(din spksTime, dout *FR, dout *c,din_coeff Num, bool *finish);
