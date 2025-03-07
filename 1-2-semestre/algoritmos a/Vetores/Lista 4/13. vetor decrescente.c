/*
Escreva um algoritmo que leia um vetor de 15 elementos inteiros. Ordene o vetor em
ordem decrescente e exiba-o.
*/

#include <stdio.h>
int main(){
    int v[15], i;

    printf("**VETOR[15]**\n");
    for(i=0; i<15; i++){
        scanf("%i", &v[i]);
    }

    printf("**VETOR INVERSO**\n");
    for(i=14; i>=0; i--){
        printf("%i\t", v[i]);
    }

    return 0;
}
