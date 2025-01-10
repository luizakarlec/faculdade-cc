/*
Escreva um algoritmo que leia e mostre um vetor de 20 elementos inteiros. A seguir,
conte quantos valores pares existem no vetor.
*/

#include<stdio.h>
int main(){
    int v[20], x, par = 0;

    printf("Digite 20 numeros inteiros: \n");

    x = 0;
    while(x <= 19){ // OU (x < 20)
        printf("Vetor[%i]: ", x);
        scanf("%i", &v[x]);

        if(v[x]%2 == 0){
            par++;
        }

        x++;
    }

    printf("\nNumero de valores pares no vetor: %i\n", par);

    return 0;
}
