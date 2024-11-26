/*
Escreva um programa que lê um vetor real de 15 elementos. Leia também um número. A seguir,
o programa deve mostrar, sem nenhuma casa decimal, cada elemento do vetor multiplicado pelo
número lido, em uma função chamada cálculo.
*/

#include <stdio.h>

void lerVetor(float v[]){
    int i;
    printf("Informe 15 elementos reais\n");
    for(i=0; i<15; i++)
        scanf("%f", &v[i]);
    return;
}

void multiplicar(int x, float v[]){
    int i;
    for(i=0; i<15; i++){
        v[i] = v[i] * x;
        printf("%.0f\t", v[i]);
    }
}

int main(){
    int n;
    float v[15]; //variavel local
    lerVetor(v);
    printf("Digite um numero: ");
    scanf("%d", &n);
    multiplicar(n, v);
    
    return 0;
}
