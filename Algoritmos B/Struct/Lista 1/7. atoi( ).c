#include <stdio.h>
#include <string.h>

struct horario{
  int hora;
  int min;
  int seg;
};

int main(){
  char horaLida[9];
  struct horario x;
  char aux[3];
  
  printf("\n\nDigite o horario hh:mm:ss\n");
  gets(horaLida);

  //coversao da hora, string para int
  aux[0] = horaLida[0];
  aux[1] = horaLida[1];
  aux[2] = '\0';
  x.hora = atoi(aux);

  //coversao dos minutos
  aux[0] = horaLida[3];
  aux[1] = horaLida[4];
  x.min = atoi(aux);

  //coversao dos segundos
  aux[0] = horaLida[6];
  aux[1] = horaLida[7];
  x.seg = atoi(aux);

  printf("%d hora(s), %d minuto(s) e %d segundo(s)", x.hora, x.min, x.seg);
  
  return 0;
}
