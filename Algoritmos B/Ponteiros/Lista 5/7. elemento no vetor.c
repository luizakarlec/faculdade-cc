/*
Ler um vetor com 10 elementos inteiros e um valor inteiro. Apresentar como resultado o número
de vezes que o valor aparece no vetor.
*/

#include <stdio.h>

int main() {
    int vetor[10], valor, contador, *p;
    
    printf("Digite um vetor com 10 inteiros: ");
    for(p=vetor ; p < vetor + 10; p++){
        scanf("%i", p);
    }
    
    printf("Digite um valor: ");
    scanf("%i", &valor);
    
    for(p = vetor; p < vetor + 10; p++){
        if (*p == valor) {
            contador++;
        }
    }
    
    printf("O valor %i aparece %i vezes no vetor.", valor, contador);
    
    return 0;
}
