/* Descrição:

Este exercício tem como objetivo praticar o uso de estruturas condicionais (if, else if, else) para realizar diferentes ações com base no valor de 
entrada. O foco é na lógica para verificar se um ano é bissexto (valor inteiro). 

Crie o código em C para fazer essa verificação no próprio main e imprima saída, conforme exemplo a seguir.

Exemplo de interação:

Digite um ano:2000
O ano de 2000 e bissexto.
Ou:

Digite um ano:2022
O ano de 2022 nao e bissexto. */

#include <stdio.h>

int main(){
	int ano;
	printf("Digite um ano: ");
	scanf("%d", &ano);
	if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0){
		printf("O ano de %d e bissexto", ano);
	} else{
		printf("O ano de %d nao e bissexto", ano);
	}
}
	
	
