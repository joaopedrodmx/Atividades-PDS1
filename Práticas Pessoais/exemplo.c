#include <stdio.h>
#include <math.h>

void main(){
	int media_pais;
	float t_media_pais, prev_alt_filho;
	char sexo_filho = 1; //char pode ser manipulado da mesma forma que um inteiro pois no codigo executavel o que eh passado eh uma representacao binaria do numero decimal que representa o caractere -> por isso char eh inteiro
	char aux = 'A'
	
	media_pais = 170;
	 
	t_media_pais = media_pais * 0.75; // multiplicacao de tipos diferentes de dados nao acontece, entao ha uma conversao implicita de tipo que eh automatica, entao um tipo de dado eh convertido para o tipo do outro,deixando ambos como mesmo tipo de dado e possibilitando a operacao.
	//pergunta da menina sobre conversao implicita: se assume que eh double, entao em alguns casos como resolveria isso com o intuito de poupar espaco? -> 
	sexo_filho = sexo_filho * 10;
	
	prev_alt_filho = 50 + t_media_pais + sexo_filho;
	
	printf("\naltura filho: %f", prev_alt_filho);
	printf("\n (%d), (%c)", aux, aux);
}