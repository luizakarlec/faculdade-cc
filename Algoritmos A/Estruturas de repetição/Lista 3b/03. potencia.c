/*
Faça um algoritmo para ler dois números inteiros. Calcular e mostrar o valor resultante se
elevarmos a base representada pelo primeiro à potência representada pelo segundo.
*/

#include<stdio.h>
int main(){
    int base, potencia, resultado;

    printf("digite dois numeros: ");
    scanf("%d%d",&base,&potencia);

    resultado=pow(base,potencia);

    printf("%d elevado a %d = %d\n", base, potencia, resultado);

    return 0;
}
