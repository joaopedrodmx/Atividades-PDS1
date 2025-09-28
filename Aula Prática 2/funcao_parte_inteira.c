#include <stdio.h>

float parteInteira(float x){
    float pi = (int)x;
    return pi;
}

/* eu não poderia fazer da seguinte forma?

#include <stdio.h>

float parteInteira(float x){
    int pi = x;
    return pi;
}

por que no caso acima o valor de "pi" está sendo representado como ponto flutuante se eu o tipei como um inteiro?

*/