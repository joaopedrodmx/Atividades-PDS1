/* Dadas duas strings A e B, B é substring de A se é possível remover alguma quantidade de caracteres (possivelmente 0) 
do começo ou do final de A de modo que a string resultante seja B. Por exemplo:

- "str" é substring de "string" (removemos 0 caracteres do início e 3 do final)

- "def" é substring de "abcdefg"

- "abc" não é substring de "abac"

Exercício:
Neste exercício, faça um programa que leia duas string A e B com menos de 50 caracteres e verifique se B é substring de A.

A saida do seu programa deve ser:

Em caso de que B seja substring de A, imprima “E substring”
e, em caso negativo, “Nao e substring”.
Observação: Neste VPL você vai ter que escrever a sua própria função main. Para realizar a leitura dos dados, 
utilize a função fgets. */

#include <stdio.h>
#define TAM 49

int main(){
	char strA[TAM], strB[TAM];
	int substr = 0;
	printf("Digite a string A: ");
	fgets(strA, TAM, stdin);
	printf("Digite a substring B: ");
	fgets(strB, TAM, stdin);
	for(int i = 0; strA[i] != '\n'; i++){
		int tentativa = 0;
		if(strB[0] == strA[i]){
			tentativa = 1;
			for(int j = 0; strB[j] != '\n'; j++){
				if(strB[j] != strA[i + j]) {
					tentativa = 0;
					break;
				}	
			}
		}
		if (tentativa == 1){
			substr = tentativa;
			break;
		}
	}
	if (substr == 1) printf("E substring\n");
	else printf("Nao e substring\n");
	return 0;
}