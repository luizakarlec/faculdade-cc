/*
Escreva um programa que pede para o usuário digitar um número que corresponda a um
dia da semana. O programa deve apresentar na tela o nome do dia. Utilize o comando
switch.
*/

#include<stdio.h>
int main (){
    int dia;

    printf("digite um numero que corresponda a um dia da semana: ");
    scanf("%d",&dia);

    if(dia==1)
        printf("domingo");
        else if(dia==2)
                printf("segunda");
                else if(dia==3)
                        printf("terca");
                        else if(dia==4)
                                printf("quarta");
                                else if(dia==5)
                                        printf("quinta");
                                        else if(dia==6)
                                                printf("sexta");
                                                else if(dia==7)
                                                        printf("sabado");
                                                        else
                                                            printf("dia invalido");

    return 0;
}
