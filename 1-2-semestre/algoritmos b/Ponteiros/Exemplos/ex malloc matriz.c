#include<stdio.h>
#include<stdlib.h>

void leMatriz(float *a, int l, int c);
void mostraMatriz(float *a, int l, int c);
int maiorElementoMatriz(float *a, int l, int c, int *posL, int *posC);

int main(void){
    int d, lin, col, pL, pC;
    float *m, maior;

    printf("Informe o numero de linhas da matriz: ");
    scanf("%d", &lin);
    printf("Informe o numero de colunas da matriz: ");
    scanf("%d", &col);

    m = (float *) malloc(lin*col*sizeof(float));
    if (!m){
        printf("Erro na alocacao dinamica de memória\n");
        exit(0);
    }

    lerMatriz(m, lin, col);
    mostraMatriz(m, lin, col);
    maior = maiorElementoMatriz(m, lin, col, &pL, &pC);
    printf("\n\nO maior elemento da matriz eh %.2f e esta na linha %d e coluna %d\n", maior, pL, pC);
    free(m);

    return 1;
}

void lerMatriz(float *a, int l, int c){
    int i, j, d;
    printf("\n");
    for(i=0;i<l;i++)
        for(j=0;j<c;j++){
            d = i*c+j;
            printf("a[%d][%d]: ", i, j);
            scanf("%f", a+d);
        }
}

void mostraMatriz(float *a, int l, int c){
    int i, j, d;
    for(i=0;i<l;i++){
        printf("\n");
        for(j=0;j<c;j++){
            d = i*c+j;
            printf("%.2f ", *(a+d));
        }
    }
}

int maiorElementoMatriz(float *a, int l, int c, int *posL, int *posC){
    int i, j, d;
    float maior;

    maior = *a;

    for(i=0;i<l;i++)
        for(j=0;j<c;j++){
            d = i*c+j;
            if (maior<*(a+d)){
                maior=*(a+d);
                *posL=i;
                *posC=j;
            }
        }
    return maior;
}
