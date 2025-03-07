#include <stdio.h>
#include <math.h>

struct ponto{
  int x, y;
};

int main() {
  struct ponto p1, p2;
  float distancia;

  printf("Primeiro ponto: ");
  scanf("%i%i", &p1.x, &p1.y);
  printf("Segundo ponto: ");
  scanf("%i%i", &p2.x, &p2.y);

  //calculo
  distancia = sqrt(pow((p2.x - p1.x),2) + pow((p2.y - p1.y),2));

  printf("Distancia entre os pontos = %.2f", distancia);

  return 0;
}
