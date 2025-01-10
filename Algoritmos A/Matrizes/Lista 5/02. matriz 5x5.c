/*
Escreva um programa em C que gere os elementos de uma matriz quadrada 5 x 5 e:
  Exiba todos os elementos da matriz
  Exiba os elementos da diagonal principal da matriz
  Calcule e mostre a média dos valores da diagonal principal da matriz
  Calcule e mostre a média dos elementos da matriz
  Encontre e mostre na tela os elementos que estão acima da média, com sua posição (índice de linha e
coluna)
*/

#include <stdio.h>

int main(){
    int m[5][5], i, j;
    float somaD = 0, somaT = 0;

    printf("\nMATRIZ\n");
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            m[i][j] = i + j;
            printf("%d\t", m[i][j]);

            somaT += m[i][j];
        }
        printf("\n");
    }

    printf("\nDIAGONAL PRINCIPAL\n");
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
           if(i == j){
               printf("%i\t", m[i][j]);

               somaD += m[i][j];
           }
        }
    }

    printf("\n\nMEDIA DA DIAGONAL: %.2f", somaD/5);

    printf("\n\nMEDIA TOTAL: %.2f", somaT/(5*5));

    printf("\n\nVALORES ACIMA DA MEDIA\n");
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
           if(m[i][j] > (somaT/(5*5)) ){
               printf("%i[%i][%i]\n", m[i][j], i, j);
           }
        }
    }

    return 0;
}
