/*
Escreva um algoritmo que leia um código numérico inteiro e um vetor de 50 posições de
números. Se o código for zero, termine o algoritmo. Se o código for 1, mostre o vetor na
ordem em que foi lido. Se o código for 2, mostre o vetor na ordem inversa, do último
elemento até o primeiro.
*/

#include<stdio.h>
int main(){
    int v[10], i, codigo, a;

    for(i = 0; i < 10; i++){
        printf("vetor[%i]: ", i);
        scanf("%i", &v[i]);
    }

    printf("\nDigite o codigo: ");
    scanf("%i", &codigo);

    switch(codigo){
        case 0: printf("\nAlgoritmo encerrado.");
                  break;
        case 1: printf("\nVETOR\n");
                  for(i = 0; i < 10; i++){
                        printf("%i\t", v[i]);
                  }
                  break;
        case 2: printf("\nVETOR INVERSO\n");
                  for(i = 0; i < 5; i++){
                        a = v[i];
                        v[i] = v [9 - i];
                        v[9 - i] = a;
                  }
                  for(i = 0; i < 10; i++){
                        printf("%i\t", v[i]);
                  }
                  break;
        default:  printf("Opcao Invalida!!");
                  break;
    }

    return 0;
}
