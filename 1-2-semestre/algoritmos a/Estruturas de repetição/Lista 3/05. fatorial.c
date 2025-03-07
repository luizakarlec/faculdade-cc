/*
Faça um algoritmo para ler um valor numérico e calcular e escrever o seu fatorial.
*/

#include<stdio.h>
int main(){
    int fat=1, i, n;

    printf("digite um numero: ");
    scanf("%i",&n);

    i = n;

    while(i!=0){
        fat = fat * i; //fat *= i;
        i--;
    }

    printf("\nfatorial %i!: %i\n",n,fat);

    return 0;
}

/*fatorial n! (n)*(n-1)*(n-2) .... 3*2*1 = ?

for(i=1; 1<=n; i++)
    fat = fat * i
*/
