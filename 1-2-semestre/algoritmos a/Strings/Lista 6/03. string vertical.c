/*
Faça um programa que lê uma string e escreve esta string verticalmente na tela.
*/

#include <stdio.h>

int main(){
    char string[50];
    int i;

    printf("Escreva uma string: ");
    scanf("%s", string);

    printf("\nString vertical:\n");
    for(i=0; string[i]; i++){
        printf("%c\n", string[i]);
    }

    return 0;
}
