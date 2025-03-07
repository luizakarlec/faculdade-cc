/*
Encontre as raízes de uma equação de 2º grau ax2 + bx + c. O algoritmo deverá ler os
coeficientes a, b e c e calcular as raízes utilizando a fórmula de Báskara.
O algoritmo deve ficar lendo os valores dos coeficientes a, b e c até que os valores
fornecidos para os três coeficientes sejam 0 (zero). Para cada conjunto de valores de
coeficientes lidos, o algoritmo deverá calcular e escrever os valores das duas raízes x1 e
x2. Se as raízes forem imaginárias (∆ negativo, sendo ∆ = b2 - 4ac ) o algoritmo deverá
escrever que não foi possível calcular as raízes. Se a = 0, ele deve escrever que a equação
é de primeiro grau.
*/

#include <stdio.h>
int main(){
    float a, b, c;
    float delta, x1, x2;

    printf("*** Calculadora de Bhaskara ***\n");

    do{
        printf("\nInforme 3 valores a b c: ");
        scanf("%f%f%f", &a, &b, &c);

        delta = (b*b) - (4*a*c);
        x1 = (-b + delta)/(2*a);
        x2 = (-b - delta)/(2*a);

        if(a == 0 && b == 0 && c == 0){
            printf("Fim do laco.");
        } else if (a == 0) {
                printf("A equacao eh de primeiro grau.\n");
                } else if (delta < 0){
                        printf("Nao foi possivel calcular as raizez.\n");
                        } else {
                            printf("X1 = %.2f\n", x1);
                            printf("X2 = %.2f\n", x2);
                            }

    } while(a != 0 || b != 0 || c != 0);

    return 0;
}
