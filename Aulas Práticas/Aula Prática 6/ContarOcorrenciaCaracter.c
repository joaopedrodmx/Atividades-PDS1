/* Exercício:
Neste exercício, implemente uma função chamada contaocorrencias que recebe, nesta ordem: um ponteiro para uma string A, o tamanho de A e um caracter c. A função retorna um inteiro. 

Você vai precisar contar o número de ocorrências do caracter c, e retornar esse numero. Se o caracter não se encontra na string, você vai precisar retornar 0.

Por exemplo:

Considerando a string A: "paralelepipedo" e o caracter c: "a", o resultado é: 2;
Considerando a string A: "parale lepipe d o" e o caracter c: " ", o resultado é: 3;
Considerando a string A: "parale lepipe d o" e o caracter c: "Z", o resultado é: 0;
Observação: Você não precisa realizar a entrada e saída de dados (não precisa usar a função scanf()). Também não é necessário criar a função main. */

#include <stdio.h>
#define tamanho 1000

int contaocorrencias (char str[], int size, char c){
	int qtd = 0;
	for (int i = 0; str[i] != '\n'; i++){
		if (str[i] == c) qtd++;
	}
	return qtd;
}

int main(){
	char str[tamanho], c;
	printf("Digite sua string: \n");
	fgets(str, tamanho, stdin);
	printf("Digite seu caractere: ");
	scanf(" %c", &c);
	printf("A ocorrencia desse caractere nessa string e %d vezes\n", contaocorrencias(str, tamanho, c));
	return 0;
}