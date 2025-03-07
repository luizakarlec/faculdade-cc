/*
Escreva um algoritmo que leia um vetor de 20 posições e mostre-o. Em seguida, troque o
primeiro elemento com o último, o segundo com o penúltimo, o terceiro com o
antepenúltimo e assim sucessivamente. Mostre o novo vetor depois da troca.
*/

#include<stdio.h>
int main(){
    int v[20], i, a;

    printf("VETOR\n");
    for(i = 0; i < 20; i++){
        printf("vetor [%i]: ", i);
        scanf("%i", &v[i]);
    }

    for(i = 0; i < 10; i++){
        a = v[i];
        v[i] = v [19 - i];
        v[19 - i] = a;
    }

    printf("\nNOVO VETOR\n");
    for(i = 0; i < 20; i++){
        printf("vetor [%i]: %i\n", i, v[i]);
    }

    return 0;
}
