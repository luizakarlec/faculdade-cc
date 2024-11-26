/*
Desenvolva um programa, com funções para calcular a área e o perímetro de um terreno
retangular. As medidas do terreno devem ser lidas. Por fim, os valores calculados devem ser
informados ao usuário.
*/

#include <stdio.h>

float calculoArea(float x, float y){
    return x * y;
}

float calculoPerimetro(float x, float y){
    return (x*2) + (y*2);
}

int main(){
    float L1, L2;
    float area, perimetro;
    
    printf("Informe os lados do retangulo: ");
    scanf("%f%f", &L1, &L2);
    area = calculoArea(L1, L2);
    printf("Area = %.2f\n", area);
    perimetro = calculoPerimetro(L1, L2);
    printf("Perimetro = %.2f", perimetro);
    
    return 0;
}