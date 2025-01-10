/*
Escreva um algoritmo para ler um vetor de inteiros e positivos e imprimir quantas vezes
aparecem o números 2, 4 e 8. O vetor terá no máximo 100 posições. Sair do programa
quando for digitado -1 ou quando atingir o máximo de posições do vetor.
*/

#include<stdio.h>
int main(){
    int v[100], i, dois = 0, quatro = 0, oito = 0;

    i = -1;
    do{
        i++;
        printf("vetor[%i]: ", i);
        scanf("%i", &v[i]);

        if(v[i] == 2)
            dois++;
        if(v[i] == 4)
            quatro++;
        if(v[i] == 8)
            oito++;

    }while(v[i] != -1);

    printf("\nO numero 2 aparece %i vezes no vertor\n", dois);
    printf("O numero 4 aparece %i vezes no vertor\n", quatro);
    printf("O numero 8 aparece %i vezes no vertor\n", oito);

    return 0;
}
