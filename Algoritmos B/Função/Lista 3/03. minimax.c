/*
Na teoria dos Sistemas, define-se como elemento minimax de uma matriz, o menor elemento da
linha em que se encontra o maior elemento da matriz. Escreva um programa que lê (ou gera)
uma matriz [10 X 10] e em uma função encontre e mostre o elemento minimax e sua posição na
matriz.
*/

#include <stdio.h>

int maiorLinha (int m[][3]){
    int linha, elemento = -999;
    int i, j;
    
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            if(m[i][j] > elemento){
                elemento = m[i][j];
                linha = i;
            }
        }
    }
    return linha;
}

int acharMinimax (int m[][3], int l){
    int i, j;
    int elemento = 9999999;
    
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            if(m[i][j] < elemento){
                elemento = m[i][j];
            }
        }
    }
    
    return elemento;
}

int main(){
    int matriz[3][3];
    int i, j;
    int linha, minimax;
    
    printf("Digite a matriz: \n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("matriz[%i][%i]: ", i, j);
            scanf("%i", &matriz[i][j]);
        }
    }
    
    linha = maiorLinha(matriz);
    minimax = acharMinimax(matriz, linha);
    
    printf("\nMinimax = %i", minimax);
    

    return 0;
}
