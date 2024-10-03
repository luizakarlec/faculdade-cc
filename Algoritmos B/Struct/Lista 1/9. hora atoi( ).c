#include <stdio.h>

struct horario{
  int hora;
  int min;
  int seg;
};

int main() {
  char horalida[9];
  struct horario h;
  char aux[3];

  printf("Digite um horario (hh:mm:ss)\n");
  scanf("%s", horalida);

  aux[0] = horalida[0];
  aux[1] = horalida[1];
  aux[2] = '\0';
  h.hora = atoi(aux);

  aux[0] = horalida[3];
  aux[1] = horalida[4];
  h.min = atoi(aux);

  aux[0] = horalida[6];
  aux[1] = horalida[7];
  h.seg = atoi(aux);

  if(h.hora > 23 || h.hora < 0 || h.min > 59 || h.min < 0 || h.seg > 59 || h.seg < 0 ){
    printf("Horario invalido.");
  }else{
    printf("Horario valido.");
  }

  
  return 0;
}
