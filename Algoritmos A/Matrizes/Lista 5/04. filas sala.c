/*
Em um concurso, a identificação das cadeiras da sala são armazenadas em uma matriz. Considere que
existem 6 filas de cadeiras na sala e cada fila possui 7 cadeiras. Desenvolva um algoritmo com uma matriz
para armazenar a identificação das cadeiras que é informada pelo usuário. A matriz deve ser exibida. Após,
apresentar ao usuário a mensagem: “Insira o número da fila:” para que o algoritmo leia o número de uma
fila e mostra a identificação de todas as cadeiras desta fila.
*/

#include <stdio.h>

int main(){
    int cadeira[7][6], i, j, fila;

    printf("Identifique as cadeiras: \n");
    for(i=0; i<7; i++){
        for(j=0; j<6; j++){
            printf("cadeira[%i][%i]: ", i, j);
            scanf("%i", &cadeira[i][j]);
        }
    }

    printf("\nMATRIZ SALA\n");
    for(i=0; i<7; i++){
        for(j=0; j<6; j++){
            printf("%i\t", cadeira[i][j]);
        }
        printf("\n");
    }

    printf("\nInsira o numero da fila: ");
    scanf("%i", &fila);

    printf("\nFila %i: \n", fila);
    for(i=0; i<7; i++){
        printf("%i\t", cadeira[i][fila-1]);

    }

    return 0;
}
