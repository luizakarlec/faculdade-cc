/*
Faça um algoritmo para ler dois valores inteiros. O primeiro representa o primeiro
elemento de uma progressão aritmética (PA) e o segundo a razão desta progressão
aritmética. Calcule e mostre os 10 elementos seguintes.
*/

#include<stdio.h>
int main(){
    int x, razao, soma=0, i;

    printf("informe um elemento da PA: ");
    scanf("%i",&x);
    printf("informe a razao da PA: ");
    scanf("%i",&razao);

    soma = x;

    for(i=1; i<=10; i++){
        printf("\nelemento %i da PA: %i\n",i,soma);
        soma = soma + razao;
    }

    return 0;
}
