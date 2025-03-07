/*
Escreva um algoritmo que leia dois vetores de 10 posições e faça a multiplicação dos
elementos de mesmo índice, colocando o resultado em um terceiro vetor. Mostre o vetor
resultante.
*/

#include<stdio.h>
int main(){
    int a[10], b[10], produto[10], ax, bx, x, resultado;

    printf("VETOR A\n");
    for(ax = 0; ax<10; ax++){
        printf("vetor[%i]: ", ax);
        scanf("%i", &a[ax]);
    }

    printf("\nVETOR B\n");
    for(bx = 0; bx<10; bx++){
        printf("vetor[%i]: ", bx);
        scanf("%i", &b[bx]);
    }

    printf("\nVETOR PRODUTO\n");
    for(x = 0; x<10; x++){
        resultado = a[x] * b[x];
        printf("vetor A[%i] * vetor B[%i] = %i * %i = %i\n", x, x, a[x], b[x], resultado);
    }

    return 0;
}
