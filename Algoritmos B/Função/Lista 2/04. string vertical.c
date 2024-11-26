/*
Escrever um programa que lê uma string e chama uma função para escrevê-la verticalmente na
tela
*/

#include <stdio.h>

void stringVertical(char s[]){
    int i;
    printf("String vertical: \n");
    for(i=0; s[i]; i++){
        printf("%c\n", s[i]);
    }
}

int main(){
    char string[40];
    
    printf("Escreva uma string: ");
    scanf("%s", string);
    stringVertical(string);

    return 0;
}