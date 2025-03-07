/*
Escreva um algoritmo que leia um vetor inteiro de 20 posições. Crie um segundo vetor,
substituindo os valores nulos por 2. Mostre os vetor lido e o vetor resultado.
*/

#include <stdio.h>
int main(){
    int v[20], w[20], i;

    printf("VETOR LIDO\n");
    for(i = 0; i < 20; i++){
        printf("vetor[%i]: ", i);
        scanf("%i", &v[i]);

        if(v[i] == 0){
            w[i] = 2;
        }else{
            w[i] = v [i];
        }
    }

    printf("\nVETOR RESULTADO\n");
    for(i = 0; i < 20; i++){
        printf("vetor[%i]: %i\n", i, w[i]);
    }

    return 0;
}
