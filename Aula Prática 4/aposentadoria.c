/* A redação atual do parágrafo 1.º do artigo 40 da Constituição Federal estabelece que um servidor público poderá se aposentar voluntariamente desde que tenha cumprido um tempo 
mínimo de exercício no serviço público e atenda uma das seguintes condições:

60 anos de idade e 35 de contribuição, se homem, e 55 anos de idade e 30 de contribuição, se mulher;
65 anos de idade, se homem, e 60 anos de idade, se mulher, não importando o tempo de contribuição.
Faça um programa que receba a idade, o tempo de contribuição e o sexo de um servidor público e imprima na tela se esse servidor pode se aposentar ou não. Utilize o caractere M para representar o sexo masculino e F para representar o sexo feminino.

Exemplo 1
Entrada:

60
35
M
Saida:

  Pode aposentar
Exemplo 2
Entrada:

60
30
M
Saída:

Nao pode aposentar */

#include <stdio.h>

void aposentadoria(int *idade, int *contribuicao, char *sexo){
	if (*sexo == 'M'){
		if(*idade >= 60 && *contribuicao >= 35){
			printf("\nPode aposentar");
		} else if (*idade >= 65){
			printf("\nPode aposentar");
		} else {
			printf("\nNao pode aposentar");
		}
	}
	else if (*sexo == 'F'){
		if (*idade >= 55 && *contribuicao >= 30 || *idade >= 60){
			printf("\nPode aposentar");
		} else {
			printf("Nao pode aposentar");
		}
	}
	else {
		printf ("\nExecute o codigo novamente e insira ou 'M' caso seja homem, ou 'F' caso seja mulher.");
	}
}

int main(){
	int idade, contribuicao;
	char sexo;
	scanf("%d", &idade);
	scanf("%d", &contribuicao);
	scanf(" %c", &sexo);
	
	aposentadoria(&idade, &contribuicao, &sexo);
	
	return 0;
}