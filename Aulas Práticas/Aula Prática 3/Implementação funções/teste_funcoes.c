#include <stdio.h>
#include "minhas_funcoes.h"

int main() {
    /* ---- teste da função soma1 ---- */

    int end;
    printf("\nDigite um valor inteiro: ");
    scanf("%d", &end);

    // Complete o código abaixo:
    soma1(&end);
    printf("\nValor depois de chamar a funcao: %d", end);

    /* ---- teste da função troca ---- */

    float end_valor1, end_valor2;

    printf("\nDigite os valores para troca: ");
    scanf("%f %f", &end_valor1, &end_valor2);

    // Complete o código abaixo:
    troca(&end_valor1, &end_valor2);

    printf("\nValores depois de chamar a funcao: %.4f %.4f", end_valor1, end_valor2);

    /* ---- teste da função ddd ---- */

    // Complete o código abaixo:
    long long tel;

    printf("\nDigite o telefone: ");
    scanf("%lld", &tel);
    printf("\nDDD: %d", ddd(tel));

    return 0;
}