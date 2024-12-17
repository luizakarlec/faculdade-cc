/*
Leia um vetor de N elementos inteiros, onde N é informado pelo usuário. A seguir, conte quantos valores
primos existem no vetor informado.
*/

#include <stdio.h>
#include <stdlib.h>

void verificarAlocacao (int x){
    if(!x){
        printf("Erro na alocacao!!");
        exit(-1);
    }
}

void lervetor(int *p, int t){
    int i;
    
    printf("Digite o vetor de tamanho %i: ", t);
    for(i=0; i<t; i++){
        scanf("%d", (p+i));
    }
}

void verificaPrimos(int *p, int t){
    int i, x;
    int numero; //numero na posicao do vetor
    int primos = 0; //contagem de primos
    int ehPrimo; //flag
    
    for (i = 0; i < t; i++) { //percorre todos os elementos do vetor
        numero = *(p + i);
        ehPrimo = 1; //assume que o número é primo

        //exceção para o número 1, que não é primo
        if (numero == 1) {
            ehPrimo = 0;
        } else {
            for (x = 2; x < numero; x++) { //começa em 2 e vai até (numero - 1)
                if (numero % x == 0) {     //se tiver divisor, não é primo
                    ehPrimo = 0;
                    break;
                }
            }
        }

        if (ehPrimo) { //se for primo, incrementa a contagem
            primos++;
        }
    }

    printf("O vetor contem %d numero(s) primo(s)\n", primos);
}

int main(){
    int tam;
    int *v;
    
    printf("Digite o tamanho do vetor: ");
    scanf("%i", &tam);
    
    v = (int*) malloc(tam * sizeof(int));
    verificarAlocacao(v);
    
    lervetor(v, tam);
    
    verificaPrimos(v, tam);

    return 0;
}
