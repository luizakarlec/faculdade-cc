/*
Escreva um programa que lê um vetor real de 15 elementos. Leia também um número. A seguir,
o programa deve mostrar, sem nenhuma casa decimal, cada elemento do vetor multiplicado pelo
número lido, em uma função chamada cálculo.
*/

#include <stdio.h>

//variavel global
float v[15];

void lerVetor(){
    int i;
    printf("Informe 15 elementos reais\n");
    for(i=0; i<15; i++)
        scanf("%f", &v[i]);
    return;
}

void multiplicar(int x){
    int i;
    for(i=0; i<15; i++){
        v[i] = v[i] * x;
        printf("%.0f\t", v[i]);
    }
}

int main(){
    int n;
    lerVetor();
    printf("Digite um numero: ");
    scanf("%d", &n);
    multiplicar(n);
    
    return 0;
}
