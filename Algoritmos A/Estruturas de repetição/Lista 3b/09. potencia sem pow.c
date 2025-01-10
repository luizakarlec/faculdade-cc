/*
Faça um algoritmo para calcular o resultado de um valor A elevado a um expoente B. Os
valores A e B devem ser lidos. Não utilize a função pow.
*/

#include<stdio.h>
int main(){
    int A,B,potencia=1;
    int i;

    printf("digite dois valores: ");
    scanf("%d%d",&A,&B);

    //A elevado a B

    for(i=1;i<=B;i++){
        potencia = potencia * A;
    }

    printf("\n%d elevado a %d = %d\n",A,B,potencia);

    return 0;
}
