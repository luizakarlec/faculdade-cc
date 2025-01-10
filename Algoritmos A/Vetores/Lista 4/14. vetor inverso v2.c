/*
Faça um programa em C que declare um vetor de 20 elementos inteiros, leia os conteúdos
do vetor, e copie estes conteúdos para outro vetor, invertendo sua ordem. Assim, o valor
do primeiro elemento do primeiro vetor deve ser o valor do último elemento do segundo
vetor, por exemplo. Mostrar os conteúdos do primeiro vetor em uma linha e os do
segundo uma linha abaixo.
*/

#include <stdio.h>
int main(){
    int v[20], v2[20], i, j;

    printf("VETOR\n");
    for(i = 0; i < 20; i++){
        printf("vetor [%i]: ", i);
        scanf("%i", &v[i]);
    }

    i=0;
    j=19;
    while(i<20){
        v2[j] = v[i];
        i++;
        j--;
    }

    printf("\nVETOR INVERSO\n");
    for(i = 0; i < 20; i++){
        printf("vetor [%i]: %i\n", i, v2[i]);
    }

    return 0;
}
