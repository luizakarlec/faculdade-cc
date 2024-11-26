/*
Desenvolva um programa para ler a carga horária (em horas) de uma disciplina e a quantidade
faltas de um estudante. Em uma função, calcule e retorne o percentual de frequência do
estudante. A função main exibe o percentual de frequência na tela.
*/

#include <stdio.h>

float calcfrequencia (float ch, float f){
    return 100 * f/ch;
}

int main(){
    int cargahoraria, faltas;
    float frequencia;
    
    printf("Carga horaria: ");
    scanf("%i", &cargahoraria);
    printf("Faltas: ");
    scanf("%i", &faltas);
    frequencia = calcfrequencia(cargahoraria, faltas);
    printf("Percentual de frequenta = %.2f", frequencia);
    
    return 0;
}