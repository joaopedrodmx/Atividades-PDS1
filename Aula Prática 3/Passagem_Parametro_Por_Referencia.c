/*
Escreva uma função chamada troca que recebe como parâmetros dois ponteiros (variáveis que armazenam endereços de memória) para float, denominados end_valor1 e 
end_valor2.

A função deve trocar os valores armazenados nos endereços apontados por essas variáveis. Ou seja, o conteúdo do endereço end_valor1 deve ser armazenado em 
end_valor2, e o conteúdo de end_valor2 deve ser armazenado em end_valor1.

Importante: Neste exercício o nome do seu arquivo fonte NÃO pode ser chamado de main.c, você terá que escolher outro nome de arquivo para evitar problemas de 
compilação. E você só precisa de escrever a função solicitada, não é necessário escrever a função main.

O protótipo da função é:

void troca(_____________, ___________);
Complete o protótipo e implemente a função

*/

void troca(float *end_valor1, float *end_valor2){ //parâmetros declarados como ponteiros que armazenarão um endereço que contém um dado do tipo float.
	float intermediario; // variável intermediária do tipo float que será utilziada como ferramenta para trocar os valores dos dois parâmetros.
	intermediario = *end_valor2; // variável intermediária armazena o valor do tipo float contido no endereço para o qual end_valor2 aponta.
	*end_valor2 = *end_valor1; // conteúdo do endereço para o qual end_valor1 aponta é armazenado no endereço para qual end_valor2 aponta, tal conteúdo é um valor do tipo float.
	*end_valor1 = intermediario; /* conteúdo inicial que estava armazenado no endereço apontado por end_valor2, que depois foi atribuído à variável intermediario, agora está
	sendo armazenado no endereço para qual end_valor1 aponta */
}