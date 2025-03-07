/*
Ler a idade de uma pessoa expressa em anos, meses e dias. O algoritmo deve mostrar a
idade da pessoa em dias (considere que todos os anos tem 365 dias e todos os meses tem 30 dias).
*/

#include<stdio.h>
int main(){
    int dia,mes,ano,total;

    printf("informe a idade en anos, meses e dias: ");
    scanf("%d%d%d",&ano,&mes,&dia);

    total=(ano*365)+(mes*30)+dia;

    if(mes>=13 || dia>=31)
        printf("mes ou dia invalido\n");
    else
        printf("idade em dias: %d\n",total);

    return 0;
}
