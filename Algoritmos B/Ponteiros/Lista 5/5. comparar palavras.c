/*
Ler duas palavras e compará-las. O programa deve informar se as palavras são iguais, em caso
contrário, informar se a primeira é maior do que a segunda, se a segunda é maior do que a primeira
ou se são diferentes e tem o mesmo tamanho.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char palavra1[30], palavra2[30];
    char *p1, *p2;
    int tam1, tam2;

    printf("Digite a primeira palavra: ");
    scanf("%s", palavra1);
    
    printf("Digite a segunda palavra: ");
    scanf("%s", palavra2);
    
    //ponteiros nas string
    p1 = palavra1;
    p2 = palavra2;
    
    //função para ver o tamanho
    tam1 = strlen(*p1);
    tam2 = strlen(*p2);
    
    //compara palavras
    int comp = 0;
    for(; *p1 != '\0' || *p2 != '\0'; p1++, p2++){
        if(*p1 != *p2){
            comp = 1;
        }
    }
    
    if(comp == 0){
        printf("Palavras sao iguais.");
    }else if(tam1 > tam2){
                printf("Palavra 1 maior que palavra 2.");
            }else if(tam2 > tam1){
                        printf("Palavra 2 maior que palavra 1.");
                    }else if(tam1 == tam2){
                                printf("Palavras sao diferentes com tamanhos iguais.");
                            }
    return 0;
}
