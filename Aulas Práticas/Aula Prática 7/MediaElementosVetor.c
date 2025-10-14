/* Neste exercício, implemente uma função chamada calculamedia que recebe, nesta ordem: o numero n de elementos do vetor 
(valor inteiro) e um vetor de números de ponto flutuante simples v. A função retorna um número de ponto flutuante simples com a 
média desses valores. 

Por exemplo:

Vetor A:
1 2 3 4

A função deve retornar 2.5

Vetor A:
100 2000.3 400 55 -1.0 

A função deve retornar 510.86
Observação: Você não precisa realizar a entrada e saída de dados (não precisa usar a função scanf()). Também não é necessário criar a função main.
*/

#include <stdio.h>

float calculamedia(int n, float vet[]){
	float soma = 0;
	for (int i = 0; i < n; i++){
		soma += vet[i];
	}
	return soma/n;
}

int main(){
	int  n;
	printf("Digite o número de elementos do seu vetor: ");
	scanf("%d", &n);
	float vet[n];
	printf("\nDigite os %d elementos do seu vetor: \n", n);
	for (int i = 0; i < n; i++){
		scanf("%f", &vet[i]);
	}
	printf("\nA média dos elementos desse vetor é: %f\n", calculamedia(n, vet));
	
	return 0;
}
