/*
Ler uma string e chamar uma função para contar quantos caracteres possui. A main deve exibir a quantidade de
caracteres.
*/

#include <stdio.h>
#include <string.h>

contar(char *p){
    int n = 0;
    
    for(; *p != '\0'; p++){
        n++;
    }
    
    /*
     while (*p != '\0') {  // percorre a string ate encontrar '\0'
        n++;
        p++;  // move o ponteiro para o próximo caractere
    }
    */
    return n;
}

int main(){
    char str[30];
    int Ncaracteres;
    
    printf("Digite uma string: ");
    gets(str);
    
    Ncaracteres = contar(&str);
    
    printf("A string possui %d caracteres.", Ncaracteres);
    
    return 0;
}
