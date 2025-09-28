/* Implemente a função de distribuição acumulada da distribuição log-logística, que é a seguinte:

F(x; a, b) = \begin{cases}\dfrac{1}{1 + \left( \dfrac{x}{a} \right)^{b}} & \text{se } x \geq 0 \\0 & \text{se } x < 0\end{cases}

Implemente uma função de nome loglcdf que recebe os parâmetros x, a e b e retorne F(x, a, b), todos pontos flutuantes. A assinatura deve ser:

float loglcdf(float x, float a, float b);

Não é necessário escrever a função main, apenas a função acima. */

#include <math.h>

float loglcdf(float x, float a, float b){
	float f;
	if (x>= 0){
		f = 1/(1 + pow((x/a),b));
	} else{
		f = 0;
	}
	
	return f;
}