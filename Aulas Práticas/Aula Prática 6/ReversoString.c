/* A inversão de uma string em C significa reorganizar seus caracteres na ordem contrária — ou seja, o primeiro vira o 
último, o segundo vira o penúltimo, e assim por diante.

Exercício:
Faça um programa que lê uma string de até 50 caracteres e que imprima a string lida, porém invertida. Por exemplo:

Entrada: string

Saída: gnirts

Observação: Neste VPL você vai ter que escrever a sua própria função main. Para realizar a leitura da string, utilize a 
função fgets. */

/* #include <stdio.h>
#define TAM 51
int main(){
	printf("Digite sua string abaixo:\n");
	char str[TAM], strIn[TAM];
	fgets(str, TAM, stdin);
	int i = 0, n = 0; //qtd de caracteres da primeira string
	while (str[i] != '\0'){
		i++;
	}
	n = i - 2;
	int j = 0;
	for(j; j <= i - 2; j++){
		strIn[j] = str[n];
		n--;
	}
	strIn[j] = '\0';
	printf("String digitada: %sString invertida: %s\n", str, strIn);
	return 0;
} */

#include <stdio.h>
#define TAM 51

int main(){
    char str[TAM];
    printf("Digite sua string abaixo:\n");
    fgets(str, TAM, stdin);

    int i = 0;
    // 1. Encontre o fim da string (como você já fez)
    while (str[i] != '\0' && str[i] != '\n'){
        i++;
    }
    int fim = i - 1; //Índice do último caractere útil
    int inicio = 0;

    // 2. Crie um laço que troque os caracteres das posições 'inicio' e 'fim'
    //    e mova os índices um em direção ao outro.
    while (inicio < fim){
		    char intermed = str[inicio];
		    str[inicio] = str [fim];
		    str[fim] = intermed;
		    inicio++;
		    fim--;
		}

    printf("String invertida: %s\n", str);
    return 0;
}