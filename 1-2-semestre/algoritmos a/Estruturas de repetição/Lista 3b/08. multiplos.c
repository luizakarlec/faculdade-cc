/*
Faça um algoritmo para ler um número natural e calcular quantos são múltiplos deste
número maiores que ele e menores que 1000.
*/

#include<stdio.h>
int main(){
    int numero, contador=0, i;

    printf("digite um numero: ");
    scanf("%d",&numero);

    for(i = numero + 1; i < 1000; i++) {
        if(i % numero == 0) {
            contador++;
        }
    }

    printf("\nexistem %i multiplos de %i maiores que %i e menores que 1000\n",contador,numero,numero);

    return 0;
}
