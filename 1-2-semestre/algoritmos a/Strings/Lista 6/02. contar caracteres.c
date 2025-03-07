/*
Escreva um programa que leia uma string e mostre ao usuário quantos caracteres possui (tamanho da
string).
*/

#include <stdio.h>

int main(){
    char string[50];
    int i, cont = 0;

    printf("Escreva uma string: ");
    scanf("%s", string);

    for(i=0; string[i]; i++){
        cont++;
    }

    printf("A string %s tem %d caracteres.", string, cont);

    return 0;
}
