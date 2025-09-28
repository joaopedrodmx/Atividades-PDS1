/* Escreva uma função chamada testaSoma1 que recebe um inteiro x como parâmetro e incrementa seu valor em 1 utilizando a função soma1, 
implementada no exercício anterior.

Considere que a função soma1 já está corretamente implementada no módulo minhas_funcoes.h, portanto, não é necessário reescrevê-la, apenas incluir o módulo com:

#include "minhas_funcoes.h"
A função testaSoma1 deve retornar o valor de x após a chamada de soma1.

Importante: Neste exercício o nome do seu arquivo fonte NÃO pode ser chamado de main.c, você terá que escolher outro nome de arquivo para evitar problemas de 
compilação. E você só precisa de escrever a função solicitada, não é necessário escrever a função main.

O protótipo da função é:

int testaSoma1(int x); */

#include "minhas_funcoes.h"

int testaSoma1 (int x){
	soma1(&x);
	return x;
}
