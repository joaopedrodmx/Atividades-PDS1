/* Caracteres alfanuméricos são apenas os caracteres que são letras (maiúsculas ou minúsculas) ou dígitos numéricos (0 a 9).

Exercício:
Neste exercício, você vai precisar implementar uma função chamada contacarateresalfa que recebe, nesta ordem: um ponteiro para uma string A, o tamanho de A  (inteiro) e retorna um inteiro. Esse inteiro, é o numero de caracteres alfanuméricos dentro da string A. Pode desconsiderar caracteres com acentuação.

Por exemplo, se a string A for "Ola, mundo! 123 :)" a função contacarateresalfa deve retornar 11.

Observação: Você não precisa realizar a entrada e saída de dados (não precisa usar as funções scanf()e printf()). Também não é necessário criar a função main.

Dica: Lembre da tabela ASCII. */

int contacarateresalfa(char str[], int n){
    int qtd = 0;
    for(int i = 0; i < n; i++){
        if(str[i] >= '0' && str[i] <= '9') qtd++;
        else if(str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z') qtd++;
    }
    return qtd;
}