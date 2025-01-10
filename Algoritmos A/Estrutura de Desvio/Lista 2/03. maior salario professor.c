/*
Escreva um algoritmo para ler a quantidade de horas aula trabalhadas por dois professores e o
valor por hora recebido por cada um deles. Mostrar na tela qual dos professores tem o maior
salário total.
*/

#include<stdio.h>
int main(){
    float h1,h2,v1,v2;
    float salario1,salario2;

    printf("horas trabalhadas prof 1: ");
    scanf("%f",&h1);
    printf("valor por hora: ");
    scanf("%f",&v1);
    printf("horas trabalhadas prof 2: ");
    scanf("%f",&h2);
    printf("valor por hora: ");
    scanf("%f",&v2);

    salario1=h1*v1;
    salario2=h2*v2;

    if(salario1>salario2){
        printf("prof 1 ganha mais");
    }else{
        if(salario2>salario1){
            printf("prof 2 ganha mais");
        }else{
            printf("salario igual");
            }
    }

    return 0;
}
