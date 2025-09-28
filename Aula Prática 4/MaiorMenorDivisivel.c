		/*Faça um programa que leia cinco números inteiros, um número por linha, e imprima: o maior valor informado, o menor valor informado e quantos números são divisíveis por 3.

Para ler o número inteiro, utilize a função scanf, o controle %d no string de formatação e passagem de parâmetro por referência utilizando ponteiros. Exemplo de leitura de um número inteiro:

int n;
scanf("%d", &n);*/

#include <stdio.h>

void lernumeros(int i, int *maior, int *menor, int *divisiveis){
	int n;
	scanf("%d", &n);
	
	if (i == 1){
		*maior = n;
		*menor = n;
	}
	else {
		*maior = (n > *maior ? n : *maior);
		*menor = (n < *menor ? n : *menor);
	}
	if (n % 3 == 0){
		(*divisiveis)++;
	}
	if (i < 5){
		lernumeros(i + 1, maior, menor, divisiveis);
	}
}
	
int main (){
	int maior, menor, divisiveis = 0;
	
	lernumeros(1, &maior, &menor, &divisiveis);
	
	printf("Maior: %d\n", maior);
	printf("Menor: %d\n", menor);
	printf("Quantidade de divisiveis por 3: %d\n", divisiveis);
	
	return 0;
}