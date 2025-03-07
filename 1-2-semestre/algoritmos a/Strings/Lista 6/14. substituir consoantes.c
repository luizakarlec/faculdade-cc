/*
Ler uma string qualquer e substituir todas as consoantes por ‘*’. Apresentar a nova string como resultado.
*/

#include <stdio.h>
#include <ctype.h>
int main(){
    char string[50];
    int i;

    printf("Escreva uma string: ");
    scanf("%s", string);

    for(i = 0; string[i]; i++){
        if(toupper(string[i]) != 'A' && toupper(string[i]) != 'U' && toupper(string[i]) != 'E' && toupper(string[i]) != 'I' && toupper(string[i]) != 'O'){
            string[i] = '*';
        }
    }

    printf("Nova string: %s", string);

    return 0;
}
