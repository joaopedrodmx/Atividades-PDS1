/* Problema 5.5 [problema55.h e problema55.c]

Escreva uma função chamada populacao que recebe como parâmetros o número de habitantes (tipo unsigned long) e a taxa anual de crescimento 
(em porcento) (tipo double) da população de uma cidade A, o número de habitantes (tipo unsigned long) e a taxa anual de crescimento 
(em porcento) (tipo double) da população de uma cidade B, e retorna o número de anos (tipo int) necessários para que a população da cidade A 
ultrapasse ou iguale a população da cidade B, mantidas as taxas de crescimento. Pode assumir que nos argumentos passados para a função, o 
número de habitantes da cidade A será menor que o da cidade B, e que a taxa anual de crescimento da população da cidade A será maior que a 
de B.

Observação 1: O cabeçalho da função deve ser exatamente como especificado acima (tipo de retorno, nome da função, tipos e quantidade de 
parâmetros).

Observação 2: Você terá que implementar um módulo com a função descrita acima. Logo, você deverá submeter dois arquivos: um arquivo contendo 
a declaração das funções (arquivo problema55.h), e um arquivo contendo a definição das funções (arquivo problema55.c)

Observação 3: Você não precisa realizar a entrada e saída de dados (não precisa usar as funções scanf()e printf()). */

#include "problema55.h"

int populacao(unsigned long habitantesA, double txCrescimentoA, unsigned long habitantesB, double txCrescimentoB){
    int anos = 0;
    for (anos; habitantesA < habitantesB; anos++){
        habitantesA *= 1 + txCrescimentoA/100;
        habitantesB *= 1 + txCrescimentoB/100;
    }
    return anos;
}
