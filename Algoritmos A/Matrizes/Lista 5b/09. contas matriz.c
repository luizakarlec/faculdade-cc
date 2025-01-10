/*
Desenvolva um algoritmo para gerar uma matriz 4x4 e, depois, calcular e mostrar:
  O somatório dos elementos da primeira coluna
  O valor da multiplicação dos elementos da primeira linha
  A soma da diagonal principal
  A soma de todos os elementos da matriz
*/

#include <stdio.h>

int main(){
    int m[4][4], i, j;
    int somac = 0, multi = 1, somad = 0, somat = 0;

    printf("\nMatriz 4x4: \n");
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            m[i][j] = i + j;
            printf("%i\t", m[i][j]);
        }
        printf("\n");
    }

    //somatorio primeira coluna
    for(i=0; i<4; i++){
        somac += m[i][0];
    }

    //multiplicacao primeira linha
    for(j=0; j<4; j++){
        multi = multi * m[0][j];
    }

    //soma diagonal
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            if(i == j){
                somad += m[i][j];
            }
        }
    }

    //soma total
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            somat += m[i][j];
        }
    }


    //results
    printf("\nSomatorio dos elementos da primeira coluna: %i\n", somac);
    printf("Multiplicação dos elementos da primeira linha: %i\n", multi);
    printf("Soma da diagonal principal: %i\n", somad);
    printf("Soma de todos os elementos da matriz: %i\n", somat);

    return 0;
}
