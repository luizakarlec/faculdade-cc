/*
Faça um programa leia o salário mensal de um funcionário e calcule o desconto do INSS,
conforme as alíquotas da tabela:

Salário Alíquota || INSS
até R$ 965,67 || 8 %
de R$ 965,68 a R$ 1.609,45 || 9 %
de R$ 1.609,46 até R$ 3.218,90 || 11 %

O algoritmo deverá apresentar como resultado o salário mensal do funcionário, o percentual de
desconto do INSS e o valor em Reais do desconto do INSS e o salário líquido (salário mensal
menos o valor do INSS).
*/

#include<stdio.h>
int main (){
    float salario,desconto,liquido;

    printf("informe o salario: ");
    scanf("%f",&salario);

    printf("salario = %f\n",salario);

    if(salario<=965.67){
        printf("desconto = 8%%\n");
        desconto=salario*8/100;
        printf("valor desconto = %f\n",desconto);
        liquido=salario-desconto;
        printf("salario liquido = %f\n",liquido);
    }else if(salario>=965.68 && salario<=1609.45){
        printf("desconto = 9%%\n");
        desconto=salario*9/100;
        printf("valor desconto = %f\n",desconto);
        liquido=salario-desconto;
        printf("salario liquido = %f\n",liquido);
    }else{
        printf("desconto = 11%%\n");
        desconto=salario*11/100;
        printf("valor desconto = %f\n",desconto);
        liquido=salario-desconto;
        printf("salario liquido = %f\n",liquido);
    }

    return 0;
}
