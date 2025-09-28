/* Neste VPL, você deve implementar três funções, toda recebendo um parâmetro do tipo unsigned int. Você não deve usar condicionais (um if),
pode ser que para algumas das funções abaixo seja necessário fazer operações bit-a-bit.

(1) int codigoDeArea(unsigned int number);
Esta função deve receber um número com 10 dígitos (um telefone) e retornar o DDD (primeiro e segundo dígitos). Ex.: 3199765432 retorna 31.

(2) int parEmImpar(unsigned int number);
Se esta função receber como entrada um número par, deve retornar o próximo ímpar. Se a entrada for ímpar, retorna o próprio número. Ex. 12 retorna 13, 15 retorna 15.

(3) int par(unsigned int number);
Esta função deve retornar 0 se a entrada for um número ímpar, 1 se for um número par.

Não é necessário escrever a função main, apenas as três funções acima. */

int codigoDeArea(unsigned int number){ 
	number /= 100000000;
	return number;
	
int parEmImpar(unsigned int number){
	if((~number & 1) == 1){
		return number + 1;
	} else return number;
}

int par(unsigned int number){
	return (number % 2 == 0);
}