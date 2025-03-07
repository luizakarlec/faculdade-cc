/*
Faça um programa, com uma função que recebe como parâmetro uma letra e uma string, e
retorne um valor inteiro indicando quantas vezes a letra aparece na string. A função main deve
ler a string, a letra e chamar a função implementada.
*/

#include <stdio.h>

void flush_in() {
    int ch;
    do {
        ch = fgetc(stdin);
    } while (ch != EOF && ch != '\n');
}

int contar(char c, char p[]){
    int x = 0, i;
    for(i=0; p[i]; i++){
        if(p[i] == c) x++;
    }
    
    return x;
}

int main(){
   char str[50], letra;
   int q;
   printf("Digite uma palavra: ");
   scanf("%s", str);
   printf("Digite uma letra: ");
   flush_in();
   scanf("%c", &letra);
   q = contar(letra, str);
   printf("A letra %c aparece %d vezes em %s", letra, q, str);

    return 0;
}