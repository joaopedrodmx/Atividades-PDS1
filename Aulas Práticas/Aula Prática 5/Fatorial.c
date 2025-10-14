/* Escreva uma função chamada fatorial que recebe como parâmetro um número n (tipo int) e a função retorna o valor do fatorial de n, ou seja, n! 
(tipo unsigned long long). Por exemplo, o fatorial de 6 é 1 ×2 ×3 ×4 ×5 ×6 = 720.

Observação 1: O cabeçalho da função deve ser exatamente como especificado acima (tipo de retorno, nome da função, tipos e quantidade de 
parâmetros).

Observação 2: Você terá que implementar um módulo com a função descrita acima. Logo, você deverá submeter dois arquivos: 
um arquivo contendo a declaração das funções (arquivo problema56.h) e um arquivo contendo a definição das funções (arquivo problema56.c)

Observação 3: Você não precisa realizar a entrada e saída de dados (não precisa usar as funções scanf()e printf()). */

unsigned long long fatorial(int n){
	unsigned long long fatorial = 1;
	for (int i = 1; i <= n; i++){
		fatorial *= i;
	}
	return fatorial;
}