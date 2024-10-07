/*
String lida a partir do primeiro espaço (indexação)
*/

#include <stdio.h>

int main(){
    char str[20], *point;
    int i;
    
    printf("Digite uma string: ");
    gets(str);
    
    if(str[0] != '\0'){
        for(i=0; str[i] && str[i] != ' '; i++);
        if(str[i]) point = &str[i] + 1; //se nao chegou no fim, parou no espaço pula espaço
        printf("%s", point);
    }
    else printf("Nao foi digitada nenhuma palavra!");

    return 0;
}
