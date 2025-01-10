/*
Gere uma matriz A, 10 x 10, e mostre ao usuário. A seguir, leia um número diferente de zero e gere uma
nova matriz B, 10 x 10, sendo que cada elemento de B é obtido pela divisão do elemento correspondente de
A pelo número informado.
*/

#include <stdio.h>

int main(){
    float A[5][5], B[5][5], N;
    int i, j;

    printf("\nMATRIZ A\n");
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            A[i][j] = i + j * 10;
            printf("%.2f\t", A[i][j]);
        }
        printf("\n");
    }

    printf("\nInforme um numero N: ");
    scanf("%f", &N);

    printf("\nMATRIZ B (A/N)\n");
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            B[i][j] = A[i][j] / N;
            printf("%.2f\t", B[i][j]);
        }
        printf("\n");
    }

    return 0;
}
