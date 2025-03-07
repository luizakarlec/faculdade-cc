/*
Ler um vetor com 10 elementos inteiros e um valor inteiro. Usar uma função para contar o número de vezes que
o valor aparece no vetor. A função main deve mostrar este valor.
*/

#include <stdio.h>

int contar_elementos(int *p, int va) {
    int c = 0, i = 0;

    for(i=0; i<10; i++) {
        if (*(p + i) == va) { // Acessa cada elemento do vetor usando o ponteiro
            c++;
        }
    }
    return c; 
}

int main() {
    int vetor[10], valor, contador;
    int *point;

    printf("Digite um vetor com 10 inteiros: ");
    for (point = vetor; point < vetor + 10; point++) {
        scanf("%i", point);
    }

    printf("Digite um valor: ");
    scanf("%i", &valor);

    contador = contar_elementos(vetor, valor);

    printf("O valor %i aparece %i vezes no vetor.\n", valor, contador);

    return 0;
}

