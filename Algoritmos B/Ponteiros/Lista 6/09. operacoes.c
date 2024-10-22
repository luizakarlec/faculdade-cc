/*
Faça um programa que lê dois vetores de inteiros com 10 elementos e chama funções para executar as
seguintes operações:
    a Soma de vetores
    b Subtração de vetores
    c Produto escalar dos vetores
Use ponteiros para manipular os vetores nas funções.
*/

#include <stdio.h>

void lerVetor(int *a){
    int i;
    for(i=0; i<10; i++){
        scanf("%d", a++);
    }
    return;
}

void mostrarVetor(int *a){
    int i;
    for(i=0; i<10; i++){
        printf("%d\t", *(a+i));
    }
    return;
}

void somarVetores(int *a, int *b, int *s){
    int i;
    for(i=0; i<10; i++){
        *(s+i) = *(a+i) + *(b+i); //s[i]= a[i] + b[i]
    }
    return;
}

void subtrairVetores(int *a, int *b, int *sub){
    int i;
    for(i=0; i<10; i++){
        *(sub+i) = *(a+i) - *(b+i); 
    }
    return;
}

int calcularPE(int *a, int *b){
    int p = 0, i;
    for(i=0; i<10; i++){
        p += *(a+i) * *(b+i);
    }
    return p;
}

int main(){
    int v[10], x[10], soma[10], subtracao[10], pe;
    
    printf("Digite o vetor v: ");
    lerVetor(v);
    printf("Digite o vetor x: ");
    lerVetor(x);
    
    somarVetores(v, x, soma);
    printf("\nVetor soma: \n");
    mostrarVetor(soma);
    
    subtrairVetores(v, x, subtracao);
    printf("\nVetor subtracao: \n");
    mostrarVetor(subtracao);
    
    pe = calcularPE(v, x);
    printf("\nProduto escalar = %d", pe);
    
    return 0;
}
