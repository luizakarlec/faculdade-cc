/*
Sejam duas matrizes A e B de mesmo tamanho e cujo tamanho é informado pelo usuário. Desenvolva um
algoritmo para obter a soma das matrizes, utilizando alocação dinâmica e funções.
*/

#include<stdio.h>
#include<stdlib.h>

void lerMatriz(float *p, int l, int c){
    int i, j, d;
    
    printf("\n");
    for(i=0; i<l; i++){
        for(j=0; j<c; j++){
            d = i*c+j;
            printf("m[%i][%i]: ", i, j);
            scanf("%f", p+d);
        }
    }
    
}

void somarMatrizes(float *p1, float *p2, int l, int c){
    int i, j, d;
    float *soma;
    
    soma = (float *) malloc(l*c*sizeof(float));
    if (!soma){
        printf("Erro na alocacao dinamica de memoria\n");
        exit(-1);
    }
    
    printf("\nMatriz Soma: \n");
    for(i=0; i<l; i++){
        for(j=0; j<c; j++){
            d = i*c+j;
            *(soma + d) = *(p1 + d) + *(p2 + d);
            printf("m[%i][%i]: %.2f\n", i, j, *(soma+d));
        }
    }
    
    free(soma);
}

int main(){
    int lin, col;
    float *m1, *m2;
    
    printf("Informe o numero de linhas das matrizes: ");
    scanf("%i", &lin);
    printf("Informe o numero de colunas das matrizes: ");
    scanf("%i", &col);
    
    m1 = (float *) malloc(lin*col*sizeof(float));
    if (!m1){
        printf("Erro na alocacao dinamica de memoria\n");
        exit(-1);
    }
    
    m2 = (float *) malloc(lin*col*sizeof(float));
    if (!m2){
        printf("Erro na alocacao dinamica de memoria\n");
        exit(-1);
    }
    
    printf("\nMatriz 1: ");
    lerMatriz(m1, lin, col);
    printf("\nMatriz 2: ");
    lerMatriz(m2, lin, col);  
    
    somarMatrizes(m1, m2, lin, col);
    
    free(m1);
    free(m2);
    
    return 0;
}
