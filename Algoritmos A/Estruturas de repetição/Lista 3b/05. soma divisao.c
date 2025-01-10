/*
Faça um algoritmo para calcular e mostrar a soma dos 50 primeiros elementos da série
1000/1 - 997/2 + 994/3 - 991/4 + ...
*/

#include<stdio.h>
int main(){
    int dividendo=1000,divisor=1,contador=1;
    float resultado, somatorio=0;

    do{
        if(divisor%2 == 0)
            resultado = (float) (-dividendo)/divisor;
        else
            resultado = (float) (dividendo)/divisor;

        somatorio += resultado;
        printf("%d / %d = %.2f\n",dividendo,divisor,resultado);

        dividendo -= 3;
        divisor++;

        contador++;
    }while(contador<=50);

    printf("\n SOMA = %.2f\n\n",somatorio);

    return 0;
}
