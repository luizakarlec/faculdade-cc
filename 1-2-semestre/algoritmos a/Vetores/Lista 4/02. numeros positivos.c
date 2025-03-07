/*
Escreva um algoritmo que leia um vetor com 50 posições de números inteiros, mostre
somente os positivos e por fim mostre a quantidade de números positivos no vetor.
*/

#include<stdio.h>
int main(){
    int a[50], i, positivo = 0;

    for(i = 0; i < 50; i++){
        printf("Vetor a[%i]: ", i);
        scanf("%i", &a[i]);
    }

    printf("\nNumeros positivos: \n");
    for(i = 0; i < 50; i++){
        if(a[i] >= 0){
            printf("%i\t", a[i]);
            positivo++;
        }
    }

    printf("\n\nQuantidade de numeros positivos: %i\n", positivo);

    return 0;
}
