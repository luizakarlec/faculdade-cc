/*
Escrever um programa que leia uma palavra qualquer e verifique se esta palavra é um palíndromo. 
*/

#include <stdio.h>
int main(){
    char s[20], *p1, *p2;
    int flag = 0;
    
    printf("Digite uma palavra: ");
    scanf("%s", s);
    
    p1 = p2 = &s[0];
    
    //laço para posicionar pf no \0
    for( ;*p2 != '\0'; p2++);
    
    p2--;
    
    //conferir palindromo
    for( ;p1<p2; p1++,p2--){
        if(*p1 != *p2)
            flag = 1;
    }
    
    if(flag == 0)
        printf("PALINDROMO!");
    else
        printf("Nao eh palindromo.");

    return 0;
}
