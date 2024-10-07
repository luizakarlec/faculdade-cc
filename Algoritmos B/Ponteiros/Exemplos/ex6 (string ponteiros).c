/*
String lida a partir do primeiro espaço (ponteiros)
*/

#include <stdio.h>

int main(){
    char str[20], *point;
    
    printf("Digite uma string: ");
    gets(str);
    
    if(str[0] != '\0'){
        for(point = str; *point && *point != ' '; point++);
        if(*point) point++;
            printf("%s", point);
    }
    else printf("Nao foi digitada nenhuma palavra!");

    return 0;
}
