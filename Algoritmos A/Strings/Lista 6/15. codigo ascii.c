/*
Criar uma string com todas as letras do alfabeto.
*/

#include <stdio.h>
int main (){
    int i;

    printf("Alfabeto segundo o Codigo Ascii: \n");
    for(i = 97; i <= 122; i++){
        printf("Codigo: %i || Letra: %c\n", i, i);
    }

    return 0;
}
