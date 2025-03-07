#include<stdio.h>
#define N 2

void lerMatriz(int *a){
    int i, j, k;
    for(i=0;i<N;i++)
        for(j=0;j<N;j++){
            k = i*N+j;
            scanf("%d", (a+k));
        }
    return;
}

int somatorio(int *a){
    int i, j, k, s=0;

    for(i=0;i<N;i++)
        for(j=0;j<N;j++){
            k = i*N+j;
            s += *(a+k);
        }
    return s;
}

void mult(int *a, int s){
    int i, j, k;
    for(i=0;i<N;i++)
        for(j=0;j<N;j++){
            k = i*N+j;
            *(a+k) = s * *(a+k);
        }
    return;
}

void mostrarMatriz(int *a){
    int i, j, k;

    for(i=0;i<N;i++){
        printf("\n");
        for(j=0;j<N;j++){
            k = i*N+j;
            printf("%d ", *(a+k));
        }
    }
    return;
}

int main(){
    int mat[N][N], x;
    lerMatriz(&mat[0][0]);
    x = somatorio(&mat[0][0]);
    mult(&mat[0][0], x);
    mostrarMatriz(&mat[0][0]);
    return 0;
}
