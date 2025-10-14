/* Concatenação de strings em C é o processo de juntar duas ou mais strings em uma só. C não possui um operador específico 
para isso (como o + em outras linguagens).

Exercício:
Neste exercício, implemente uma função chamada concatena que recebe, nesta ordem: um ponteiro para uma string A, o tamanho 
de A, um ponteiro para uma string B, o tamanho de B, e um terceiro ponteiro para uma string S e que faça a string S ser a 
concatenação das strings A e B. Por exemplo, se A e B são, respectivamente, "abcd" e "wxyz", a string S deve ser "abcdwxyz" 
após a operação.

Você pode assumir que a string resultante S terá tamanho alocado suficiente para a operação.

Observação: Você não precisa realizar a entrada e saída de dados (não precisa usar as funções scanf()e printf()). Também 
não é necessário criar a função main.

Dica: Tem várias formas de fazer a concatenação, lembre da biblioteca <string.h> */

int concatena(char strA[], int tamA, char strB[], int tamB, char strS[]){
	int i = 0;
	for (i; strA[i] != '\n' && strA[i] != '\0'; i++){
		strS[i] = strA[i];
	}
	for (int j = 0; strB[j] != '\n' && strB[j] != '\0'; j++){
		strS[i] = strB[j];
		i++;
	}
	strS[i] = '\0';

	return 0;
}