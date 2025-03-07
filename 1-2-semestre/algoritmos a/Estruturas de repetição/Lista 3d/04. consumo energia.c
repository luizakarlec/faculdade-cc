/*
Para uma pesquisa a respeito do consumo mensal de energia elétrica em determinada
cidade, são fornecidos os seguintes dados dos consumidores: código do consumidor,
quantidade de kWh consumidos durante o mês, tipo de consumidor (residencial
representado pela letra ‘R’; comercial, respresentado pela letra ‘C’; e industrial,
representado pela letra ‘I’). Escreva um algoritmo que calcule e escreva os seguintes
resultados:
   o menor consumo dentre os consumidores residenciais e o código desse consumidor;
   o maior consumo dentre os consumidores comerciais e o código desse consumidor;
   a média geral de consumo industrial.
O algoritmo para de ler dados quando o tipo de consumidor fornecido for ‘X’.
*/

#include<stdio.h>
int main (){
    char tipo;
    int codigo, i = 0;
    float consumo, maiorConsumo = -9999999, menorConsumo = 9999999, totalConsumo = 0, media;
    int maiorCodigo, menorCodigo;

    do{
        printf("\nTipo de consumidor: ");
        fflush(stdin);
        scanf(" %c", &tipo);

        if(tipo != 'x' && tipo != 'X'){
            if(tipo == 'R' || tipo == 'C' || tipo == 'I' || tipo == 'r' || tipo == 'c' || tipo == 'i'){

                printf("Codigo do consumidor: ");
                scanf("%i", &codigo);
                printf("Consumo mensal em kWh: ");
                scanf("%f", &consumo);

                if(consumo > maiorConsumo){
                    maiorConsumo = consumo;
                    maiorCodigo = codigo;
                }

                if(consumo < menorConsumo){
                    menorConsumo = consumo;
                    menorCodigo = codigo;
                }

                totalConsumo+= consumo;
                i++;

            }else
                printf("Tipo de consumidor invalido.\n");
        }
    }while(tipo != 'X' && tipo != 'x');

    media = totalConsumo / i;

    printf("\nMaior consumo = %.2f || Codigo = %i", maiorConsumo, maiorCodigo);
    printf("\nMenor consumo = %.2f || Codigo = %i", menorConsumo, menorCodigo);
    printf("\nMedia de consumo = %.2f", media);

    return 0;
}
