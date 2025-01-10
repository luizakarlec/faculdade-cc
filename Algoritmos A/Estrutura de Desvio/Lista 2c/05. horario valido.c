/*
Fazer um algoritmo que leia valores para as variáveis hora, minuto e segundo; verificando e
escrevendo se elas correspondem a um horário válido ou não. Para um horário ser válido, a hora
deve estar no intervalo de 0 a 23, o minuto e o segundo no intervalo de 0 a 59.
*/

#include<stdio.h>
int main (){
    int hora,minuto,segundo;

    printf("informe um horario em horas minutos e segundos: ");
    scanf("%d%d%d",&hora,&minuto,&segundo);

    if(hora>24 || minuto>60 || segundo>60)
        printf("horario invalido");
    else
        printf("horario valido");

    return 0;
}
