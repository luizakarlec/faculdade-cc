/*
Desenvolva um algoritmo para ler o código, o salário líquido e o número de filhos dos
funcionários de uma empresa. Para cada funcionário, o algoritmo deve escrever seu
código e salário líquido acrescido de um adicional de 5% para cada filho. O algoritmo
para de ler os dados quando o código fornecido for zero.
*/

#include<stdio.h>
int main(){
    int codigo = 1, filhos;
    float salarioliquido, salariofinal;

    while(codigo != 0){
        printf("\nCodigo do funcionario: ");
        scanf("%d", &codigo);

        if(codigo != 0){
            printf("Salario liquido: ");
            scanf("%f", &salarioliquido);
            printf("Numero de filhos: ");
            scanf("%d", &filhos);

            if(filhos != 0){
                salariofinal = (float) salarioliquido + (salarioliquido * 0.05 * filhos);
            }else{
                salariofinal = salarioliquido;
            }

            printf("Salario final = %.2f\n", salariofinal);
        }
    }

    return 0;
}
