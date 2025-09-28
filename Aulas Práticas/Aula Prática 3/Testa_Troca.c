/* Escreva uma função chamada testaTroca que recebe dois valores do tipo float, x e y, como parâmetros e troca seus valores utilizando a função troca, implementada no exercício anterior.

Considere que a função troca já está corretamente implementada no módulo minhas_funcoes.h, portanto, não é necessário reescrevê-la, apenas incluir o módulo com:

#include "minhas_funcoes.h"
A função testaTroca deve imprimir os valores de x e y (nesta ordem) após a chamada da função troca. Imprima os valores com 4 casas decimais. Não se esqueça de incluir a biblioteca stdio.h.

Importante: Neste exercício o nome do seu arquivo fonte NÃO pode ser chamado de main.c, você terá que escolher outro nome de arquivo para evitar problemas de compilação. E você só precisa de escrever a função solicitada, não é necessário escrever a função main.

O protótipo da função é:

void testaTroca(float x, float y); */

#include "minhas_funcoes.h"

void testaTroca(float x, float y){ // usa como parametros as variaveis x e y do tipo float
	troca(&x, &y); // envia o enderecos dessas variaveis para a funcao de troca ja implementada
	printf("%.4f %.4f", x, y); // imprime os valores de x e y apos a troca na funcao
}