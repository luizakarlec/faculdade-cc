/*
Escreva uma função em C que receba como parâmetro uma letra e uma string, e retorne um
valor inteiro indicando quantas vezes a letra aparece na string. A função main deve ler a string,
a letra e chamar a função implementada.
*/

#include <stdio.h>

int contarLetra(char s[], char l){
    int cont, i;
    
    for(i=0; s[i]; i++){
        if(s[i] == l){
            cont++;
        }
    }
    
    return cont;
}

int main(){
    char letra, string[50];
    int n;

    printf("Digite uma letra: ");
    scanf("%c", &letra);    
    printf("Digite uma string: ");
    scanf("%s", string);

    n = contarLetra(string, letra);
    
    printf("A letra aparece %i vezes na string", n);

    return 0;
}
