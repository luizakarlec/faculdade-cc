/*
Escreva um programa que leia uma palavra qualquer e escreva como resultado a mesma palavra na ordem
inversa.
*/

#include<stdio.h>

int main(){
    char palavra[50];
    int i, tam = 0;

    printf("Escreva uma palavra qualquer: ");
    scanf("%s", palavra);

    for(i=0; palavra[i]; i++){
        tam++;
    }

    printf("\nPalavra inversa: ");
    for(i=tam; i>=0; i--){
        printf("%c", palavra[i]);
    }

    return 0;
}
