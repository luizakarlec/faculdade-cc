/*
Fazer a multiplicação de um escalar (um número) por uma matriz alocada dinamicamente. As dimensões da
matriz são informadas pelo usuário.
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int lin, col;
    int *m, *m2, numero;
    int i, j, d;
    
    //ENTRADA DAS INFORMACOES DA MATRIZ
    printf("Informe o numero de linhas da matriz: ");
    scanf("%i", &lin);
    printf("Informe o numero de colunas da matriz: ");
    scanf("%i", &col);
    printf("Numero a ser multiplicado: ");
    scanf("%i", &numero);
    
    //ALOCACAO DA MEMORIA MATRIZ
    m = (int *) malloc(lin*col*sizeof(int));
    if (!m){
        printf("Erro na alocacao dinamica.");
        exit(-1);
    }
    
    //ENTRADA DA MATRIZ
    printf("Digite a matriz: \n");
    for(i=0; i<lin; i++){
        for(j=0; j<col; j++){
            d = i*col+j;
            printf("m[%i][%i]: ", i, j);
            scanf("%i", m+d);
        }
    }
    
    //ALOCACAO DA MEMORIA DA MATRIZ MULTIPLICADA
    m2 = (int *) malloc(lin*col*sizeof(int));
    if (!m){
        printf("Erro na alocacao dinamica.");
        exit(-1);
    }
    
    //MULTIPLICACAO E SAIDA
    printf("Matriz multiplicada: \n");
    for(i=0; i<lin; i++){
        for(j=0; j<col; j++){
            d = i*col+j;
            *(m2+d) = *(m+d) * numero;
            printf("m[%i][%i]: %i\n", i, j, *(m2+d));
        }
    }

    free(m);
    free(m2);
  
    return 0;
}
