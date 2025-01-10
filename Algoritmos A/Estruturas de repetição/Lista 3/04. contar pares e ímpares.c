/*
Contar a quantidade de números pares e ímpares digitados por um usuário enquanto o
número for diferente de zero.
*/

#include<stdio.h>
int main(){
    int n, qp = 0, qi = 0;

    printf("digite um numero: ");
    scanf("%i",&n);

    while(n!=0){
        if(n%2 == 0)
            qp++;
        else
            qi++;
        printf("digite um numero: ");
        scanf("%i",&n);
    }
    printf("\nquantidade par: %d\n",qp);
    printf("quantidade impar: %d\n",qi);

    return 0;
}
