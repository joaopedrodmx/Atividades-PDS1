/* Neste VPL, você deve implementar duas funções:

(1) float arredonda(float n);
Esta função recebe um ponto flutuante n e o arredonda a partir da seguinte regra:
  - se a parte fracionária de n for menor que 0.25, arredonde a parte fracionário para zero e retorne o número arredondado. 
  Ex.: 3.33 \to 3.00
  - se a parte fracionária de n for maior ou igual a 0.25 e menor que 0.75, arredonde a parte fracionária para 0.5 e retorne o número 
  arredondado. Ex.: 3.70 \to 3.50
  - se a parte fracionária de n for maior ou igual a 0.75, arredonde para o próximo inteiro. Ex.: 3.75 \to 4.00

(2) void arredondaNotas(float *endNota1, float *endNota2, float *endNota3);
Este procedimento (função que não retorna nada) deve receber três endereços de memória que armazenam pontos flutuantes. O procedimento deve 
acessar os três valores apontados pelos endereços e deve chamar a função arredonda acima, alterando os valores armazenados nos endereços 
para os valores arredondados. */

float arredonda(float n){
	float inteiro = (int)n;
	float fracionaria = n - inteiro;
	if (fracionaria < 0.25){
		return inteiro;
	} else if (fracionaria >= 0.25 && fracionaria < 0.75){
		fracionaria = 0.5;
		return inteiro + fracionaria;
	} else {
		return ++inteiro;
	}
}

void arredondaNotas(float *endNota1, float *endNota2, float *endNota3){
	*endNota1 = arredonda(*endNota1);
	*endNota2 = arredonda(*endNota2);
	*endNota3 = arredonda(*endNota3);
}.                                              