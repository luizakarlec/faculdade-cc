/*
Escrever um programa que leia uma palavra qualquer e use uma função para verificar se esta palavra é um
palíndromo. 
*/

#include <stdio.h>

int palindromo(char *p1){
    char *p2;
    int flag = 0;
    p2 = p1;
    
    //laço para posicionar pf no \0
    for( ;*p2 != '\0'; p2++);

    //colocar na ultima letra
    p2--;

    //conferir palindromo
    for( ;p1<p2; p1++,p2--){
        if(*p1 != *p2)
            flag = 1;
    }
    
    return flag;
}

int main(){
    char palavra[20];
    int p;
    
    printf("Digite uma palavra: ");
    scanf("%s", palavra);
    
    p = palindromo(palavra);
    
    if(p == 0){
        printf("Eh palindromo!!");
    }else{
        printf("NAO eh palindromo!!");
    }

    return 0;
}
