/* Escreva uma função chamada soma_digitos_pares que recebe como parâmetro um número positivo n (tipo unsigned int) e retorna a soma dos 
dígitos pares do número n (tipo int).

Observação 1: O cabeçalho da função deve ser exatamente como especificado acima (tipo de retorno, nome da função, tipos e quantidade de 
parâmetros).

Observação 2: Você terá que implementar um módulo com a função descrita acima. Logo, você deverá submeter dois arquivos: um arquivo 
contendo a declaração das funções (arquivo problem5a9.h), e um arquivo contendo a definição das funções (arquivo problema59.c)

Observação 3: Você não precisa realizar a entrada e saída de dados (não precisa usar as funções scanf()e printf()).

Exemplo de execução do programa:
Digite: n
124
6 */

int soma_digitos_pares (unsigned int n){
	int soma = 0, msg;
	while(n > 0){
		msg = n % 10;
		if(msg % 2 == 0) soma += msg;
		n /= 10;
	}
	return soma;
}