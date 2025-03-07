#include <stdio.h>
#include <stdlib.h>

int main(){
    char *s, *aux;
    int *v, tam;

    printf("Digite o tamanho da string: ");
    scanf("%d", &tam);

    //alocacao de string
    s = (char*) malloc(tam); //tamanho do char é 1
    if(!s){
        printf("Erro na alocacao!");
        exit(-1);
    }

    printf("Digite a palavra: ");
    fflush(stdin);
    gets(s);
    aux = s;
    for(; *aux; aux++)
        printf("%c\n", *aux);

    free(s);
}
