#include<stdio.h>
#include<stdlib.h>

void lerVetor (int *p, int t){
    int i;
    printf("Digite o vetor de tam %i: ", t);
    for(i=0; i<t; i++)
        scanf("%d", (p+i));
}

void mostrarVetor(int *p, int t){
    int i;
    printf("\nVetor: ");
    for(i=0; i<t; i++)
        printf("%d ", *(p+i));
        
    return;
}

int main(){
    int *v, tam;
    
    printf("Digite o tamanho do vetor: ");
    scanf("%i", &tam);
    v = (int*) malloc(tam * sizeof(int)); //aloca memoria
    // tam * sizeof(int) = quantidade de bytes
    //malloc retorna naturalmente void, (int*) = cast para converter para int
    
    //verificacao do sucesso da alocação
    if(!v){
        printf("Erro na alocacao de memoria!");
        exit(-1);
    }
    
    lerVetor(v, tam);
    mostrarVetor(v, tam);
    free(v); //libera memoria
    
    return 0;
}
