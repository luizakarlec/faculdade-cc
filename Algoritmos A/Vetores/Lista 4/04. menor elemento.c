/*
Escreva um algoritmo que leia um vetor de 80 elementos inteiros. Encontre e mostre o
menor elemento e a sua posição.
*/

#include<stdio.h>
int main(){
    int v[80], i, menorElemento = 999999999, menorPosicao = 99999999;

    for(i = 0; i < 80; i++){
        printf("vetor[%i]: ", i);
        scanf("%i", &v[i]);

        if(v[i] < menorElemento){
            menorElemento = v[i];
            menorPosicao = i;
        }
    }

    printf("\nMenor elemento: %i\nPosicao: %i\n", menorElemento, menorPosicao);

    return 0;
}
