/*
Faça um programa que lê uma string e um caractere e chama uma função para contar quantas vezes o caractere
ocorre na string. Use ponteiros para receber e manipular a string na função.
*/

#include <stdio.h>
#include <string.h>

int contar_caractere(char *s, char *c){
    int i;
    int x = 0;
    
    for(; *s!='\0'; s++){
        if(*s == *c){
            x++;
        }
    }
    
    return x;
}

int main(){
    char string[30], caractere;
    int cont;
    
    printf("Digite uma string: ");
    gets(string);
    printf("Digite um caractere: ");
    scanf("%c", &caractere);
    
    cont = contar_caractere(&string[0], &caractere);
    
    printf("O caractere %c aparece %d vezes na string.", caractere, cont);

    return 0;
}
