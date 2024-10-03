#include <stdio.h>

struct turma{
  char nome[50];
  int faltas;
  float nota1, nota2, nota3;
};

int main(){
  struct turma a[3];
  float media, freq;
  int i, horas;

  for(i=0; i<3; i++){
    printf("Nome: ");
    scanf(" %s", a[i].nome);
    printf("Faltas: ");
    scanf("%i", &a[i].faltas);
    printf("Notas 1, 2 e 3: ");
    scanf("%f%f%f", &a[i].nota1, &a[i].nota2, &a[i].nota3);
  
    media = (a[i].nota1 + a[i].nota2 + a[i].nota3)/3;
    horas = 80 - a[i].faltas;
    freq = horas * 100 / 80;
  
    if(freq < 75.0){
      printf("**REPROVADO**\n\n");
    }else if(media < 60.0){
            printf("**REPROVADO**\n\n");
          }else{
            printf("**APROVADO**\n\n");
          }
  }

  return 0;
}
