/*
Escreva um algoritmo que imprima a tabela de equivalência de graus Fahrenheit para
Celsius (centígrados). Os limites são de 50 a 70 graus Fahrenheit, com intervalo de 1
grau.
*/

#include<stdio.h>
int main (){
    float F, C;

    printf("\nTABELA DE EQUIVALENCIA\n\n");
    printf("\tF || C\n");

    for(F = 50; F <= 70; F++){
        C = (F - 32) / 1.8;

        printf("%.2f || %.2f\n", F, C);
    }

    return 0;
}
