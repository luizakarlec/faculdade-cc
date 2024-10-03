#include <stdio.h>

struct ponto{
  int x, y;
};

int main(){
  struct ponto a, b, c;


  printf("Primeiras cordenadas: ");
  scanf("%i%i", &a.x, &a.y);
  printf("Segundas cordenadas: ");
  scanf("%i%i", &b.x, &b.y);

  printf("Terceiras cordenadas: ");
  scanf("%i%i", &c.x, &c.y);

  if(a.x > b.x && a.y > b.y){
    if(c.x < a.x && c.x > b.x && c.y < a.y && c.y > b.y){
      printf("O ponto esta dentro do retangulo.");
    }else{
      printf("O ponto esta fora do retangulo.");
    }
  }

  if(a.x > b.x && a.y < b.y){
    if(c.x < a.x && c.x > b.x && c.y > a.y && c.y < b.y){
      printf("O ponto esta dentro do retangulo.");
    }else{
      printf("O ponto esta fora do retangulo.");
    }
  }

  if(a.x < b.x && a.y < b.y){
    if(c.x > a.x && c.x < b.x && c.y > a.y && c.y < b.y){
      printf("O ponto esta dentro do retangulo.");
    }else{
      printf("O ponto esta fora do retangulo.");
    }
  }

  if(a.x < b.x && a.y > b.y){
    if(c.x > a.x && c.x < b.x && c.y < a.y && c.y > b.y){
      printf("O ponto esta dentro do retangulo.");
    }else{
      printf("O ponto esta fora do retangulo.");
    }
  }

  return 0;
}
