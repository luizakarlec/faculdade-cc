/*
Faça um algoritmo para ler uma matriz 3x4 e peça ao usuário para informar o número de uma linha da
matriz. Armazene a linha informada da matriz em um vetor e, por fim, mostre o vetor. 
*/

#include <stdio.h>

int main(){
    int m[3][4], v[4], i, j, linha;

    printf("Matriz 3x4: \n");
    for(i=0; i<3; i++){
        for(j=0; j<4; j++){
            printf("matriz[%d][%d]: ", i, j);
            scanf("%i", &m[i][j]);
        }
    }

    printf("\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 4; j++){
            printf("%i\t", m[i][j]);
        }
        printf("\n");
    }

    printf("\nEscolha uma linha da matriz: ");
    scanf("%i", &linha);


    for(j=0; j<4; j++){
        v[j] = m[linha-1][j];
    }

    printf("Linha escolhida: ");
    for(i=0; i<4; i++){
        printf("%i\t ", v[i]);
    }

    return 0;
}
