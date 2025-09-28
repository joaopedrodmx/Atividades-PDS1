#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float rendimento(int x, int meses){
	float valorfuturo = (float)x*pow(1.01, meses);
	return valorfuturo;
}	

int main (){
	int vi = 100,tempo;
	float vf;
	printf("\n\n Digite quantos MESES o dinheiro vai estar investido: ");
	scanf("%d", &tempo);
	vf = rendimento(vi,tempo);
	printf("\nSeu montante apos %d meses sera: R$ %.2f \n", tempo, vf);
	return 0;
}

/* eu investi 100 reais em um juros de rendimento mensal de 1%, 
qual será o meu montante daqui a um ano? */