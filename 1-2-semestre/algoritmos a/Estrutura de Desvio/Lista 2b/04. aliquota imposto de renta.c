/*
Considere a tabela de Alíquota de Imposto de Renda (IR) a seguir. Desenvolva um
algoritmo para ler um valor de salário mensal, mostrar o % da alíquota do imposto de Renda e o
valor em R$ da alíquota.
Base de cálculo mensal em R$ || Alíquota %
Até 1.566,61 || -
De 1.566,62 até 2.347,85 || 7,5
De 2.347,86 até 3.130,51 || 15,0
De 3.130,52 até 3.911,63 || 22,5
Acima de 3.911,64 || 27,5
*/

#include<stdio.h>
int main (){
    float salario,valor;

    printf("informe o salario: ");
    scanf("%f",&salario);

    printf("salario = %f\n",salario);

    if(salario<= 1566.61){
        printf("aliquota = inexistente\n");
    }else if(salario>=1566.62 && salario<=2347.85){
        printf("aliquota = 7.5%%\n");
        valor=salario*(7.5/100);
        printf("valor aliquota = %f\n",valor);
    }else if(salario>=2347.86 && salario<=3130.51){
        printf("aliquota = 15%%\n");
        valor=salario*(15/100);
        printf("valor aliquota = %f\n",valor);
    }else if(salario>=3130.52 && salario<=3911.63){
        printf("aliquota = 22.5%%\n");
        valor=salario*(22.5/100);
        printf("valor aliquota = %f\n",valor);
    }else{
        printf("aliquota = 27.5%%\n");
        valor=salario*(27.5/100);
        printf("valor aliquota = %f\n",valor);
    }

    return 0;
}
