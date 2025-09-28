#include <stdio.h>
#include <math.h>

int main(){
	float vi = 789.54, saldo, vf;
	saldo = vi * 1.0056;
	saldo = (saldo + 303.20)*1.0056;
	vf = (saldo - 58.25)*1.0056;
	printf ("\n O saldo da conta no inicio do quarto mes eh de: R$ %.2f\n", vf);
	
	return 0;
}