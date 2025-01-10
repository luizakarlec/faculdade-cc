/*
Escreva um programa que leia valores em um vetor de 5 posições. Escrever os elementos
do vetor e após escrever os elementos na ordem inversa.
*/

#include<stdio.h>
int main(){
    int v[5], i;

    i = 0;
    printf("LEITURA\n");
    while(i < 5){
        printf("vetor[%i]: ", i);
        scanf("%i", &v[i]);
        i++;
    }

    printf("\nELEMENTOS DO VETOR\n");
    for(i = 0; i < 5; i++){
        printf("%i\t", v[i]);
    }

    printf("\nINVERSO DOS ELEMENTOS DO VETOR\n");
    for(i = 4; i >= 0; i--){
        printf("%i\t", v[i]);
    }

    return 0;
}
