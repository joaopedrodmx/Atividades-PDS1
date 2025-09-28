#include "minhas_funcoes.h"

void soma1 (int *end){
	*end = *end + 1;
}

void troca(float *end_valor1, float *end_valor2){ //parâmetros declarados como ponteiros que armazenarão um endereço que contém um dado do tipo float.
	float intermediario; // variável intermediária do tipo float que será utilziada como ferramenta para trocar os valores dos dois parâmetros.
	intermediario = *end_valor2; // variável intermediária armazena o valor do tipo float contido no endereço para o qual end_valor2 aponta.
	*end_valor2 = *end_valor1; // conteúdo do endereço para o qual end_valor1 aponta é armazenado no endereço para qual end_valor2 aponta, tal conteúdo é um valor do tipo float.
	*end_valor1 = intermediario; /* conteúdo inicial que estava armazenado no endereço apontado por end_valor2, que depois foi atribuído à variável intermediario, agora está
	sendo armazenado no endereço para qual end_valor1 aponta */
}

int ddd(long long numero){ //protótipo da função e seu parâmetro
	int ddd = numero/1000000000; // Divisão do número por 9 casas decimais, restando somente as duas últimas, relacionadas ao DDD.
	return ddd; //  Retorno da função = número correspondente ao DDD.
}