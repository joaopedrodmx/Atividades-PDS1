/* Objetivo:
Criar um programa em C que vai ler uma sequencia de elementos da entrada do usuário, e você precisará imprimir os elementos na ordem inversa.

Exercício:
Neste exercício, implemente um programa para:

Inicialmente ler da entrada do usuário um número inteiro N, que representa o tamanho de um vetor;
Após isso vai ter que capturar esses N elementos (também inteiros);
Imprimir os numeros na ordem inversa.
Por exemplo:

Tamanho 3, serão passados então 3 números: 1 3 20 e você vai precisar imprimir 20 3 1
Tamanho 10, serão passados então 10 números: 1 2 3 4 5 6 7 8 9 0 e você vai precisar imprimir 0 9 8 7 6 5 4 3 2 1
Observação: Neste VPL você vai ter que escrever a sua própria função main, e a sua própria entrada e saída de dados usando 
scanf() e printf().

Dica: Use variáveis indexadas como vimos na sala aula. */

#include <stdio.h>

void invertevetor(int vet[], int n){
	int i;
	for(i=0; i < n/2; i++){
		int aux = vet[i];
		vet[i] = vet[n-(i+1)];
		vet[n-(i+1)] = aux;
	}
}
int main(){
	int tam, i;
	printf("Digite o tamanho do vetor: \n");
	scanf("%d", &tam);
	int vet[tam];
	printf("Digite os %d números: \n", tam);
	for (i=0; i<tam; i++)
		scanf("%d", &vet[i]);
	printf("Vetor digitado:\n");
	for(i=0; i<tam; i++)
		printf("%d\n", vet[i]);
	invertevetor(vet, tam);
	printf("Vetor invertido:\n");
	for(i=0; i<tam; i++)
		printf("%d\n", vet[i]);
	return 0;
}