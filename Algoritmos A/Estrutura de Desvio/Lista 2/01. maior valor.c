/*
Escreva um algoritmo para ler três valores inteiros e escrever na tela o maior deles. Considere
que todos os valores são diferentes.
*/

#include<stdio.h>
int main(){
    int a,b,c;

    printf("informe 3 valores: ");
    scanf("%i%i%i",&a,&b,&c);

    if(a>b)
        if(a>c)
            printf("maior valor: %i",a);
    if(b>a)
        if(b>c)
            printf("maior valor: %i",b);
    if(c>b)
        if(c>a)
            printf("maior valor: %i",c);


    return 0;
}
