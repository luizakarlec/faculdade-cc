/*
Ler uma palavra qualquer e uma letra qualquer. Contar quantas vezes esta letra é encontrada na palavra.
*/

#include <stdio.h>
int main(){
    char palavra[50], letra;
    int i, cont=0;

    printf("Informe uma palavra: ");
    scanf("%s", palavra);
    printf("Informe uma letra: ");
    scanf(" %c", &letra);

    for(i=0; palavra[i]; i++){
        if(palavra[i] == letra){
            cont++;
        }
    }

    printf("A letra %c aparece %i vezes na palavra.", letra, cont);

    return 0;
}
