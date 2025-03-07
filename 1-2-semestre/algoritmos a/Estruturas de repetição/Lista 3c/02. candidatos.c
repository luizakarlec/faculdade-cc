/*
No 1º turno de eleição para Presidente da República, há 10 candidatos. Escreva um
algoritmo para ler o número da legenda do candidato e a quantidade de votos recebidos. O
algoritmo deve mostrar o candidato com maior número de votos e o percentual recebido
por este candidato sobre a quantidade total de votos.
*/

#include<stdio.h>
#define N 10

int main(){
    int i, numero, votos;
    int votosmaior = 0, numeromaior, totalvotos = 0;
    float percentual;

    for(i = 1; i <= N; i++){
        printf("Entrada %i\n",i);
        printf("Numero da legenda do candidato: ");
        scanf("%i",&numero);
        printf("Quantidade de votos: ");
        scanf("%i",&votos);

        if(votos > votosmaior){
            votosmaior = votos;
            numeromaior = numero;
        }

        totalvotos += votos;
    }

    percentual = (100 * votosmaior) / totalvotos;

    printf("\nO candidato com maior numero de fotos foi o %i com %.2f%% do total de votos\n",numeromaior,percentual);

    return 0;
}
