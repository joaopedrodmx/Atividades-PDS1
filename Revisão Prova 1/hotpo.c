/* Implemente a função hotpo(n) (Half Or Triple Plus One), que recebe um número inteiro positivo n como parâmetro e retorna a sua transformação
 hotpo, que se dá da seguinte maneira:

Se n for par, hotpo(n) o divide por 2;

Se n for ímpar, hotpo(n) o multiplica por 3 e soma 1.

Exemplos:

Se n = 20, hotpo(n) retorna 10

Se n = 5, hotpo(n) retorna 16

A sua função deve ter o seguinte protótipo:

int hotpo(unsigned int n); */

int hotpo(unsigned int n){
	return (n & 2 == 0 ? n/2 : n*3 + 1);
}