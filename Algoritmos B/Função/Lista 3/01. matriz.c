/*
Desenvolver um programa que leia os elementos da 1ª linha de uma matriz 6x6 de inteiros e a
partir desses elementos calcule e mostre (em uma função) os outros elementos da matriz. 
Sabese que os elementos da 2ª linha são os elementos da 1ª linha x 2, os elementos da 3ª linha são os
elementos da 1ª linha x 3 e assim por diante.
*/

#include <stdio.h>

void criarMatriz(int l[]){
    int i, j;
    int m[6][6];
    
    for(j=0; j<6; j++){
        printf("%d\t", l[j]);
    }
    printf("\n");
    
    for(i=1; i<6; i++){
        for(j=0; j<6; j++){
            m[i][j] = l[j] * (i+1);
            printf("%d\t", m[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int linha[6];
    int i, j;
    
    printf("Primeira linha da matriz (6 numeros): ");
    for(i=0; i<6; i++){
        scanf("%i", &linha[i]);
    }
    
    criarMatriz(linha);

    return 0;
}