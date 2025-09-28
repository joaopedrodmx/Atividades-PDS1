/* Escreva um programa em C que imprima na tela o menor e o maior valor (nessa ordem) que podem ser representados por tipos inteiros, utilizando os modificadores de tipo. Exemplo de saida:

menor: XXXX
maior: YYYY
Onde XXXX e YYYY são os valores a serem escritos na tela conforme solicitado.
Você deve utilizar os seguintes modificadores, conforme apropriado:
short, int, long, long long e unsigned. */

#include <stdio.h>

int main (){
	long long int menor = (long long)1 << 63 ; // Faz primeiro a conversão explícita de tipo do literal int (32 bits) para long long (64 bits) e, então, desloca 1 para a última casa de memória, ativando o bit de sinal. Então, gera-se o menor int de 64 bits possível.
	unsigned long long int maior = ~(unsigned long long)0; //Typecasting do inteiro 0 para unsigned long long - 64 casas sem bit de sinal -, depois ocorre a negação bit-a-bit de todos os 64 bits desse valor. Assim, é gerado o maior int de 64 bits possível.
	printf("menor: %lld \nmaior: %llu", menor, maior); //Imprime o menor e o maior inteiro de 64 bits, respectivamente.

	return 0;
}

/* Outra forma: 

#include <stdio.h>

int main (){
	long long int menor = 1LL << 63 ; // Ao invés de fazer o typecastin, o literal já é gerado como um long long.
	unsigned long long int maior = ~0ULL; // Ao invés de fazer a conversão explícita de tipo o literal já é identificado como um unsigned long long.
	printf("menor: %lld \nmaior: %llu", menor, maior); //Imprime o menor e o maior inteiro de 64 bits, respectivamente.

	return 0;
}
*/