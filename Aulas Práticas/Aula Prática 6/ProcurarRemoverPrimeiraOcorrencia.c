	/* Objetivo:
	Criar um programa em C que procure um caractere informado pelo usuário em uma string e remova sua primeira ocorrência, ajustando a 
	string corretamente.

	Exercício:
	Neste exercício, implemente uma função chamada removechar que recebe, nesta ordem: um ponteiro para uma string A, o tamanho de A, 
	e um caracter c. A função removechar é do tipo void, ele não precisa retornar nada. Você tem que modificar diretamente a string 
	utilizando o ponteiro que foi passado como parâmetro.

	Por exemplo:

	Palavra de entrada "banana", remova a letra 'a'. Resultado: "bnana";
	Palavra de entrada "PDS1", remova a letra '1'. Resultado: "PDS";
	Palavra de entrada "UFMG", remova a letra 'Z'. Resultado: "UFMG";
	Observação: Você não precisa realizar a entrada e saída de dados (não precisa usar as funções scanf()e printf()). Também não é 
	necessário criar a função main.

	Dica: Use laços, mas lembre a partir de onde os caracteres terão que ser "deslocados". Não esqueça do caractere especial 
	finalizador de strings. */

	void removechar(char stringA[], int size, char c){
		for (int i = 0; stringA[i] != '\n'; i++){
			if (stringA[i] == c){
				for (int j = 0; stringA[i + j] != '\n'; j++){
					stringA[i + j] = stringA[i + j + 1];
				}
			break;
			}
		}
	}