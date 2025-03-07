/*
Ler uma string e inverte-la dentro da mesma string.
*/

#include <stdio.h>

int main() {
    char str[50], *p1, *p2, aux;
    int i, tam;
    
    printf("Digite uma string: ");
    gets(str);
    
    tam = strlen(str);
    p1 = str;               //ponteiro para o inicio da string
    p2 = str + tam - 1;     //ponteiro para o final da string
    
    for(i=0; i<(tam/2); i++){
        aux = *p1;
        *p1 = *p2;
        *p2 = aux;
        
        p1++;
        p2--;
    }
    
    printf("String invertida: %s\n", str);

    return 0;
}

