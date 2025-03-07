/*
Faça um algoritmo para calcular e escrever a tabuada dos números de 1 a 10.
*/

#include<stdio.h>
int main(){
    int fator1,fator2,produto;

    printf("\n***TABUADAS***\n\n");

    for(fator1=1;fator1<=10;fator1++){
        for(fator2=1;fator2<=10;fator2++){
            produto=fator1*fator2;
            printf("%d * %d = %d\n",fator1,fator2,produto);
        }printf("\n");
    }

    return 0;
}
