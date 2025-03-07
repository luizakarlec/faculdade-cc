#include <stdio.h>

struct funcionario {
  char nome[50];
  float salario;
  int idade;
  char cargo[50];
};

int main() {
  struct funcionario a;

  printf("Nome: ");
  scanf(" %s", a.nome);
  printf("Cargo: ");
  scanf(" %s", a.cargo);
  printf("Salario: ");
  scanf("%f", &a.salario);
  printf("Idade: ");
  scanf("%d", &a.idade);

  printf("\nDados do funcionario:\n");
  printf("%s\n", a.nome);
  printf("%s\n", a.cargo);
  printf("%.2f\n", a.salario);
  printf("%i\n", a.idade);

  return 0;
}
