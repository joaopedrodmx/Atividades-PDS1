/*Um motorista que ultrapassa a velocidade máxima permitida está sujeito a uma infração média, grave ou gravíssima. Faça um programa que receba dois valores: a velocidade máxima de 
uma via e a velocidade registrada por um radar. Em seguida, o programa deve imprimir na tela se o motorista cometeu alguma infração. Considere que as multas são definidas conforme a tabela abaixo:

Excesso de velocidade sobre a máxima permitida	Natureza da infração
Menor ou igual a velocidade máxima	Sem Infração
Até 20%	Infração Média
Acima de 20% até 50%	Infração Grave
Acima de 50%	Infração Gravíssima

Não use acento ou cedilha em seu programa.

Exemplo
Entrada:

100
160
Saída:

Infracao Gravissima */

#include <stdio.h>

void excessovelocidade (int *max, int *vel){
	if (*vel <= *max){
		printf("Sem infracao");
	} else if(*vel <= 1.2 * *max){
		printf("Infracao Media");
	} else if(*vel > 1.2 * *max && *vel <= 1.5 * *max){
		printf("Infracao Grave");
	}
	else {
		printf("Infracao Gravissima");
	}
}

int main(){
	int max, vel;
	scanf("%d", &max);
	scanf("%d", &vel);
	
	excessovelocidade(&max, &vel);
	
	return 0;
}
