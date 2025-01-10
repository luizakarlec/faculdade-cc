/*
Escrever um programa em C para ler uma string e um número n, e eliminar n caracteres do final da string.
A string resultante deve ser mostrada na tela.
*/

#include <stdio.h>
#include <ctype.h>
int main(){
    char s[50];
    int n, i, t, tt;

    printf("String: ");
    scanf("%s", s);

    printf("Numero N: ");
    scanf("%i", &n);

    t = strlen(s); //tamanho
    tt = t - n; //tamanho - n

    for(i = 0; i <= tt - 1; i++){
        printf("%c", s[i]);
    }

    return 0;
}
