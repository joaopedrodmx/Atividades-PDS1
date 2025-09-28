/* Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado possui uma taxa diferente de imposto sobre o produto, segundo a tabela abaixo:

Estado	Imposto (%)	Identificador
MG	7	G
SP	12	P
RJ	15	J
MS	8	S

Faça um programa em que o usuário entre com o valor e o identificador de uma letra do estado destino do produto em uma única linha, separado por espaço. O programa deve imprimir 
o preço final do produto acrescido do imposto do estado em que ele será vendido. Imprima o resultado com duas casas decimais de precisão. 
Se o estado digitado não for válido, imprima uma mensagem de erro "Estado invalido".

Dica: Para ler o identificador do estado, utilize %c no formatador do scanf. */

#include <stdio.h>

void calculadoraimposto(float *precoatualizado, char *estado){
	if (*estado == 'G'){
		*precoatualizado *= 1.07;
		printf("O valor em MG seria de R$%.2f", *precoatualizado);
	} else if (*estado == 'P'){
		*precoatualizado *= 1.12;
		printf("O valor em SP seria de R$%.2f", *precoatualizado);
	} else if (*estado == 'J'){
		*precoatualizado *= 1.15;
		printf("O valor em RJ seria de R$%.2f", *precoatualizado);
	} else if (*estado == 'S'){
		*precoatualizado *= 1.08;
		printf("O valor em MS seria de R$%.2f", *precoatualizado);
	} else {
		printf("Estado invalido");
	}
}

int main(){
	float preco;
	char uf;
	
	scanf("%f %c", &preco, &uf);
	calculadoraimposto(&preco, &uf);
	
	return 0;
}