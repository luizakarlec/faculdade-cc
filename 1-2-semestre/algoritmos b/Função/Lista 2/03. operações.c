/*
Escrever um programa que leia dois números e a seguir realize as operações aritméticas básicas
(+, -, *, /) sobre estes números. Cada uma das operações deve ser implementada em uma função
diferente
*/

#include <stdio.h>

void somar(float a, float b){
    float soma;
    soma = a + b;
    printf("Soma = %.2f\n", soma);
}

void subtrair(float a, float b){
    float diferenca;
    diferenca = a - b;
    printf("Subtracao = %.2f\n", diferenca);
}

void multiplicar(float a, float b){
    float multiplicacao;
    multiplicacao = a * b;
    printf("Multiplicacao = %.2f\n", multiplicacao);
}

void dividir(float a, float b){
    float divisao;
    divisao = a / b;
    printf("Divisao = %.2f\n", divisao);
}

int main(){
    float x, y;
    
    printf("Informe dois numeros: ");
    scanf("%f%f", &x, &y);
    
    somar(x, y);
    subtrair(x, y);
    multiplicar(x, y);
    dividir(x, y);
    
    return 0;
}