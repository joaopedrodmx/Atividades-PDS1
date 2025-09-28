#include <math.h>

float cauchy(float x){

	float f = 1/(M_PI*(1 + x * x));
	return f;
}