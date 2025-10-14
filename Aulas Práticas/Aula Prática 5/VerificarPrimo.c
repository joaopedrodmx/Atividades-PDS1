/* Neste exercício, implemente uma função chamada primo que recebe um inteiro n e retorne 1 caso o número seja primo, e 0 caso contrário.

Importante: Neste exercício o nome do seu arquivo fonte NÃO pode ser chamado de main.c, você terá que escolher outro nome de arquivo para 
evitar problemas de compilação. E você só precisa de escrever a função solicitada, não é necessário escrever a função main.

O protótipo da função é:
int primo(int n); */

/* Modo 1 de fazer */
	int primo(int n){
		int EhPrimo = 1;
		if(n == 2) return 1;
		if (n <= 1) return 0;
		for (int i = 2; i < n; i++){
			if (n % i == 0){
				EhPrimo = 0;
				break;
			}
		}
		return EhPrimo;
	}
	
/* Modo 2 de fazer */	
	
	int primo(int n){
    if(n == 2) return 1;
    if(n <= 1) return 0;
	for (int i = 2; i < n; i++){
		if (n % i == 0) return 0;
	}
	return 1;
}