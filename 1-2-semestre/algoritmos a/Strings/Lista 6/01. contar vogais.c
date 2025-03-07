/*
Escreva um programa que leia uma palavra qualquer e conte o número de vogais.
*/

#include <stdio.h>
#include<ctype.h>

int main(){
    char palavra[40];
    int i, vog = 0;

    printf("Escreva uma palavra: ");
    scanf("%s", palavra);

    for(i=0; palavra[i]; i++){
        if(toupper(palavra[i]) == 'A' || toupper(palavra[i]) == 'E' || toupper(palavra[i]) == 'I' || toupper(palavra[i]) == 'O' ||toupper(palavra[i]) == 'U'){
            vog++;
        }
    }

    printf("A palavra %s tem %d vogais.", palavra, vog);

    return 0;
}
