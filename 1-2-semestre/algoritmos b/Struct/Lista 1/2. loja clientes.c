#include<stdio.h>

struct VendeTudo{
  char nome[50];
  char cidade[50];
  float totalcompra;
  char mes[20];
};

int main(){
  struct VendeTudo a[5];
  int i;

  //entrada
  printf("Dados dos clientes:\n");
  for(i=0; i<5; i++){
    printf("\nCliente %i\n", i+1);
    printf("Nome: ");
    scanf("%s", a[i].nome);
    printf("Cidade: ");
    scanf("%s", a[i].cidade);
    printf("Total da compra: ");
    scanf("%f", &a[i].totalcompra);
    printf("Mes: ");
    scanf("%s", a[i].mes);
    
  }
  
  //saida
  printf("\n\nDados dos clientes:\n");
  for(i=0; i<5; i++){
    printf("\nCliente %i\n", i+1);
    printf("Nome: %s\n", a[i].nome);
    printf("Cidade: %s\n", a[i].cidade);
    printf("Total da compra: %.2f\n", a[i].totalcompra);
    printf("Mes: %s\n", a[i].mes);

  }

  return 0;
}
