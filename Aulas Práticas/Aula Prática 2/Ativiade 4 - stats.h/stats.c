#include <math.h>

float cauchy(float x){

	float f = 1/(M_PI*(1 + x * x));
	return f;
}

float gumbel(float x, float u, float b){
	float z = (x - u)/b, f;
	f = 1/b * exp(-(z+exp(-z)));
	return f;
}

float laplace (float x, float u, float b){
	float f = 1/(2*b)*exp((-fabs(x-u))/b);
	return f;
}