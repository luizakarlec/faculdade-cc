/*
Ler uma string e escreve-la verticalmente na tela.
*/

#include <stdio.h>

int main() {
    char str[50], *p;
    int x = 0;

    printf("Digite uma string: ");
    gets(str);

    p = str;

    while (*p != '\0') {
        x++; //variavel contador
        p++; //ponteiro
    }

    printf("A string possui %d caracteres.\n", x);

    return 0;
}

