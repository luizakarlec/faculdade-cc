/*
Escrever um programa para ler uma matriz 4x4 de números reais, e depois determinar se ela se enquadra
em uma das seguintes classes de matrizes:
  Matriz simétrica: A[i][j] = A[j][i], para todo i e j
  Matriz diagonal: A[i][j] = 0, para i != j
  Matriz triangular superior: A[i][j] = 0, para i < j
  Matriz triangular inferior: A[i][j] = 0, para i > j
*/

#include <stdio.h>

int main(){
    float m[4][4];
    int i, j;
    int flagSimetrica = 1;
    int flagDiagonal = 1;
    int flagSuperior = 1;
    int flagInferior = 1;

    printf("\nMatriz 4x4\n");
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            printf("m[%i][%i]: ", i, j);
            scanf("%f", &m[i][j]);
        }
    }

    printf("\n");
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            printf("%.2f\t", m[i][j]);
        }
        printf("\n");
    }

    //simetrica
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            if(m[i][j] != m[j][i])
                flagSimetrica = 0;
        }
    }

    if(flagSimetrica == 1)
        printf("\nMatriz eh SIMETRICA.");
    else
        printf("\nMatriz nao eh simetrica.");


    //diagonal
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            if (i != j && m[i][j] != 0) {
                flagDiagonal = 0;
            }
        }
    }

    if(flagDiagonal == 1)
        printf("\nMatriz eh DIAGONAL.");
    else
        printf("\nMatriz nao eh diagonal.");


    //triangular superior
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            if (i < j && m[i][j] != 0) {
                flagSuperior = 0;
            }
        }
    }

    if(flagSuperior == 1)
        printf("\nMatriz eh TRIANGULAR SUPERIOR.");
    else
        printf("\nMatriz nao eh triangular superior.");


    //triangular inferior
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            if (i > j && m[i][j] != 0) {
                flagInferior = 0;
            }
        }
    }

    if(flagInferior == 1)
        printf("\nMatriz eh TRIANGULAR INFERIOR.");
    else
        printf("\nMatriz nao eh triangular inferior.");

    return 0;
}
