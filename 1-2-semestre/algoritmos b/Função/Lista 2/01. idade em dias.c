/*
Faça um programa que leia a idade de uma pessoa expressa em anos, meses e dias e em uma
função mostre-a expressa apenas em dias.
*/

#include <stdio.h>

int calcularDias(int a, int m, int d);

int main(){
    int anos, meses, dias;
    int totalDias;

    printf("Informe a idade em: \n");
    printf("Anos: ");
    scanf("%d", &anos);
    printf("Meses: ");
    scanf("%d", &meses);
    printf("Dias: ");
    scanf("%d", &dias);

    totalDias = calcularDias(anos, meses, dias);
    printf("Total de dias = %d", totalDias);

    return 0;
}

int calcularDias(int a, int m, int d){
    return a*365 + m*30 + d;
}
