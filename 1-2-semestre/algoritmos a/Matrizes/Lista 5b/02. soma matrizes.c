/*
Implemente um algoritmo para somar duas matrizes de tamanho 3 x 3. As matrizes podem ser lidas ou
geradas no algoritmo.
*/

#include <stdio.h>

int main(){
    int M1[3][3], M2[3][3], i, j, S[3][3], N = 1;

    printf("\nMATRIZ 1\n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            M1[i][j] = N;
            printf("%i\t", M1[i][j]);
            N++;
        }
        printf("\n");
    }

    printf("\nMATRIZ 2\n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            M2[i][j] = N;
            printf("%i\t", M2[i][j]);
            N++;
        }
        printf("\n");
    }

    printf("\nMATRIZ SOMA\n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            S[i][j] = M1[i][j] + M2[i][j];
            printf("%i\t", S[i][j]);
        }
        printf("\n");
    }


    return 0;
}
