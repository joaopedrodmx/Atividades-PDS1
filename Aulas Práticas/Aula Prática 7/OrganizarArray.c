/* Objetivo:
Criar um programa em C que vai ler um vetor de números inteiros (positivos e negativos) da entrada do usuário. 
Você precisará organizar este vetor de maior a menor e imprimir os números separados por espaços.

Exercício:
Neste exercício você vai precisar de criar um programa que receba como entrada o tamanho do vector (um numero inteiro) e 
os valores deste vetor. Você vai precisar imprimir os elementos deste vetor em ordem decrescente (maior a menor). 
Os elementos devem estão separados por um espaço simples menos o último elemento.

Por exemplo:

Entrada	Saída
// qtd de elementos
10
79 52 45 40 31 20 10 6 2 0
20 2 10 6 52 31 0 45 79 40

Observação: Neste VPL você vai ter que escrever a sua própria função main, e a sua própria entrada e saída de dados usando 
scanf() e printf(). Para a saída, deve se imprimir os valores separados por um espaço simples.

Dica: Use variáveis indexadas como vimos na sala aula. */

#include <stdio.h>

//Função que conta a quantidade de números menores do que o elemento em questão - o que será a posição (índice) desse elemento no vetor final
int contaMenores(int n, int aux[], int i){
	int count = 0;
	for (int j = 0; j < n; j++)
		if (aux[i] > aux[j]) count++;
	return count;
}

void ordenaVetor(int n, int v[]){
	int aux[n], i, pos[n];
	for (i = 0; i < n; i++)
		aux[i] = v[i]; //geração de uma cópia do vetor v para realizar a comparação entre os números, já que o vetor original terá seus elementos alterados conforme for reordenado
	for (i = 0; i < n; i++){
		pos[i] = contaMenores(n, aux, i);
		v[pos[i]] = aux[i]; //coloca o elemento em questão na sua devida posição no vetor final
	}
}

int main(){
	int n, i;
	printf("Tamanho vetor: ");
	scanf("%d", &n);
	int v[n];
	printf("%d elementos do vetor:\n", n);
	for (i = 0; i < n; i++)
		scanf("%d", &v[i]);
	ordenaVetor(n, v); // Função que ordenará o vetor
	printf("Vetor ordenado: ");
	for (i = 0; i < n; i++){
		if (i == 0) printf("%d", v[i]);
		else printf(" %d", v[i]);
	}
	printf("\n");
	return 0;
}