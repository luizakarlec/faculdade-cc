/*
Ler uma palavra e substituir todas as vogais por #. Mostar a palavra modificada.
*/

#include <stdio.h>
#include<ctype.h>

int main(){
    char palavra[40];
    int i;

    printf("Escreva uma palavra: ");
    scanf("%s", palavra);

    for(i=0; palavra[i]; i++){
        if(toupper(palavra[i]) == 'A' || toupper(palavra[i]) == 'E' || toupper(palavra[i]) == 'I' || toupper(palavra[i]) == 'O' ||toupper(palavra[i]) == 'U'){
            palavra[i] = '#';
        }
    }

    printf("Palavra modificada: %s", palavra);

    return 0;
}
