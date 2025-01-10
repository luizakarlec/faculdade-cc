/*
Desenvolva um algoritmo que leia n números e mostre o maior e o menor número lido.
*/

#include<stdio.h>
int main(){
    int N,Nmaior=-999999,Nmenor=999999;

    do{
        printf("Digite um numero: ");
        scanf("%i",&N);
        if (N != 0){
            if(N>Nmaior)
                Nmaior=N;
            if(N<Nmenor)
                Nmenor=N;
        }

    }while (N != 0);

    printf("\nnumero maior: %i\n",Nmaior);
    printf("numero menor: %i\n",Nmenor);

    return 0;
}
