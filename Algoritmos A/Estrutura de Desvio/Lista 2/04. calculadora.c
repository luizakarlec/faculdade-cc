/*
Escreva um algoritmo para ler dois valores e uma das seguintes operações a serem executadas
(codificadas da seguinte forma: 1 – Adição, 2 – Subtração, 3 – Multiplicação e 4 – Divisão).
Calcular e escrever o resultado dessa operação sobre os dois valores lidos.
*/

#include<stdio.h>
int main (){
    float a,b,resultado;
    int opcao;

    printf("informe dois valores\n");
    scanf("%f%f",&a,&b);
    printf("escolha a opcao: \n");
    printf("1-adicao\n");
    printf("2-subtracao\n");
    printf("3-multiplicacao\n");
    printf("4-divisao\n");
    scanf("%d",&opcao);

    if(opcao==1){
        printf("***SOMA***\n");
        resultado=a+b;
        printf("%f + %f = %f\n",a,b,resultado);
    }else{
        if(opcao==2){
            printf("***SUBTRACAO***\n");
            resultado=a-b;
            printf("%f - %f = %f\n",a,b,resultado);
        }else{
            if(opcao==3){
                printf("***MULTIPLICACAO***\n");
                resultado=a*b;
                printf("%f * %f = %f\n",a,b,resultado);
            }else{
                if(opcao==4){
                        printf("***DIVISAO***\n");
                if(b==0){
                    printf("DIVISAO POR ZERO\n");
                }else{
                    resultado=a/b;
                    printf("%f / %f = %f\n",a,b,resultado);
                    }
                }else
                    printf("opcao invalida\n");
                }
            }
        }

    return 0;
}
