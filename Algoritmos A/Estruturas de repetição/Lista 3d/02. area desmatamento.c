/*
Uma determinada região está sendo desmatada a uma taxa percentual constante, ano após
ano. Escreva um algoritmo que leia a área da região, a taxa de desmatamento anual e
escreva o ano em que a mata estará reduzida a menos de 20% de sua atual área.
Por exemplo, se a área de floresta é 10.000.000 km2
 e a taxa de desmatamento é de 1,5%
ao ano, o algoritmo deve escrever como saída:
“Em 2131, a área estará reduzida a menos ou igual a 20% de sua área
atual, o que corresponde a 1984616 km2.”
*/

#include<stdio.h>
int main(){
    float area, taxa, area20;
    int ano;

    printf("Area da regiao: ");
    scanf("%f", &area);
    printf("Taxa de desmatamento em %%: ");
    scanf("%f", &taxa);

    area20 = area * 0.2;

    for(ano = 2024; area > area20; ano++){
        area = area - (area * (taxa/100));
    }

    printf("\nEm %i, a area estara reduzida a menos ou igual a 20%% de sua area atual, o que corresponde a %.2f km2", ano, area);

    return 0;
}
