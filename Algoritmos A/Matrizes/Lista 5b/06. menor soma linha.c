/*
Faça um programa que leia uma matriz 4x3 e encontre a linha que possui a maior soma de seus elementos.
Mostre qual é a linha que possui a menor soma.
*/

#include <stdio.h>

int main(){
    int m[4][3], i, j;
    int l1=0, l2=0, l3=0, l4=0, menor=999999;

    printf("Matriz 4x3: \n");
    for(i=0; i<4; i++){
        for(j=0; j<3; j++){
            printf("matriz[%d][%d]: ", i, j);
            scanf("%i", &m[i][j]);
        }
    }

    printf("\n");
    for(i = 0; i < 4; i++){
        for(j = 0; j < 3; j++){
            printf("%i\t", m[i][j]);
        }
        printf("\n");
    }

    //soma
    for(j=0; j<3; j++){
        l1 += m[0][j];
        l2 += m[1][j];
        l3 += m[2][j];
        l4 += m[3][j];
    }

    printf("\nSoma das linhas:\n");
    printf("Linha 1 = %i\n", l1);
    printf("Linha 2 = %i\n", l2);
    printf("Linha 3 = %i\n", l3);
    printf("Linha 4 = %i\n", l4);

    //menor
    if(l1 < menor)
        menor = l1;
    if(l2 < menor)
        menor = l2;
    if(l3 < menor)
        menor = l3;
    if(l4 < menor)
        menor = l4;

    printf("\nMenor soma = %i", menor);

    if(menor == l1)
        printf("\nMenor soma está na linha 1");  
    if(menor == l2)
        printf("\nMenor soma está na linha 2");  
    if(menor == l3)
        printf("\nMenor soma está na linha 3");  
    if(menor == l4)  
        printf("\nMenor soma está na linha 4");

    return 0;
}
