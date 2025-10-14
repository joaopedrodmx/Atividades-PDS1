/* Objetivo:
Criar um programa em C que calcula a média móvel simples de um vetor de números reais, utilizando uma janela de tamanho fixo.

Exercício:
Neste exercício, você deve criar uma função que recebe quatro parâmetros:  

- o tamanho do vetor de entrada N,  
- o vetor v contendo os valores originais,  
- o tamanho da janela k,  
- e o vetor m, que deve ser preenchido com os valores da média móvel.  

A média móvel simples de ordem k é calculada somando k elementos consecutivos e dividindo o resultado por k.  
Matematicamente, para um vetor v, temos:

m_i = \frac{v_i + v_{i+1} + \dots + v_{i+k-1}}{k}

para todo  i  tal que  i + k - 1 < N .

O vetor de saída m terá, portanto,  N - k + 1  elementos válidos.
Exemplo:
Se o vetor original é [10, 20, 30, 40, 50] e a janela k = 3, as médias móveis são:  

m_0 = 20.0, \quad m_1 = 30.0, \quad m_2 = 40.0

Observação:
 
Neste VPL, você não precisa escrever sua função main.  O protótipo da sua função deve ser: */

void mediaMovel(int N, float v[], int k, float m[]){
	for (int i = 0; i < N - k + 1; i++){
		float soma = 0, media = 0;
		for (int j = 0; i + j <= i + k - 1; j++){
		soma += v[i+j];
		media = soma/k;
		m[i] = media;
		}
	}
}