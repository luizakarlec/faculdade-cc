/*
Ler uma palavra e invertê-la, dentro da mesma string.
*/

#include <stdio.h>
int main(){
    char s[30], *ps, *pf, aux;
    pf = ps = s;
    
    printf("Digite uma palavra: ");
    scanf("%s", s);

    //laço para posicionar pf no \0
    for( ;*pf != '\0'; pf++);
    
    //posicionar o ponteiro na ultima letra
    pf--;
    
    //inverter a palavra
    for( ;ps<pf; ps++,pf--){
        aux = *ps;
        *ps = *pf;
        *pf = aux;
    }
    
    printf("Palavra invertida: %s", s);

    return 0;
}
