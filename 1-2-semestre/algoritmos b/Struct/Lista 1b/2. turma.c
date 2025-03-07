#include <stdio.h>
#include <string.h>

void flush_in() {
    int ch;
    do {
        ch = fgetc(stdin);
    } while (ch != EOF && ch != '\n');
}

struct aluno{
  int matricula;
  int presencas;
};

struct turma{
  int codigo;
  char disciplina[50];
  int horas;
  char prof[60];
  struct aluno alunos[40];
};

int main(){
  struct turma a[32];
  int i = 0, j=0;
  char continuar, continuar2;

  printf("\n*Dados das Turmas* \n");

  do{
    printf("\nTurma %i\n", i+1);
    printf("Codigo: ");
    scanf("%i", &a[i].codigo);
    printf("Nome disciplina: ");
    flush_in();
    gets(a[i].disciplina);
    printf("Horas: ");
    scanf("%i", &a[i].horas);
    printf("Professor: ");
    flush_in();
    gets(a[i].prof);

    printf("\n*Alunos da Turma* \n");
    do{
      
      printf("\nAluno %i\n", j+1);
      
      printf("Numero de matricula: ");
      scanf("%i", &a[i].alunos[j].matricula);
      printf("Presencas: ");
      scanf("%i", &a[i].alunos[j].presencas);
      
      printf("Registrar mais um aluno? (s ou n) ");
      flush_in();
      scanf("%c", &continuar2);

      j++;
      
    }while(continuar2 == 's' && j<40);

    printf("\nRegistrar mais uma turma? (s ou n) ");
    flush_in();
    scanf("%c", &continuar);

    i++;
    j=0;
    
  }while(continuar == 's' && i<32);

  return 0;
};
