/*
Faça um programa que leia um caractere e chame uma função para verificar se o caractere é
uma vogal. Ao final, deve ser mostrada uma mensagem (dentro da main) indicando o resultado
do teste. A função deve retornar 1 se for vogal e 0 caso contrário. Para simplificar, considere
apenas as letras sem acentuação.
*/

#include <stdio.h>
#include <ctype.h>

int vogal(char letra){
    if(toupper(letra) == 'A' || toupper(letra) == 'E' || toupper(letra) == 'I' || toupper(letra) == 'O' || toupper(letra) == 'U')
        return 1;
    else
        return 0;
}

int main(){
    char c;
    printf("Digite uma letra: ");
    scanf("%c", &c);
    if (vogal(c) == 1)
        printf("Eh vogal!");
    else 
        printf("Nao eh vogal!");
    
    return 0;
}