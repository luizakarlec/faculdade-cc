/*
Ler uma string e um número inteiro, que representa o número de caracteres. Eliminar n caracteres do início
da string e apresentar a string resultante.
*/

#include <stdio.h>
int main(){
    char palavra[50];
    int n, i;

    printf("Escreva uma palavra: ");
    scanf("%s", palavra);
    printf("Escolha um numero: ");
    scanf("%d", &n);

    printf("\nPalavra - %d caracteres: ", n);
    for(i = n; palavra[i]; i++){
        printf("%c", palavra[i]);
    }

    return 0;
}
