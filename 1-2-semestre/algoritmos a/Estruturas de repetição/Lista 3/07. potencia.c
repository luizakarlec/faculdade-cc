/*
Exibir as potências de um número (base) elevado a um intervalo de expoentes. Por
exemplo, se o usuário digitar o número 2 e o intervalo de potências 2 a 5, o algoritmo
deve exibir o resultado das potências de 22, 23, 24 e 25. Utilize a função pow.
*/

#include<stdio.h>
int main(){
    int base,pow1,pow2,contador,resultado;

    printf("numero base: ");
    scanf("%i",&base);
    printf("intervalo de potencias: ");
    scanf("%i%i",&pow1,&pow2);

    for(contador=pow1;contador<=pow2;contador++){
        printf("base %i elevado a %i ==\t",base,contador);
        resultado = pow(base,contador);
        printf("%i\n",resultado);
    }

    return 0;
}
