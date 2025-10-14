/* Problema 5.7 [problema57.h e problema57.c]

Escreva uma função chamada soma_divisores que recebe como parâmetro um número n positivo (tipo unsigned int) e retorna a soma de todos os 
divisores de n (inclusive n) (tipo unsigned int). Ou seja, considere o intervalo [1,n].

Observação 1: O cabeçalho da função deve ser exatamente como especificado acima (tipo de retorno, nome da função, tipos e quantidade de 
parâmetros).

Observação 2: Você terá que implementar um módulo com a função descrita acima. Logo, você deverá submeter dois arquivos: um arquivo 
contendo a declaração das funções (arquivo problema57.h), e um arquivo contendo a definição das funções (arquivo problema57.c)

Observação 3: Você não precisa realizar a entrada e saída de dados (não precisa usar as funções scanf()e printf()). */

unsigned int soma_divisores(unsigned int n){
	unsigned int soma = 0;
	for (int i = 1; i <= n; i++){
		if(n % i == 0) soma += i;
	}
	return soma;
}
