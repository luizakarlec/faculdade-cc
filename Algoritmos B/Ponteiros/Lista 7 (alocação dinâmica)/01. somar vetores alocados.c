/*
Fazer a soma de dois vetores alocados dinamicamente. O tamanho dos vetores é informado pelo usuário.
*/

#include<stdio.h>
#include<stdlib.h>

void verificarAlocacao(int x){
    if(!x){
        printf("Erro na alocacao de memoria!");
        exit(-1);
    }
}

void lerVetor(int *p, int t){
    int i;
    printf("Digite o vetor de tam %i: ", t);
    for(i=0; i<t; i++)
        scanf("%d", (p+i));
}

void somarVetores(int *p1, int *p2, int t){
    int *soma, i;

    soma = (int*) malloc(t * sizeof(int));
    verificarAlocacao(soma);

    printf("Vetor soma: ");
    for(i=0; i<t; i++){
        *soma = *(p1 + i) + *(p2 + i);  
        printf("%i ", *soma); 
    }

}

int main(){
    int tam;
    int *v1, *v2; //ponteiros para os vetores que vao ser declarados com malloc

    printf("Digite o tamanho do vetor: ");
    scanf("%i", &tam);
    v1 = (int*) malloc(tam * sizeof(int)); //vetor é "declarado" aqui
    verificarAlocacao(v1);
    v2 = (int*) malloc(tam * sizeof(int));
    verificarAlocacao(v2);

    printf("Vetor 1: \n");
    lerVetor(v1, tam);
    printf("Vetor 2: \n");
    lerVetor(v2, tam);

    somarVetores(v1, v2, tam);

    return 0;
}
