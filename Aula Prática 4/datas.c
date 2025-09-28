/* Leia uma data e determine se ela é válida. Verifique se o mês está entre 1 e 12, e se o dia existe naquele mês. Note que fevereiro tem 29 dias em anos bissextos, 
e 28 dias em anos não bissextos.

Dica: Os anos múltiplos de 4 que não são \ de 100 são bissextos. Os anos múltiplos de 400 são bissextos. Todos os outros anos não são bissextos.

Exemplo 1
Entrada:

10
13
2030
Saída:

Data Invalida
Exemplo 2
Entrada:

31
3
2019
Saída:

Data Valida */

#include <stdio.h>

void validade(int *dia, int *mes, int *ano){
    if (*ano < 1){
        printf("Data Invalida");
    } else{
        if (*mes == 2){
            if ((*ano % 4 == 0 && *ano % 100 != 0) || (*ano % 400 == 0)){ //ano bissexto
                if (*dia <= 29 && *dia > 0){
                    printf("Data Valida");
                } else printf("Data Invalida");
            } else{ //anos comuns
                if (*dia <= 28 && *dia > 0){
                    printf("Data Valida");
                } else printf("Data Invalida");
            }
        }
    	else if (*mes == 1 || *mes == 3 || *mes == 5 || *mes == 7 || *mes == 8 || *mes == 10 || *mes == 12){
    	   if (*dia > 0 && *dia <= 31){
    	        printf( "Data Valida");
    	        } else printf("Data Invalida");
    	}
    	else if (*mes == 4 || *mes == 6 || *mes == 9 || *mes == 11){
    	    if (*dia > 0 && *dia <= 30){
    	        printf("Data Valida");
    	    } else printf("Data Invalida");
    	} else printf ("Data Invalida");
        }
}

int main(){
    int dia, mes, ano;
    scanf("%d", &dia);
    scanf("%d", &mes);
    scanf("%d", &ano);

    validade(&dia, &mes, &ano);
    
    return 0;
}