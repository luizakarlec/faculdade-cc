/*
Ler dois vetores com 15 elementos inteiros e um vetor com 15 posições, que armazena as quatro
operações aritméticas. Apresentar o resultado de cada operação executada, considerando as
posições respectivas nos três vetores.
*/

#include <stdio.h>

int main(){
    int vetor1[5], vetor2[5], resultado[5];
    int *v1, *v2, *r;
    int i;
    char operacao;

    v1 = vetor1;
    v2 = vetor2;
    r = resultado;

    printf("Primeiro vetor de 5 inteiros: ");
    for(i=0; i<5; i++){
        scanf("%i", v1+i);
    }

    printf("Segundo vetor de 5 inteiros: ");
    for(i=0; i<5; i++){
        scanf("%i", v2+i);
    }

    printf("Escolha a operacao (+, -, *, /): ");
    fflush(stdin);
    scanf("%c", &operacao);

    if(operacao == '+'){
        printf("Vetor adicao:\n");
        for(i=0; i<5; i++){
            *(r+i) = *(v1+i) + *(v2+i);
            printf("%i\t", *(r+i));
        }
    }
    if(operacao == '-'){
        printf("Vetor subtracao:\n");
        for(i=0; i<5; i++){
            *(r+i) = *(v1+i) - *(v2+i);
            printf("%i\t", *(r+i));
        }
    }
    if(operacao == '*'){
        printf("Vetor multiplicacao:\n");
        for(i=0; i<5; i++){
            *(r+i) = *(v1+i) * *(v2+i);
            printf("%i\t", *(r+i));
        }
    }
    if(operacao == '/'){
        printf("Vetor subtracao:\n");
        for(i=0; i<5; i++){
            *(r+i) = *(v1+i) / *(v2+i);
            printf("%i\t", *(r+i));
        }
    }

    return 0;
}
