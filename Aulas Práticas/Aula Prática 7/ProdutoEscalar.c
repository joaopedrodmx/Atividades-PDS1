/* Objetivo:
Criar um programa em C que calcula e retorna o produto escalar de dois vetores de mesmo tamanho.

Exercício:
Neste exercício você deve criar uma função que recebe três parâmetros: o tamanho dos vetores e dois vetores do tipo float, 
ambos declarados com valor indefinido. Para calcular o produto escalar, ou produto interno, você deve multiplicar os elementos na 
mesma posição e depois somá-los. Para vetores A e B, a fórmula é dada por:

 P = \sum_{i=1}^N A_i \times B_i

Observação: Neste VPL você não precisa escrever sua função main. O protótipo da sua função deve ser:

float produtoEscalar(int N, float A[], float B[]); */

float produtoEscalar(int n, float A[], float B[]){
	float P[n], soma = 0;
	for (int i = 0; i < n; i++)
		P[i] = A[i] * B[i];
	for (int i = 0; i < n; i++)
		soma += P[i];
	return soma;
}