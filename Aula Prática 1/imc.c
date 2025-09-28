#include <stdio.h>
#include <math.h>

int main(){

	double h_b = 1.84, h_o = 1.76, imc_b, imc_o;
	double peso_b = 122, peso_o = 45;
	double pesoideal_b, pesoideal_o, perda_b, ganho_o;
	imc_b = peso_b/(h_b * h_b); //imc do brutus
	imc_o = peso_o/(h_o *h_o); // imc da olivia
	pesoideal_b = 24.99 * (h_b * h_b); // peso ideal do brutus
	pesoideal_o = 18.5 * (h_o * h_o); // peso ideal da olivia
	perda_b = peso_b - pesoideal_b; // perda de peso do brutus para alcancar seu peso ideal
	ganho_o = pesoideal_o - peso_o; // ganho de peso da olivia para alcanar seu peso ideal
	printf("\n o IMC de Brutus eh %.1f, portanto para atingir um IMC saudavel ele deve perder %.1fkg. \n Ja para Olivia, seu IMC eh %.1f e, dessa forma, ela deve ganhar %.1fkg\n", imc_b, perda_b, imc_o, ganho_o);

	return 0;
}