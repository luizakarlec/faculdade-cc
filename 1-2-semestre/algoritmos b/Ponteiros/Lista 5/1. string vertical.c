/*
Ler uma string e escreve-la verticalmente na tela.
*/

#include <stdio.h>

int main(){
    char str[20], *p;
    int i;
    
    printf("Digite uma string: ");
    gets(str);
    
    p = &str[0];
    
    for(i=0; str[i]; i++){
        printf("%c\n", p[i]);
    }

    return 0;
}
