/*
Faça um algoritmo para ler duas matrizes de inteiros, de ordem 4x4, e verifique se a soma dos elementos
das diagonais principais são iguais.
*/

#include <stdio.h>

int main(){
   int m1[4][4], m2[4][4], i, j;
   int soma1 = 0, soma2 = 0;

    printf("Escreva uma matriz 4x4: \n");
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("matriz[%d][%d]: ", i, j);
            scanf("%i", &m1[i][j]);
            if(i == j){
                soma1 += m1[i][j];
            }
        }
    }
    printf("\n");
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("%i\t", m1[i][j]);
        }
        printf("\n");
    }   

    printf("\nEscreva outra matriz 4x4: \n");
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("matriz[%d][%d]: ", i, j);
            scanf("%i", &m2[i][j]);
            if(i == j){
                soma2 += m2[i][j];
            }
        }
    }
    printf("\n");
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("%i\t", m2[i][j]);
        }
        printf("\n");
    }

    printf("\nSoma diagonal 1: %i", soma1);
    printf("\nSoma diagonal 2: %i", soma2);
    if(soma1 == soma2){
        printf("\nSomas são iguais.");
    }else{
        printf("\nSomas não são iguais.");
    }

    return 0;
}
