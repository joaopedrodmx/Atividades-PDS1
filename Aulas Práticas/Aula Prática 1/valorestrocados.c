#include <stdio.h>

void main() {
    float a = 3.14159, b = 2.71828;

	float valor_pi_real = a, valor_euler_real = b;
	b = valor_pi_real, a = valor_euler_real;

    printf("\nPi = %f", b);
    printf("\nEuler = %f", a);
}

//outra forma:

// #include <stdio.h>

// void main() {
//    float a = 3.14159, b = 2.71828;

//    float temp = a
//    a = b
//	  b = temp
//	  

//    printf("\nPi = %f", b);
//    printf("\nEuler = %f", a);
//  }