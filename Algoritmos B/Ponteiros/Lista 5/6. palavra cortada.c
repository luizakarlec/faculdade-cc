/*
Ler uma palavra e uma letra qualquer. Mostrar a palavra cortada na primeira posição em que a
letra informada for encontrada na palavra.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char palavra[30], letra, *p;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);
    p = palavra;

    printf("Digite uma letra: ");
    fflush(stdin);
    scanf("%c", &letra);

    for(; *p != '\0'; p++){
        if(*p == letra){
            *p = '\0';
        }
    }

    printf("Palavra cortada: %s", palavra);

    return 0;
}
