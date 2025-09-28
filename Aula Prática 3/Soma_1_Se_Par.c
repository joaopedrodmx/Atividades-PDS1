/* Escreva uma função que transforme um número par no próximo número ímpar e, caso o número já seja ímpar, o mantenha inalterado.

Exemplos:

Para o número 4, a função deve retornar 5.

Para o número 5, a função deve retornar 5.

Restrição: sua função não deve usar operadores condicionais (como if, ?:, switch, etc).

Importante: Neste exercício o nome do seu arquivo fonte NÃO pode ser chamado de main.c, você terá que escolher outro nome de arquivo para evitar problemas de compilação. E você só precisa de escrever a função solicitada, não é necessário escrever a função main.

Protótipo da função:

unsigned int soma1SePar(unsigned int number) */

unsigned int soma1SePar(unsigned int number){ // declaração da função e de seus parâmetros
	number |= 1; // operação 'OR' bit a bit entre o valor da variavel number e o literal 1 sendo atribuída a "number" - todos os bits do valor de number são comparados com os bits de 1 pela operação OR.
	return number; // retorno da função
}
/* Como a função somará 1 se for par e manterá o número igual se for ímpar:
   - Se 'number' for par, o LSB (bit menos significativo) é 0. 
     Ao fazer 'number | 1', todos os outros bits permanecem iguais e o LSB se torna 1, 
     aumentando o número em 1.
   - Se 'number' for ímpar, o LSB já é 1. 
     A operação 'OR' manterá todos os bits iguais, já que o LSB de 'number' já é 1, portanto o número permanece inalterado.
*/