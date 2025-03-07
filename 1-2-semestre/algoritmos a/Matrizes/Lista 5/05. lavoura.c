/*
Um produtor organizou as áreas de sua lavoura em uma matriz 4x2
Em cada área, ele aplicou diferentes formas de tratamento do solo e das plantas (insumos, pesticidas...).
Após realizar a colheita, ele armazenou os dados da produtividade (quantidade de sacos/hectare) de cada
uma das áreas.
a) Utilize uma matriz para armazenar os valores da produtividade de cada área
b) Leia os dados armazenados em cada área
c) Calcule e exiba a média de produtividade da lavoura
d) Identifique e mostre as áreas que produziram acima da média e abaixo da média
*/

#include<stdio.h>

int main(){
    int A[2][4], i, j;
    float soma = 0, media;

    printf("Informe a produtividade de cada area: \n");
    for(i=0; i<2; i++){
        for(j=0; j<4; j++){
            printf("AREA[%i][%i]: ", i, j);
            scanf("%i", &A[i][j]);

            soma += A[i][j];
        }
    }

    media = soma / 8;
    printf("\nMedia de produtividade: %.2f", media);

    printf("\n\nAreas acima da media: \n");
    for(i=0; i<2; i++){
        for(j=0; j<4; j++){
            if(A[i][j] > media){
                printf("A[%i][%i]\t\t", i, j);
            }
        }
    }

    printf("\n\nAreas abaixo da media: \n");
    for(i=0; i<2; i++){
        for(j=0; j<4; j++){
            if(A[i][j] < media){
                printf("A[%i][%i]\t\t", i, j);
            }
        }
    }


    return 0;
}
