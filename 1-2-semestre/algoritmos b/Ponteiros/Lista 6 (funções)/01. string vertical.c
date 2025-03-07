/*
Ler uma string e desenvolver uma função para escreve-la verticalmente na tela.
*/

#include <stdio.h>
#include <string.h>

void strVertical(char *q, char s[]){
    int i;
    
    for(i=0; s[i]; i++){
        printf("%c\n", q[i]);
    }
    
    return 0;
}

int main(){
    char str[20], *p;
    
    printf("Digite uma string: ");
    gets(str);
    
    p = &str[0];
    
    strVertical(p, str);

    return 0;
}
