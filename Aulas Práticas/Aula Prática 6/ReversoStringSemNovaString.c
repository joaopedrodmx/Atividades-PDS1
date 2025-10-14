#include <stdio.h>
#define TAM 51

int main(){
    char str[TAM];
    printf("Digite sua string abaixo:\n");
    fgets(str, TAM, stdin);

    int i = 0;
    // Encontrar o fim da string
    while (str[i] != '\0' && str[i] != '\n'){
        i++;
    }
    int fim = i - 1; //Índice do último caractere útil
    int inicio = 0;

    // Laço que troca os caracteres das posições 'inicio' e 'fim' e move os índices um em direção ao outro.
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