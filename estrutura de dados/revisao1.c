/*
1) Programa em C/C++ que:
- popule um vetor com n numeros inteiros aleatórios (0 a 500)
- exiba o vetor com n números armazenados
- insira no vetorPar os números pares e no vetor Impar os números ímpares
- exiba o vetorPar
- exiba o vetorImpar
*/

#include<stdio.h>
#include<stdlib.h>
#include <time.h>

void verificarAlocacao(int v){
    if(!v){
        printf("Erro na alocacao! ");
        exit(-1);
    }

}

void popularVetor(int n, int *v){
    int i;
    srand(time(NULL));
    for(i=0; i<n; i++){
        *(v+i) = rand() % 500; 
    }
}


int main(){
    int n, i;
    int *vetor, *vetorPar, *vetorImpar;
    int x=0, y=0;

    //alocação de memória
    printf("Digite o tamanho do vetor: ");
    scanf("%i", &n);
    vetor = (int*) malloc(n * sizeof(int));
    verificarAlocacao(vetor);

    //função para popular o vetor
    popularVetor(n, vetor);

    //exibir o vetor
    printf("Vetor com %i numeros aleatorios: ", n);
    for(i=0; i<n; i++){
        printf("%i\t", vetor[i]);
    }

    //separar vetor par e impar
    vetorPar = (int*) malloc(n * sizeof(int));
    verificarAlocacao(vetorPar);
    vetorImpar = (int*) malloc(n * sizeof(int));
    verificarAlocacao(vetorImpar);
    
    for(i=0; i<n; i++){
        if(vetor[i]%2 == 0){
            vetorPar[x] = vetor[i];
            x++;
        }else{
            vetorImpar[y] = vetor[i];
            y++;
        }
    }

    //exibir vetor par e impar
    printf("\nVetor com numeros pares: ");
    for(i=0; i<x; i++){
        printf("%i\t", vetorPar[i]);
    } 
    printf("\nVetor com numeros impares: ");
    for(i=0; i<y; i++){
        printf("%i\t", vetorImpar[i]);
    } 


    return 0;
}
