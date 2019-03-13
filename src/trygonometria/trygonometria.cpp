#include "trygonometria.h"
#include <cmath>
#define _USE_MATH_DEFINES
#include <math.h>

double degreemath::sin(double degree){
double radian = degree*M_PI/180;
return std::sin(radian);
}

double degreemath::cos(double degree){
double radian = degree*M_PI/180;
return std::cos(radian);
}

double degreemath::tg(double degree){
double radian = degree*M_PI/180;
return std::tan(radian);
}

double degreemath::ctg(double degree){
double radian = degree*M_PI/180;
return 1/std::tan(radian);
}