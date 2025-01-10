/*
Escreva um programa que leia uma palavra qualquer e verifique se esta palavra é um palíndromo.
*/

#include <stdio.h>
#include<string.h>

int main(){
    char p[50];
    int i, j, tam, flag = 1; 

    printf("\nPalavra: ");
    gets(p);

    //tamanho p
    for(tam = 0; p[tam] != '\0'; tam++);
    //ou tam = strlen(p);

    for(i=0, j=tam-1; i<j ; i++, j--){
        if(p[i] != p[j]){
            flag = 0; 
        }
    }

    if(flag == 1){
        printf("\nEh palindromo.");
    }else{
        printf("\nNao eh palindromo.");
    }

    return 0;
}
