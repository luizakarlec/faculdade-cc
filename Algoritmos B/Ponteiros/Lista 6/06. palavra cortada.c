/*
Ler uma palavra e uma letra qualquer. Usar uma função para mostrar a palavra cortada na primeira posição em
que a letra informada for encontrada na palavra. A função main deve exibir a nova string.
*/

#include <stdio.h>
#include <string.h>

void cortar_palavra(char *p, char l){

    for(; *p != '\0'; p++){
        if(*p == l){
            *p = '\0';
        }
    }

}

int main() {
    char palavra[30], letra;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    printf("Digite uma letra: ");
    fflush(stdin);
    scanf("%c", &letra);

    cortar_palavra(palavra, letra);

    printf("Palavra cortada: %s", palavra);

    return 0;
}
