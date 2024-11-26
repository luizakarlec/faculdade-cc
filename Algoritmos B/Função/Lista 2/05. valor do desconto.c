/*
Escreva um programa que leia o preço de um produto, em reais, e o percentual de desconto.
Faça uma função para calcular e retornar o valor do desconto em reais.
*/

#include<stdio.h>

float calculoDesconto(float p, float d){
    return p*d/100;
}

int main(){
    float produto, desconto;
    float valordesconto;

    printf("Preco do produto: ");
    scanf("%f", &produto);
    printf("Percentual desconto: ");
    scanf("%f", &desconto);
    valordesconto = calculoDesconto(produto, desconto);
    printf("Valor do desconto = %.2f", valordesconto);

    return 0;
}