/* Escreva um procedimento de nome aumentaOsDiferentes que recebe, como parâmetros, dois endereços de memória de variáveis inteiras end_var1 e end_var2. 
A função deve verificar se estes dois endereços de memória possuem o mesmo valor:
  - Caso possuam o mesmo valor, armazene 0 em ambos endereços de memória;
  - Caso contrário, armazene a soma dos dois valores em ambos endereços de memória.


void aumentaOsDiferentes(int* end_var1, int* end_var2);

Não é necessário escrever a função main, apenas a função acima.*/

void aumentaOsDiferentes(int *a, int *b){
	int intermediaria;
	if(*a == *b){
		*a = 0;
		*b = 0;
	} else{
		intermediaria = *a;
		*a += *b;
		*b += intermediaria;
	}
}