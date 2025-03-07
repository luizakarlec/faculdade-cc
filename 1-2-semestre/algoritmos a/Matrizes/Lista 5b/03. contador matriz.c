/*
Faça um programa que leia uma matriz 5x5. Após leia um valor qualquer e conte quantas vezes este valor
aparece na matriz. 
*/

#include <stdio.h>

int main(){
   int m[5][5], i, j, n, cont = 0;

   printf("Escreva uma matriz 5x5: \n");
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            printf("matriz[%d][%d]: ", i, j);
            scanf("%i", &m[i][j]);
        }
    }

    printf("\nEscreva um valor qualquer: ");
    scanf("%i", &n);

    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            if(m[i][j] == n){
                cont++;
            }
        }
    }
    printf("\nO numero %i aparece %i vezes na matriz.\n", n, cont);


    return 0;
}
