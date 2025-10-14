/* Escreva uma função chamada mdc que recebe como parâmetros dois números (a e b) (tipos int) e retorna (tipo int) o máximo divisor comum dos 
dois números.

Observação 1: O cabeçalho da função deve ser exatamente como especificado acima (tipo de retorno, nome da função, tipos e quantidade de 
parâmetros).

Observação 2: Você terá que implementar um módulo com a função descrita acima. Logo, você deverá submeter dois arquivos: um arquivo contendo 
a declaração das funções (arquivo problema58.h), e um arquivo contendo a definição das funções (arquivo problema58.c)

Observação 3: Você não precisa realizar a entrada e saída de dados (não precisa usar as funções scanf()e printf()). */

int mdc(int a, int b){
	int mdc = 0;
	if (a < b){
		for (int i = 1; i <= a; i++){
			if ((a % i == 0) && (b % i == 0)) mdc = i;
		}
	}
	else{
		for (int i = 1; i <= b; i++){
			if ((a % i == 0) && (b % i == 0)) mdc = i;
		}
	}
	return mdc;
}