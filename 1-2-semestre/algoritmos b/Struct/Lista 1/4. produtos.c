#include <stdio.h>
#include <string.h>

struct produtos{
  char nome[50];
  float precoCompra;
  float precoVenda;
};

int main(){
  struct produtos produto[5];
  int i;
  float menorprecoCompra = 999999;
  char menornome[50];

  printf("PRODUTOS:");
  for(i=0; i<5; i++){
    printf("\nNome: ");
    scanf("%s", produto[i].nome);
    printf("Preco de compra: ");
    scanf("%f", &produto[i].precoCompra);
    printf("Preco de venda: ");
    scanf("%f", &produto[i].precoVenda);

    if(produto[i].precoCompra < menorprecoCompra){
      menorprecoCompra = produto[i].precoCompra;
      strcpy(menornome, produto[i].nome); //strcpy = string copy
      //copiar string em outra variornavel
    } 
  }

  printf("\n\nPRODUTO COM MENOR PRECO DE COMPRA:\n");
  printf("%s\n", menornome);
  printf("%.2f", menorprecoCompra);
  
  return 0;
}
