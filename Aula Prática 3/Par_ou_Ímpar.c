/* Escreva uma função que retorne 1 se o número for par, ou 0 caso contrário.

Importante: Neste exercício o nome do seu arquivo fonte NÃO pode ser chamado de main.c, você terá que escolher outro nome de arquivo para evitar problemas de compilação. E você só precisa de escrever a função solicitada, não é necessário escrever a função main. */

int parOuImpar(unsigned int number){ // Função e seus parâmetros.
	number = ~number; // valor de number é negado bit-a-bit, invertendo cada um deles, e depois é atribuído a "number".
	number &= 1; // Operação de 'AND' é feita a cada um dos bits e valor final é atribuído a number (mantém só o LSB inalterado).
	return number; // retorno da função.
}

/* Como funciona a função:
	1 - Cada um dos bits de number é negado. Então, se for par, o bit menos significativo (LSB) será, a partir de agora, 1 e, se for ímpar, o LSB será 0.
	2 - Em seguida 'number & 1' zera todos os demais bits e mantém somente o LSB inalterado. Resultando em 1 se 'number' era par e 0 se 'number' era ímpar.
	Assim, o resultado final é armazenado em 'number' e é retornado pela função. */
