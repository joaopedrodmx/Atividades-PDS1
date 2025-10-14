/* Nesse exercício, você precisará desenvolver um algorítimo que leia a altura de 15 pessoas. Esse programa deve calcular a menor altura do 
grupo e a maior altura do grupo e imprimir ambas.


Exemplo: 
Entradas:
10 15 27 31 45 56 11 49 13 9 88 67 54 21 18
Saída:
Maior: 88
Menor: 9 */

#include <stdio.h>

void maiorMenorAltura(int *maior, int *menor){
	int altura;
	scanf("%d", &altura);
	*maior = altura;
	*menor = altura;
	for (int i = 2; i <= 15; i++){
		scanf("%d", &altura);
		if(altura > *maior) *maior = altura;
		if(altura < *menor) *menor = altura;
	}
}

int main(){
	int maior, menor;
	printf("Digite 15 alturas:\n");
	maiorMenorAltura(&maior, &menor);
	printf("maior: %.d\nMenor: %.d", maior, menor);
	
	return 0;
}