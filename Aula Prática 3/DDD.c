/*Escreva uma função chamada ddd que recebe como parâmetro um número de telefone composto por 11 dígitos (sendo os dois primeiros o código de área – DDD – e os nove (9) restantes o número de telefone) e retorna o DDD.

Por exemplo, para o número 31991231234, a função deve retornar 31.

Importante: Neste exercício o nome do seu arquivo fonte NÃO pode ser chamado de main.c, você terá que escolher outro nome de arquivo para evitar problemas de compilação. E você só precisa de escrever a função solicitada, não é necessário escrever a função main.

Protótipo:

int ddd(_________________);
Complete o protótipo e implemente a função. */

int ddd(long long numero){ //protótipo da função e seu parâmetro
	int ddd = numero/1000000000; // Divisão do número por 9 casas decimais, restando somente as duas últimas, relacionadas ao DDD.
	return ddd; //  Retorno da função = número correspondente ao DDD.
}