#include <stdio.h>
#include <math.h>

int main(){
	char p, d, s, hifen, n;
	int soma, times;
	p = 'P';
	d = 'D';
	s = 'S';
	hifen = '-';
	n = '1';
	soma = p + d + s + hifen + n;
	times = p*d*s*hifen*n;
	printf("\n a soma e o produto dos cinco caracteres contidos em PDS-1 sao, respectivamente: %d e %d", soma, times);
	
	return 0;
}
