/*
Faça um algoritmo que leia 2 vetores A e B, de ordem 8, e calcule o produto escalar do
vetor.
*/

#include <stdio.h>
int main() {
  int a[8], b[8], c[8], produto = 0, i;

  printf("VETOR A\n");
  for (i = 0; i < 8; i++) {
    printf("vetor[%i]: ", i);
    scanf("%i", &a[i]);
  }

  printf("\nVETOR B\n");
  for (i = 0; i < 8; i++) {
    printf("vetor[%i]: ", i);
    scanf("%i", &b[i]);
  }

  printf("\nPRODUTO ESCALAR\n");
  for (i = 0; i < 8; i++) {
    c[i] = a[i] * b[i];
    produto += c[i];
  }
  printf("%i", produto);

  return 0;
}
