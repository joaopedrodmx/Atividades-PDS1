/* Dados três valores, A, B, e C, verifique se eles podem ser valores dos lados de um triângulo e, se forem, se é um triângulo escaleno, equilátero 
ou isóscele, considerando os seguintes conceitos:

O comprimento de cada lado de um triângulo é menor que a soma dos outros dois lados
Denominamos como equilátero um triângulo com três lados iguais
Denominamos como isósceles um triângulo com dois lados iguais
Denominamos como escaleno um triângulo com três lados diferentes
Utilize variáveis de ponto flutuante para armazenar os comprimentos recebidos como entrada. Caso o valor de alguma entrada seja negativo, 
imprima Valores invalidos e termine o programa. Caso os comprimentos informados não configurem um triangulo, imprima Triangulo invalido.

Exemplo
Entrada:

6
8
10
Saída:

Triangulo escaleno */

#include <stdio.h>
	
	void trianguloValido(float *lado1, float *lado2, float *lado3){
		scanf("%f", lado1); //escaneia e armazena no endereço de a
		scanf("%f", lado2); //escaneia e armazena no endereço de b
		scanf("%f", lado3); //escaneia e armazena no endereço de c
		if(*lado1 > 0 && *lado2 > 0 && *lado3 > 0){ //todos os lados devem ser maiores do que zero
			if((*lado1 < *lado2 + *lado3) && (*lado2 < *lado1 + *lado3) && (*lado3 < *lado1 + *lado2)){ //Triangulo Valido
				if (*lado1 == *lado2 && *lado2 == *lado3) printf("Triangulo equilatero");
				else if(*lado1 == *lado2 || *lado1 == *lado3 || *lado2 == *lado3) printf("Triangulo  isosceles");
				else printf("Triangulo escaleno");
			} else printf("Triangulo invalido");
		} else printf("Valores invalidos");
	}
	
	int main(){
		float a,b,c;
		
		trianguloValido(&a, &b, &c);
		
		return 0;
	}