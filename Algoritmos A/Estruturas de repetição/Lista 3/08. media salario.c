/*
Ler o salário de 10 funcionários e calcular a média de salários.
*/

#include<stdio.h>
int main(){
    int i;
    float soma=0, media, salario;

    i=1;
    for(i=1; i<=10; i++){
        printf("Digite o salario %d: ", i);
        scanf("%f", &salario);
        soma += salario;
    }
    media = soma/10;
    printf("\nmedia dos salarios: %.2f\n", media);

    return 0;
}
