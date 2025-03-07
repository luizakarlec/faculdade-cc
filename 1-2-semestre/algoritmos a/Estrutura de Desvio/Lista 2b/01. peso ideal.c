/*
Escreva um algoritmo que leia a altura (em metros), o peso (em quilogramas) e o sexo
(M ou F) de uma pessoa e calcule o peso ideal, dado por:
Peso ideal do homem = (72,7 * altura) – 58
Peso ideal da mulher = (62,1 * altura) – 44, 7.
O algoritmo deve informar também se a pessoa está abaixo ou acima de seu peso ideal e em
quantos quilos.

*/

#include<stdio.h>
int main(){
    float altura,peso;
    char sexo;
    float pesoideal;

    printf("informe a altura em metros: ");
    scanf("%f",&altura);
    printf("informe o peso em quilogram: ");
    scanf("%f",&peso);
    printf("informe o sexo (M ou F): ");
    scanf(" %c",&sexo);

    if(sexo == 'M' || sexo == 'm'){
        pesoideal=(72.7*altura)-58;
        printf("peso ideal: %f\n",pesoideal);
        if(peso>pesoideal){
            printf("esta acima do peso\n");
        }else if(peso==pesoideal){
            printf("esta com o peso ideal\n");
        }else{
            printf("esta abaixo do peso\n");
        }

    }else if(sexo == 'F' || sexo == 'f'){
        pesoideal = (62.1*altura)-44.7;
        printf("peso ideal: %f\n",pesoideal);
        if(peso>pesoideal){
            printf("esta acima do peso\n");
        }else if(peso==pesoideal){
            printf("esta com o peso ideal\n");
        }else{
            printf("esta abaixo do peso\n");
        }
    }else{
        printf("Sexo nao reconhecido. insira 'M' para masculino ou 'F' para feminino.\n");
    }


    return 0;
}
