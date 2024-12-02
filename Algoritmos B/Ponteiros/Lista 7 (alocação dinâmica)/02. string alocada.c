/*
Faça um programa que lê uma string, letra por letra, e ao final da execução mostra a string completa. Antes
de começar a ler as letras de string, peça para o usuário informar o tamanho da string e aloque
dinamicamente um vetor com o tamanho necessário.
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    char *string, *s;
    int t;
    int i;

    printf("Informe o tamanho da string: ");
    scanf("%i", &t);

    string = (char*) malloc(t);
    s = string;

    for(i=0; i<t; i++){
        printf("Letra %i: ", i+1);
        fflush(stdin);
        scanf("%c", s+i);
    }

    printf("String digitada: %s", string);

    free(string);

    return 0;
}
