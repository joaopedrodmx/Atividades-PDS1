	/*Faça um programa que leia cinco números inteiros, um número por linha, e imprima: o maior valor informado, o menor valor informado e quantos números são divisíveis por 3.

Para ler o número inteiro, utilize a função scanf, o controle %d no string de formatação e passagem de parâmetro por referência utilizando ponteiros. Exemplo de leitura de um número inteiro:

int n;
scanf("%d", &n);*/

#include <stdio.h>

void lernumeros(int *maior, int *menor, int *divisiveis){ //Parâmetros da função - são ponteiros que receberão um endereço como conteúdo
	int i = 0; //Variável de contagem de rodagens do laço
	while (i < 5){ //Laço que executará o bloco de código abaixo enquanto i for menor do que 5
		int n; //Variável que armazenará o número digitado
		printf("Digite um numero inteiro: ");//Impressão solicitando pelo número
		scanf("%d", &n);//Escaneia o valor digitado e o armazena no endereço da variável n
		if (i == 0){//Se essa for a primeira rodagem do While
			*maior = n; //O valor armazenado no endereço apontado pelo ponteiro maior (endereço da variável maior da função main) será igual a n
			*menor = n; //O valor armazenado no endereço apontado pelo ponteiro menor (endereço da variável menor da função main) será igual a n
		}else{// Se não for a primeira rodagem do laço
			*maior = (n > *maior ? n : *maior); //(if compacto) valor em *maior será igual a n se n > valor lá armazenado, e continurá igual caso seja menor
			*menor = (n < *menor ? n : *menor); //if compacto) valor em *menor será igual a n se n < valor lá armazenado, e continurá igual caso seja maior
		}
		if (n % 3 == 0){ //se n for divisivel por 3
			(*divisiveis)++;//aumentar em 1 o valor armazenado no endereço apontado pelo ponteiro
		}
		i++;//ao final do laço aumentar i em uma unidade
	}
}

int main(){ //Função principal
	int maior, menor, divisiveis = 0;//Variáveis inteiras - são atribuidas o valor zero para garantir que ao receberem um valor futuro não haja nenhum valor já armazenado no endereço de memória que ocupam. Isso faz diferença para a variável divisiveis, por exemplo, já que a ela não é atribuido nenhum outro valor, mas sim acrescentada de 1 - se for o caso.
	lernumeros(&maior, &menor, &divisiveis);//Chama a função que lê os números
	printf("Maior numero: %d\nMenor numero: %d\nQuantidade de numeros divisiveis por 3: %d\n", maior, menor, divisiveis);//Impressão
	
	return 0;
}
	