/* Neste exercício, implemente uma função chamada raiz que recebe um valor x (float) maior que 1 e retorna o a sua raíz 
quadrada. Considere a sua resposta correta se estiver a menos de 0.01 da resposta real. Isto é, se y é a sua resposta, 
ela será aceita se:

|y-√x|≤0.01

Por exemplo, se x=4, a resposta será 2, mas qualquer valor entre 1.99 e 2.01 será aceito.

Dica: comece com um valor inicial y qualquer maior que 0 como resposta. Se a resposta atual estiver muito baixa (isto é, 
y² for muito menor que x), multiplique y por uma constante maior que 1. Caso y² for muito maior que x, multiplique y por 
uma constante positiva menor que 1. Caso nenhum dos casos anteriores forem verdadeiros, então y é uma resposta válida.

Importante: Neste exercício o nome do seu arquivo fonte NÃO pode ser chamado de main.c, você terá que escolher outro nome 
de arquivo para evitar problemas de compilação. E você só precisa de escrever a função solicitada, não é necessário 
escrever a função main.

O protótipo da função é:
float raiz(float x); */

float raiz(float x){
	float y, maior = x, menor = 1;
	while ((y * y) - x > 0.01 || (y * y) - x < 0){
		y = (maior + menor)/2;
		if (y * y == x) break;
		else if( y * y > x) maior = y;
		else menor = y;
	}
	return y;
}
			
			