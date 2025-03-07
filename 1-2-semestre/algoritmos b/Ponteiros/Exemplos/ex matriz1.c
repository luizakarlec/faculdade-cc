#include<stdio.h>

void lerMatriz(int *m);
int maiorElemento(int *m);

int main(void){
    int a[3][3], i, j, maior;
    lerMatriz(a);
    maior=maiorElemento(&a[0][0]);
    printf("O maior elemento da matriz eh %d\n", maior);
    return 1;
}

void lerMatriz(int *m){
    int i, j, d;
    for(i=0;i<3;i++)
        for(j=0;j<3;j++){
            d=i*3+j;
            printf("a[%d][%d]: ", i, j);
            scanf("%d", m+d);
        }
}

int maiorElemento(int *m){
    int i, j, elementoMaior, d;
    elementoMaior=*m;

    for(i=0;i<3;i++)
        for(j=0;j<3;j++){
         d=i*3+j;
        if (elementoMaior<*(m+d))
            elementoMaior=*(m+d);
        }
    return elementoMaior;
}
