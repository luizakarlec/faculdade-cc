/*
Ler uma matriz informada pelo usuário, com tamanho 3 x 5. Mostrar seus elementos.
*/

#include<stdio.h>
int main (){
    int matriz[3][5], i, j;

    printf("Escreva uma matriz 3x5: \n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 5; j++){
            printf("matriz[%d][%d]: ", i, j);
            scanf("%i", &matriz[i][j]);
        }
    }

    printf("\nMATRIZ\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 5; j++){
            printf("%i\t", matriz[i][j]);   
        }
        printf("\n");
    }

    return 0;
}
