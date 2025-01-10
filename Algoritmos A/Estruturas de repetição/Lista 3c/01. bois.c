/*
Em uma fazenda existem 20 bois. Cada boi tem no seu pescoço um cartão contendo um
número de identificação e seu peso. Escreva um algoritmo que recebe como entrada o
número de identificação e o peso dos 20 bois. O algoritmo deve mostrar:
a. O número e o peso do boi mais gordo
b. O número e o peso do boi mais magro
c. A média de peso dos bois
*/

#include <stdio.h>
#define N 5
int main(){
    int numero, i, numeromaior, numeromenor;
    float peso, pesomaior = 0, pesomenor = 9999999999;
    float soma = 0, media;

    printf("***** Problema dos Bois *****\n");
    for(i = 1; i <= N; i++){
        printf("Entrada %i\n", i);
        printf("Numero do Boi: ");
        scanf("%d", &numero);
        printf("Peso do Boi: ");
        scanf("%f", &peso);

        //para encontrar o boi mais gordo
        if(peso > pesomaior){
            pesomaior = peso;
            numeromaior = numero;
        }

        //para encontrar o boi mais magro
        if(peso < pesomenor){
            pesomenor = peso;
            numeromenor = numero;
        }

        //para fazer o somatorio do peso dos boi
        // soma = soma + peso
        soma += peso;
    }

    // para fazer a media
    media = soma / N;

    printf("\nO maior boi eh o de numero %d e pesa %.2f\n", numeromaior, pesomaior);
    printf("O menor boi eh o de numero %d e pesa %.2f\n", numeromenor, pesomenor);
    printf("A media de peso dos boi eh %.2f\n", media);

    return 0;
}
