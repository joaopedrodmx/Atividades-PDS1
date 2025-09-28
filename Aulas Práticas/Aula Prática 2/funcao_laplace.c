#include <math.h>

float laplace (float x, float u, float b){
	float f = 1/(2*b)*exp((-fabs(x-u))/b);
	return f;
}