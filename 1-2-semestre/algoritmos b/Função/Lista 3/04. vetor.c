/*
Escreva um programa que leia um vetor com 30 elementos inteiros e escreva funções para fazer
o que se pede:
a. Exibir os elementos do vetor na ordem inversa
b. Decompor em dois outros vetores, um contendo os elementos de índice ímpar e
outro com os elementos de ordem par
*/

#include<stdio.h>

void exibirInverso(int v[]){
    int i;
    
    printf("\nVetor inverso: \n");
    for(i=4; i>=0; i--){
        printf("%i  ", v[i]);
    }
    
    return;
}

void parimpar(int v[]){
    int par[5], impar[5];
    int i;
    int ci = 0, cp = 0;
    
    for(i=0; i<5; i++){
        if(v[i]%2 == 0){
            par[cp] = v[i];
            cp++;
        }else{
            impar[ci] = v[i];
            ci++;
        }
    }
    
    printf("\n\nVetor par: ");
    for(i=0; i<cp; i++){
        printf("%i  ", par[i]);
    }
    
    printf("\nVetor impar: ");
    for(i=0; i<ci; i++){
        printf("%i  ", impar[i]);
    }
    
    return;
}

int main(){
    int vetor[5];
    int i;
    
    printf("Digite um vetor de 5 elementos: ");
    for(i=0; i<5; i++){
        scanf("%i", &vetor[i]);
    }
    
    exibirInverso(vetor);
    parimpar(vetor);
    
    return 0;
}
