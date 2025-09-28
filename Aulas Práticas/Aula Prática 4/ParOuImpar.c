/* Este exercício tem como objetivo praticar a criação e a chamada de funções em C, bem como o uso de estruturas condicionais (if, else if, else)
para realizar diferentes ações com base no valor de entrada. O foco é na lógica para verificar se um número é par ou ímpar e no tratamento de entradas 
inválidas (valor não pode ser menor ou igual a zero, senão deve exibir mensagem de erro, conforme apresentado no exemplo a seguir).

Crie a função void par_ou_impar, que recebe um valor inteiro e imprime (conforme exemplo a seguir) se número é par, ímpar ou mensagem de erro (ERRO: número invalido.).

Exemplo de interação:

Digite um numero inteiro: 10
10 e par.
Ou:

Digite um numero inteiro: 7
7 e impar.
Ou:

Digite um numero inteiro: 0
ERRO: numero invalido. */

#include <stdio.h>

void par_ou_impar(int n){
	if(n > 0){
		(n % 2 == 0 ? printf("%d e par.", n) : printf("%d e impar.", n));
	} else printf("ERRO: numero invalido");
}
	