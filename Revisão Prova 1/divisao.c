/* Escreva um procedimento de nome divisao que recebe, como parâmetros, dois endereços de memória de variáveis inteiras end_var1 e end_var2. 
A função deve fazer a divisao do inteiro armazenado em end_var1 pelo inteiro armazenado em end_var2. Depois disso, deve armazenar em 
end_var1 o valor da divisão e em end_var2 o resto da divisão.

void divisao(int* end_var1, int* end_var2);

Não é necessário escrever a função main, apenas a função acima. */

void divisao(int *end_var1, int *end_var2){
	int divisao = *end_var1/(*end_var2);
	int resto = *end_var1 % *end_var2;
	*end_var1 = divisao;
	*end_var2 = resto;
}