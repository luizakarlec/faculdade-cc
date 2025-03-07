/*
Escrever um programa em C para ler uma string e copiar para dentro de uma outra string todas as vogais.
Exibir na tela a string formada pelas letras copiadas.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char P[50], V[50], i, vog = 0;

    printf("Digite uma palavra: ");
    scanf("%s", P);

    for(i = 0; P[i]; i++){
        if(toupper(P[i]) == 'A' || toupper(P[i]) == 'E' || toupper(P[i]) == 'I' || toupper(P[i]) == 'O' || toupper(P[i]) == 'U'){
            V[vog] = P[i];
            vog++;
        }
    }

    printf("Vogais da palavra: %s", V);

    return 0;
}
