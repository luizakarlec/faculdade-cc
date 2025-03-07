/*
Escreva um programa que leia uma matriz de inteiros com ordem 10x10 e por meio de funções
faça o que se pede:
a. Exiba o menor elemento da matriz
b. Encontre e exiba o maior elemento de cada uma das linhas da matriz
*/

#include<stdio.h>

int matriz[2][2]; //variavel global

void menorelemento(){
    int i, j;
    int menor = 9999999;
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            if(matriz[i][j] < menor)
                menor = matriz[i][j];
        }
    }
    printf("Menor elemento: %i\n", menor);
    return;
}

void maiorelementolinha(){
    int i, j;
    int maior;
    
    for(i=0; i<2; i++) {
        maior = -999999;
        for(j=0; j<2; j++) {
            if (matriz[i][j] > maior)
                maior = matriz[i][j];
        }
        printf("Maior elemento da linha %i: %i\n", i + 1, maior);
    }
    
    return;
}

int main(){
    int i, j;
    
    printf("Escreva uma matriz 2x2:\n");
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            printf("[%i][%i]: ", i, j);
            scanf("%i", &matriz[i][j]);
        }
    }
    
    menorelemento();
    maiorelementolinha();
    
    return 0;
}