/*
Somar uma sequencia de números digitados enquanto os números são diferentes de zero.
*/

#include<stdio.h>
int main(){
    int n=1, soma=0;

    while(n!=0){
        printf("digite um numero: ");
        scanf("%i",&n);
        soma += n;
    }

    printf("\nsoma: %i\n",soma);

    return 0;
}
