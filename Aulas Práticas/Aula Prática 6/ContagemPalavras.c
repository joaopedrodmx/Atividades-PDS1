/* A função fgets() em C é usada para ler uma linha de texto de uma entrada (como o teclado) e armazená-la em uma string.

📌 Sintaxe:
fgets(nome_da_string, tamanho, stdin);
nome_da_string: onde o texto lido será armazenado.

tamanho: número máximo de caracteres a serem lidos (incluindo o caractere \0 de final de string).

stdin: indica que a entrada vem do teclado (entrada padrão).

✅ Características importantes:
Lê até (tamanho - 1) caracteres ou até encontrar um \n (quebra de linha).

Inclui o \n na string se ele couber.

Sempre termina a string com \0.

Exercício:
Neste exercício, faça um programa que leia uma linha inteira de no máximo 50 caracteres da entrada e imprima quantas palavras 
foram lidas.

Não é necessário ser uma palavra que existe em português para ser contabilizada, basta estar separada das demais por espaços em 
branco.

Observação: Neste VPL você vai ter que escrever a sua própria função main. Neste caso, a função scanf não é a mais adequada, pois 
ela só receberá a primeira palavra. Portanto, para realizar a leitura, utilize a função fgets.

Dica: Lembre de calcular de forma correta o tamanho da string que foi capturada pela entrada do usuario. */

#include <stdio.h>
#define TAM 51

int main(){
	char str[TAM];
	int n = 1;
	fgets(str, TAM, stdin);
	for (int i=0; str[i] != '\0';i++){
		if(str[i] == ' ') n++;
	}
	printf("numero de palavras eh: %d\n", n);
	return 0;
}