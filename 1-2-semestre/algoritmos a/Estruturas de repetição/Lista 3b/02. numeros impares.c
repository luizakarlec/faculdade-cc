/*
Faça um algoritmo para ler um número menor que 1000 e calcular e mostrar todos os
números ímpares maiores que o número lido e menores que 1000.
*/

#include<stdio.h>
int main(){
    int numero,contador;

    printf("digite um numero: ");
    scanf("%i",&numero);

    if(numero<=1000){
        // impares maiores que numero
        for(contador = numero; contador <= 1000; contador++){
            if(contador%2 == 1)
            printf("%i\t", contador);
        }
    }else
        printf("numero invalido, apenas numeros menores que 1000\n");

    return 0;
}
