/*
Ler uma palavra e uma letra qualquer. Mostrar a palavra cortada na primeira posição em que encontrar a
letra informada.
*/

#include<stdio.h>
#include<strings.h>

int main(){
    char palavra[50], n;
    int i;

    printf("Escreva uma palavra qualquer: ");
    gets(palavra);

    printf("\nEscreva uma letra: ");
    fflush(stdin);
    scanf("%c", &n);

    for(i=0; palavra[i]; i++){
      if(palavra[i] == n){
          palavra[i] = '\0';
        }
    }

    printf("\nPalavra cortada: %s", palavra);

    return 0;
}
