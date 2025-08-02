#include <stdio.h>

int main(){

    float pib_1, pib_2;
    float populacao_1, populacao_2;
    float area_1, area_2;
    float TotalCarta1, TotalCarta2;

    printf("digite o numero do pib 1: \n");
    scanf("%f", &pib_1);

    printf("digite o numero da populacao 1: \n");
    scanf("%f", &populacao_1);

    printf("digite a area 1: \n");
    scanf("%f", &area_1);

    printf("digite o numero do pib 2: \n");
    scanf("%f", &pib_2);

    printf("digite o numero da populacao 2: \n");
    scanf("%f", &populacao_2);

    printf("digite a area 2: \n");
    scanf("%f", &area_2);

    printf("o numero do pib 1 é: %.2f\n", pib_1);
    printf("o numero da populacao 1 é: %.2f\n", populacao_1);
    printf("a area 1 é: %.2f\n", area_1);
    printf("o numero do pib 2 é: %.2f\n", pib_2);
    printf("o numero da populacao 2 é: %.2f\n", populacao_2);
    printf("a area 2 é: %.2f\n", area_2);

    //carta_1 = pib_1 + populacao_1 + area_1
    //carta_2 = pib_2 + populacao_2, area_2
    TotalCarta1 = pib_1 + populacao_1 + area_1;
    TotalCarta2 = pib_2 + populacao_2 + area_2;

    printf("o total da carta 1 é: %.2f\n", TotalCarta1);
    printf("o total da carta 2 é: %.2f\n", TotalCarta2);

    if (TotalCarta1 > TotalCarta2) {
        printf("carta 1 venceu\n");

    } else {
        printf("carta 2 venceu");
    }




}