/*
Faça um algoritmo que leia um vetor V de 10 posições e, após, verifica se um número N,
fornecido pelo usuário, existe no vetor. Se existir, indicar a(s) posição(ões), senão
escrever a mensagem "O número fornecido não existe no vetor!".
*/

#include<stdio.h>
int main(){
    int v[10], i, n, x = 0;

    printf("VETOR\n");
    for(i = 0; i < 10; i++){
        printf("vetor[%i]: ", i);
        scanf("%i", &v[i]);
    }

    printf("\nVERIFIQUE SE N EXISTE NO VETOR\n");
    printf("N = ");
    scanf("%i", &n);

    for(i = 0; i < 10; i++){
        if(n == v[i]){
            printf("O numero existe no vetor na posicao %i\n", i);
            x = 1;
        }
    }

    if(x == 0){
        printf("O numero nao existe no vetor.\n");
    }

    return 0;
}
