/* Objetivo:
Criar um programa em C que vai ler duas sequências de elementos da entrada do usuário representando matrículas de estudantes em 
diferentes materias. Você precisará verificar e imprimir os estudantes que estejam nas duas sequências.

Exercício:
Neste exercício você vai precisar de criar um programa que leia dois vetores de inteiros representando o número de matrícula de 
alunos matriculados respectivamente em AEDS 1 e Cálculo 1. Em seguida, o programa deverá imprimir o número de matrícula dos alunos 
que estão matriculados simultaneamente nestas duas disciplinas (ou seja, calcular a interseção dos dois vetores).

O primeiro valor passado ao seu programa será um inteiro com a quantidade de alunos na disciplina de AEDS 1. Em seguida, são 
informadas as matrículas de cada aluno na disciplina. A mesma sequência é fornecida para a disciplina de Cálculo 1. Por fim, 
deve-se imprimir a matrícula dos alunos que estão matriculados em ambas disciplinas.
Por exemplo:

Entrada inicial: 2, serão passados então 2 matriculas de alunos em AEDS1: 1111 3333
Após isso você vai receber uma outra entrada: 3, com 3 matriculas de alunos em Calculo 1: 2222 3333 4444
Finalmente você precisará imprimir os alunos que estão matriculados nas duas aulas: 3333
Observação: Neste VPL você vai ter que escrever a sua própria função main, e a sua própria entrada e saída de dados usando 
scanf() e printf().

Dica: Use variáveis indexadas como vimos na sala aula. */

void comparavet(int n1, int vet1[], int n2, int vet2[], int vet3[], int *qtComuns){
	for (int i = 0; i < n1; i++){
		for (int j = 0; j < n2; j++){
			if (vet1[i] == vet2[j]){
				vet3[*qtComuns] = vet1[i];
				++*qtComuns; //contador da quantidade de alunos comuns
				break;
			}
		}
	}
}	

#include <stdio.h>

int main(){
	int n1, n2;
	//Disciplina 1
	printf("\nDigite o número de alunos da primeira disciplina: ");
	scanf("%d", &n1);
	int vet1[n1];
	printf("Digite a matrícula dos estudantes dessa disciplina:\n");
	for (int i = 0; i < n1; i++){
		scanf("%d", &vet1[i]);
	}
	//Disciplina 2
	printf("\nDigite o número de alunos da segunda disciplina: ");
	scanf("%d", &n2);
	int vet2[n2];
	printf("Digite a matrícula dos estudantes dessa disciplina:\n");
	for (int i = 0; i < n2; i++){
		scanf("%d", &vet2[i]);
	}
	//Alunos comuns às disciplinas
	int size = n1 > n2 ? n1 : n2, qtComuns = 0;
	int vet3[size];
	comparavet(n1, vet1, n2, vet2, vet3, &qtComuns);
	printf("\nOs alunos matrículados em ambas as disciplinas são:\n");
	for (int i = 0; i < qtComuns; i++)
		printf("%d\n", vet3[i]);
	
	return 0;	
}