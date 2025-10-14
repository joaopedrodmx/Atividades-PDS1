/* Escreva uma função chamada inverte que recebe como parâmetro um número positivo n (tipo unsigned int) e retorna o número n com os 
dígitos invertidos (tipo unsigned int). Por exemplo, se n = 1234, a função deve retornar o valor 4321.

Observação 1: O cabeçalho da função deve ser exatamente como especificado acima (tipo de retorno, nome da função, tipos e quantidade de 
parâmetros).

Observação 2: Você terá que implementar um módulo com a função descrita acima. Logo, você deverá submeter dois arquivos: um arquivo 
contendo a declaração das funções (arquivo problema510.h), e um arquivo contendo a definição das funções (arquivo problema510.c)

Observação 3: Você não precisa realizar a entrada e saída de dados (não precisa usar as funções scanf()e printf()).

Exemplo de execução do programa:

Digite: n
1234
4321 */

unsigned int inverte(unsigned int n){
	int invertido = 0;
	int msg;
	for (; n > 0; n/=10){
		msg = n % 10;
		invertido = invertido * 10 + msg;
	}
	return invertido;
}
		