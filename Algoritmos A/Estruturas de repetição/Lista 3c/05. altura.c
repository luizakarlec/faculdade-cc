/*
Paulo tem 1,48 metro e cresce 2 centímetros por ano. Joaquim 1,25 metro e cresce 3
centímetros por ano. Construa um algoritmo que calcule e mostre quantos anos serão
necessários para que Joaquim esteja mais alto que Paulo.
*/

#include<stdio.h>
int main(){
    float paulo, joaquim;
    int ano = 0;

    paulo = 1.30;
    joaquim = 1.25;

    do{
       paulo += 0.02;
       joaquim += 0.03;
       ano++;

    }while (joaquim <= paulo);

    printf("Serao necessarios %i anos para que Joaquim esteja mais alto que Paulo", ano);

    return 0;
}
