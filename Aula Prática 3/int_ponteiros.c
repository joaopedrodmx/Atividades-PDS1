/*

Escreva uma função chamada soma1 que recebe como parâmetro um ponteiro para inteiro (ou seja, um endereço de memória que armazena um valor do tipo int) e 
soma 1 ao valor contido nesse endereço. A função deve ser do tipo void.

O protótipo da função é:

void soma1(______________);
Complete o protótipo e implemente a função.

Importante: Neste exercício o nome do seu arquivo fonte NÃO pode ser chamado de main.c, você terá que escolher outro nome de arquivo 
para evitar problemas de compilação. E você só precisa de escrever a função solicitada, não é necessário escrever a função main.

*/

void soma1 (int *end){
	*end = *end + 1;
}