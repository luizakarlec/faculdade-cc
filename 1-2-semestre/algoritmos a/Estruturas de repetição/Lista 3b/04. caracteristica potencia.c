/*
Existem números de 4 dígitos (entre 1000 e 9999) que obedecem à seguinte característica:
se dividirmos o número em dois números de dois dígitos, um composto pela dezena e pela
unidade, e outro pelo milhar e pela centena, somarmos estes dois novos números gerando
um terceiro, o quadrado deste terceiro número é exatamente o número original de quatro
dígitos. Por exemplo:
2025 -> dividindo: 20 e 25 -> somando temos 45 -> 452 = 2025.
Escreva um programa para calcular todos os números que obedecem a esta característica.
*/

#include<stdio.h>
int main(){
    int x,dezenaunidade,milharcentena;
    int soma,quadrado;

    printf("escreva um numero de 4 digitos: ");
    scanf("%i",&x);

    dezenaunidade=x%100;
    milharcentena=x/100;

    soma=dezenaunidade+milharcentena;
    quadrado=soma*soma;

    printf("%i + %i = %i\n",milharcentena,dezenaunidade,soma);
    printf("%i ao quadrado = %i\n",soma,quadrado);

    if(quadrado==x){
        printf("obedeceu a caracteristica\n");
    }else{
        printf("nao obedeceu a caracteristica\n");
    }

    return 0;
}
