/* Neste exercício, você deve usar as operações de deslocamento de bits << e/ou >>.

Implemente uma função chamada fast_pow_2 que recebe um número inteiro (expoente) e retorna um valor do tipo unsigned long long, representando a potência de dois correspondente.

Por exemplo, se o expoente for 7, a função deve retornar 2 elevado a 7.

O tipo unsigned long long é um inteiro sem sinal de 64 bits. Você pode usá-lo como um unsigned int, mas com um alcance muito maior.

Importante: Neste exercício o nome do seu arquivo fonte NÃO pode ser chamado de main.c, você terá que escolher outro nome de arquivo para evitar problemas de compilação. E você só precisa de escrever a função solicitada, não é necessário escrever a função main.

Protótipo da função:

unsigned long long fast_pow_2(int expoente); */

unsigned long long fast_pow_2(int expoente){ // funcao que retornará um valor do tipo ULL e tem como parâmetro um inteiro.
	unsigned long long potencia = 1ULL << expoente; /* Variável do tipo unsigned long long armazenará o valor gerado pelo deslocamento de x bits para a
	esquerda - a quantidade de bits deslocada será definida pelo valor da variável expoente. O literal 1 é definido desde já como ULL para que ele 
	ocupe 64 bits e seja possível fazer deslocamentos maiores do que 32 casas binárias sem que ocorra um comportamento indefinido. Assim, a cada deslocamento para
	esquerda será como se ocorresse uma multiplicação por 2 e a quantidade de vezes que isso ocorre é definida pelo valor de "expoente", gerando, então, o efeito de potencia. */
	return potencia;
}
	