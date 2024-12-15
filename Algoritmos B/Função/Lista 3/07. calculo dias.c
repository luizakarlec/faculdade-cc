/*
Implementar um programa que leia duas datas e chame uma função para verificar o número de
dias decorridos entre ambas. Para simplificar, considere que todos os meses têm 30 dias.
*/

#include <stdio.h>

int calcularDias(int d1, int m1, int a1, int d2, int m2, int a2){
    int totaldias = 0;
    
    //transforma as datas em dias absolutos
    int dias1 = d1 + m1 * 30 + a1 * 360;
    int dias2 = d2 + m2 * 30 + a2 * 360;
    
    //calcula a diferenca
    totalDias = dias2 - dias1;

    //garante que o resultado seja positivo
    if (totalDias < 0) {
        totalDias = -totalDias;
    }
    
    
    return totaldias;
}

int main(){
    int d1, d2, m1, m2, a1, a2;
    int Ndias;
    
    printf("\nDigite a primeira data: \n");
    printf("Dia: ");
    scanf("%i", &d1);
    printf("Mes: ");
    scanf("%i", &m1);
    printf("Ano: ");
    scanf("%i", &a1);
    
    printf("\nDigite a segunda data: \n");
    printf("Dia: ");
    scanf("%i", &d2);
    printf("Mes: ");
    scanf("%i", &m2);
    printf("Ano: ");
    scanf("%i", &a2);
    
    Ndias = calcularDias(d1, m1, a1, d2, m2, a2);
    
    printf("\nNumero de dias = %i", Ndias);

    return 0;
}
