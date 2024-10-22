/*
Ler duas palavras e usar uma função para compará-las. A main deve informar se as palavras são iguais ou
diferentes.
*/

#include <stdio.h>
#include <string.h>

int compara_palavras(char *p1, char *p2){
    int c = 0;
    for(; *p1 != '\0' || *p2 != '\0'; p1++, p2++){
        if(*p1 != *p2){
            c = 1;
        }
    }
    return c;
}

int main() {
    char palavra1[30], palavra2[30];
    int comp;

    printf("Digite a primeira palavra: ");
    scanf("%s", palavra1);
    
    printf("Digite a segunda palavra: ");
    scanf("%s", palavra2);
    
    comp = compara_palavras(palavra1, palavra2);
   
    if(comp == 0){
        printf("Palavras sao iguais.");
    }else{
        printf("Palavras sao diferentes.");
    }
    
    return 0;
}
