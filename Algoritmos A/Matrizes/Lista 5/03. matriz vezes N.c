/*
Ler uma matriz 3 x 2 e um número informados pelo usuário. O algoritmo deve gerar uma nova matriz que é
o resultado da multiplicação do número pela matriz lida.
*/

#include <stdio.h>

int main(){
    int m[3][2], i, j, N;

    printf("Digite uma matriz 3x2: \n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 2; j++){
            printf("m[%d][%d]: ", i, j);	  
            scanf("%i", &m[i][j]);
        }
    }

    printf("\nDigite um numero N: ");
    scanf("%i", &N);

    printf("\nMatriz * N: \n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 2; j++){
            printf("%i\t", m[i][j] * N);	  
        }
        printf("\n");
    }

    return 0;
}
