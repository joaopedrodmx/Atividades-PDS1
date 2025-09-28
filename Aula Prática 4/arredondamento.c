/* Escreva uma função para arredondar um número ponto flutuante (float), removendo a parte fracionária. Sua função deve ter a seguinte assinatura:

float arredonda(float num);
Nesta questão, você não deve submeter no VPL uma função main. Implemente apenas um arquivo .c com a função arredonda. Não utilize funções da biblioteca
matemática (isto é, não utilize #include <math.h> em seu código)


Exemplo 1
Entrada:
3.1415
Valor de retorno:
3.0
Exemplo 2
Entrada:
2.93
Saída:
3.0 */

#include <stdio.h>

float arredonda(float num){// Função e Parâmetros
	float n; // Variável que armazenará o valor arredondado
	if (num > 0){ //Casos em que o número digitado é maior do que zero
		if(num >= (int)num + 0.5){ // Se o numero digitado for maior do que sua parte inteira mais 0.5 (ex: 1.75 > 1.0 + 0.5)
			n = (int)num + 1; // a n será atribuido o valor da parte inteira mais um
		} else n = (int)num;// Caso contrário, a n será atribuido o valor da parte inteira do número digitado
	}
	else{ //Casos em que o número é menor do que zero
		n = (num >= (int)num - 0.5 ? (int)num : (int)num - 1);//(if compacto). Se número for maior do que sua parte inteira menos 0.5, atribuir a n o valor da parte inteira. Caso contrário, atribuir a n o valor da parte inteira menos 1. (Ex: -1.49 > -1.0 -0.5)
	}
	return n; // Retorno
}