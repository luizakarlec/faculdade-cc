/*
Escreva um algoritmo que lê três valores para os lados de um triângulo (cada lado do
triângulo deve ser menor que a soma dos outros dois lados). O programa deve verificar se os lados
fornecidos formam realmente um triângulo, e caso esta condição seja verdadeira, se o triângulo é
equilátero (todos lados iguais), isósceles (dois lados iguais) ou escaleno (todos lados diferentes)
*/

#include<stdio.h>
int main (){
    float a,b,c;

    printf("informe tres lados de um triangulo: ");
    scanf("%f%f%f",&a,&b,&c);

    if(a+b>c && a+c>b && b+c>a){
        printf("formam um traingulo\n");
        if(a==b && b==c){
            printf("triangulo equilatero\n");
        }else if(a == b || a == c || b == c){
            printf("triangulo isosceles\n");
        }else{
            printf("triangulo escaleno\n");
        }

    }else{
        printf("nao e um triangulo\n");
    }

    return 0;
}
