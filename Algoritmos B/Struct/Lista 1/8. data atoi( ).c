#include <stdio.h>

void flush_in() {
    int ch;
    do {
        ch = fgetc(stdin);
    } while (ch != EOF && ch != '\n');
}

struct data{
  int dia;
  int mes;
  int ano;
};

int main() {
  char datalida1[11], datalida2[11];
  struct data d1, d2;
  char aux[5];

  printf("Primeira data (dd/mm/aaaa): ");
  scanf("%s", datalida1);
  printf("Segunda data (dd/mm/aaaa): ");
  flush_in();
  scanf("%s", datalida2);

  //conversao dia1
  aux[0] = datalida1[0];
  aux[1] = datalida1[1];
  aux[2] = '\0';
  d1.dia = atoi(aux);

  //conversao dia2
  aux[0] = datalida2[0];
  aux[1] = datalida2[1];
  d2.dia = atoi(aux);

  //conversao mes1
  aux[0] = datalida1[3];
  aux[1] = datalida1[4];
  d1.mes = atoi(aux);

  //conversao mes2
  aux[0] = datalida2[3];
  aux[1] = datalida2[4];
  d2.mes = atoi(aux);

  //conversao ano1
  aux[0] = datalida1[6];
  aux[1] = datalida1[7];
  aux[2] = datalida1[8];
  aux[3] = datalida1[9];
  aux[4] = '\0';
  d1.ano = atoi(aux);

  //conversao ano2
  aux[0] = datalida2[6];
  aux[1] = datalida2[7];
  aux[2] = datalida2[8];
  aux[3] = datalida2[9];
  d2.ano = atoi(aux);

  //comparacao datas
  if(d1.ano < d2.ano){
    printf("Data 1 ocorre primeiro.");
  }else if(d1.ano > d2.ano){
          printf("Data 2 ocorre primeiro.");
        }else if(d1.mes < d2.mes){
                printf("Data 1 ocorre primeiro.");
              }else if(d1.mes > d2.mes){
                      printf("Data 2 ocorre primeiro.");
                    }else if(d1.dia < d2.dia){
                            printf("Data 1 ocorre primeiro.");
                          }else if(d1.dia > d2.dia){
                                  printf("Data 2 ocorre primeiro.");
                                }else{
                                  printf("Datas sao iguais.");
                                }
  
  return 0;
}
