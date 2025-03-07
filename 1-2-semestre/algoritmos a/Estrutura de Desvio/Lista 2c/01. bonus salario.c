/*
A empresa XYZ decidiu dar um aumento a seus funcionários de acordo com a seguinte
regra:
   13% para os salários inferiores ou iguais a R$ 2000,00;
   11% para os salários situados entre R$ 2000,0 e R$ 4000,00 (inclusive);
   9 % para os salários entre R$ 4000,00 e R$ 8000,00 (inclusive); e
   7% para os demais salários.
Desenvolva um programa que receba o salário atual de um funcionário e forneça o valor do
seu novo salário. Mostre também o bônus (em reais e em %).
*/

#include<stdio.h>
int main(){
    float salario,salarionovo,bonus;

    printf("informe o salario atual: ");
    scanf("%f",&salario);

    if(salario<=2000){
        bonus=salario*0.13;
        salarionovo=salario+bonus;
        printf("\nbonus em %%: 13%%\n");
    }else if(salario>2000 && salario<=4000){
            bonus=salario*0.11;
            printf("\nbonus em %%: 11%%\n");
            salarionovo=salario+bonus;
        }else if(salario>4000 && salario<=8000){
                bonus=salario*0.09;
                salarionovo=salario+bonus;
                printf("\nbonus em %%: 9%%\n");
            }else{
                bonus=salario*0.07;
                salarionovo=salario+bonus;
                printf("\nbonus em %%: 7%%\n");
            }

    printf("bonus em reais: %.2f\n",bonus);
    printf("novo salario: %.2f\n",salarionovo);

    return 0;
}
