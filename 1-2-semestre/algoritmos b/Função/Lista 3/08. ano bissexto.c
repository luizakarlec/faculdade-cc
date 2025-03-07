/*
Escreva uma função que verifique se um determinado ano é bissexto. Os anos bissextos são
anos com um dia a mais, tendo portanto 366 dias. O dia extra é introduzido como o dia 29 de
fevereiro, ocorrendo a cada quatro anos. No final do século XVI foi introduzido o calendário
Gregoriano, usado até hoje na maioria dos países, adotando as seguintes regras:

a. Todo ano divisível por 4 é bissexto
b. Todo ano divisível por 100 não é bissexto
c. Mas se o ano for também divisível por 400 é bissexto
d. Prevalece as últimas regras sobre as primeiras

Essas regras foram introduzidas para reduzir ainda mais o erro no calendário. O ano de 2000 foi
o primeiro a usar a terceira regra.
*/

#include <stdio.h>

void anobissexto(int a){
    int b;
    
    if(a%400 == 0){
        b = 1;
    }else if(a%100 == 0){
                b = 0;
            }else if(a%4 == 0){
                        b = 1;
                    }
    
    if(b == 1){
        printf("O ano eh bissexto!");
    }
    
    if(b == 0){
        printf("O ano NAO eh bissexto!");
    }
    
}

int main(){
    int ano;
    
    printf("***VERIFICACAO ANO BISSEXTO***\n");
    printf("Digite um ano: ");
    scanf("%i", &ano);
    
    anobissexto(ano);

    return 0;
}
