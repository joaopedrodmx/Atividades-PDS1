/* Neste exercício, implemente uma função chamada soma que recebe um inteiro n e retorna a soma dos números entre 1 e n.

Esta questão pode ser feita de uma maneira mais simples utilizando a soma dos termos de uma progressão aritimética.
Porém, para fins de aprendizado, realize a atividade utilizando uma estrutura de repetição adequada.


Importante: Neste exercício o nome do seu arquivo fonte NÃO pode ser chamado de main.c, você terá que escolher outro nome de arquivo
para evitar problemas de compilação. E você só precisa de escrever a função solicitada, não é necessário escrever a função main.

O protótipo da função é:
int soma(int n); */

int soma(int n){
	int soma;
	for (int i = 1; i <= n; i++){
		soma += i;
	}
	return soma;
}