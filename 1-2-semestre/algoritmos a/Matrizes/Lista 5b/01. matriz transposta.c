/*
Implemente um algoritmo para transpor matrizes 2x3. Transpor uma matriz significa transformar suas
linhas em colunas e vice-versa.
*/

#include <stdio.h>

int main(){
    int M[2][3], i, j, T[3][2], N = 1;

    printf("\nMATRIZ\n");
    for(i=0; i<2; i++){
        for(j=0; j<3; j++){
            M[i][j] = N;
            printf("%i\t", M[i][j]);
            N++;
        }
        printf("\n");
    }

    printf("\nMATRIZ TRANSPOSTA\n");
    for(i=0; i<3; i++){
        for(j=0; j<2; j++){
            T[i][j] = M[j][i];
            printf("%i\t", T[i][j]);
        }
        printf("\n");
    }


    return 0;
}
