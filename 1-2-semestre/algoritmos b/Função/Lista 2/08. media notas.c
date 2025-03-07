/*
Desenvolva um programa para ler as notas 1, 2 e 3 de um estudante. Em uma função, calcule a
média aritmética do estudante
*/

#include <stdio.h>

float calculomedia(float x, float y, float z){
    return (x + y + z)/3;
}

int main(){
    float n1, n2, n3;
    float media;
    
    printf("Informe 3 notas: ");
    scanf("%f%f%f", &n1, &n2, &n3);
    media = calculomedia(n1, n2, n3);
    printf("MEDIA = %.2f", media);
    
    return 0;
}