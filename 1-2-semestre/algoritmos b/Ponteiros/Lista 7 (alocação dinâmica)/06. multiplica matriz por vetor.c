/*
Seja uma matriz A e um vetor B, cujos tamanhos e elementos são informados pelo usuário. Desenvolva um
algoritmo para obter o vetor C que é o resultado da multiplicação da matriz A pelo vetor B.
*/

#include <stdio.h>
#include <stdlib.h>

void lerMatriz(int *m, int lin, int col){
    int i, j, d;
    
    printf("\nDigite a matriz: \n");
    for(i=0; i<lin; i++){
        for(j=0; j<col; j++){
            d = i*col+j;
            printf("A[%i][%i]: ", i, j);
            scanf("%i", m+d);
        }
    }
}

void lerVetor(int *v, int t){
    int i;
    printf("Digite o vetor de tam %i: ", t);
    for(i=0; i<t; i++)
        scanf("%d", (v+i));
}

void multiplicar(int *A, int lin, int col, int *B, int t){
    int *C;
    
    C = (int *) malloc(lin * sizeof(int));
    if(!C) {
        printf("Erro na alocacao!!");
        exit(-1);
    }
    
    // Multiplicação da matriz A pelo vetor B
    for(int i = 0; i < lin; i++) {
        C[i] = 0; // Inicializa o elemento de C
        for(int j = 0; j < col; j++) {
            C[i] += *(A + i * col + j) * *(B + j); // Realiza a soma dos produtos
        }
    }
    
    // Exibe o resultado da multiplicação
    printf("\nResultado da multiplicacao (vetor C):\n");
    for(int i = 0; i < lin; i++) {
        printf("C[%i]: %i\n", i, C[i]);
    }
    
    // Libera a memória do vetor C
    free(C);
}

int main(){
    int *matriz, *vetor;
    int linhas, colunas, tam;
    
    printf("Informe a quantidade de linhas da matriz A: ");
    scanf("%i", &linhas);
    printf("Informe a quantidade de colunas da matriz A: ");
    scanf("%i", &colunas);
    printf("Informe o tamanho do vetor B: ");
    scanf("%i", &tam);
    
    matriz = (int *) malloc (linhas*colunas*sizeof(int));
    if(!matriz){
        printf("Erro na alocacao!!");
        exit(-1);
    }
    vetor = (int *) malloc (tam*sizeof(int));
    if(!vetor){
        printf("Erro na alocacao!!");
        exit(-1);
    }
    
    lerMatriz(matriz, linhas, colunas);
    lerVetor(vetor, tam);
    
    multiplicar(matriz, linhas, colunas, vetor, tam);
    
    free(matriz);
    free(vetor);
    
    return 0;
}
