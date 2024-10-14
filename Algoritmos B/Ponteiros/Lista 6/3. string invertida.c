/*
Ler uma string e chamar uma função para inverte-la dentro da mesma string. Mostrar a string invertida.
*/

#include <stdio.h>
#include <string.h>

void inverter(char *ps){
    char *pf, aux;
    pf = ps;
    
    // laço para posicionar pf no final da string (\0)
    while (*pf != '\0') {
        pf++;
    }
    
    // reposiciona pf para apontar para o último caractere da string
    pf--;

    // inverte a palavra
    while (ps < pf) {
        aux = *ps;
        *ps = *pf;
        *pf = aux;
        ps++;
        pf--;
    }
}

int main(){
    char str[30];
    
    printf("Digite uma string: ");
    gets(str);
    
    inverter(str);
    
    printf("String invertida: %s\n", str);
    
    return 0;
}
