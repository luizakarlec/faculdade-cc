/*
Escrever um programa com uma função que retorna a soma dos números inteiros que existem
entre n1 e n2 (inclusive ambos). A função deve funcionar inclusive se o valor de n2 for menor
que n1. Ler n1 e n2 na função main().
*/

#include <stdio.h>

int somaIntervalo(int x, int y){
    int soma = 0;
    
    if(x>y){
        for(;x>y;y++){
            soma += x;
        }
    }else if(y>x){
                for(;y>x;x++){
                    soma += y;
                }
            }else if(x==y){
                soma = x;
            }
    return soma;
}

int main(){
    int n1, n2, soma;
    
    printf("Digite um numero n1: ");
    scanf("%i", &n1);
    printf("Digite um numero n2: ");
    scanf("%i", &n2);
    
    soma = somaIntervalo(n1, n2);
    
    printf("Soma = %i", soma);

    return 0;
}
