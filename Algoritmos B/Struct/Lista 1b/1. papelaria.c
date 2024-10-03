#include <stdio.h>

struct papelaria{
  int codigo;
  char nome[30];
  char unidade[20];
  float preco_custo;
  float preco_venda;
  int quantidade_estoque;
};

int main(){
  struct papelaria produto[20];
  int Nproduto = 0;
  float percentual_lucro, lucro;
  int continuar;
  int opcao;
  int i;
  int codigo;
  float maiorvenda = -9999999, menorvenda = 9999999;

  //percentual lucro
  printf("Perceltual de lucro desejado sobre o custo: ");
  scanf("%f", &percentual_lucro);

  do{

    //entrada de dados
    printf("\n**PRODUTO %i**\n", Nproduto+1);

    printf("Codigo do produto: ");
    scanf("%i", &produto[Nproduto].codigo);
    printf("Nome do produto: ");
    scanf("%s", produto[Nproduto].nome);
    printf("Unidade do produto: ");
    scanf("%s", produto[Nproduto].unidade);
    printf("Quantidade em estoque: ");
    scanf("%i", &produto[Nproduto].quantidade_estoque);
    printf("Preco de custo: ");
    scanf("%f", &produto[Nproduto].preco_custo);

    //calculo lucro
    lucro = produto[Nproduto].preco_custo * (percentual_lucro/100);
    produto[Nproduto].preco_venda = produto[Nproduto].preco_custo + lucro;
    
    printf("Preco de venda: %.2f\n\n", produto[Nproduto].preco_venda);

    //maior e menor preço de venda
    if(produto[Nproduto].preco_venda > maiorvenda){
      maiorvenda = produto[Nproduto].preco_venda;
    }
    if(produto[Nproduto].preco_venda < menorvenda){
      menorvenda = produto[Nproduto].preco_venda;
    }

    //manutenção loop
    printf("Deseja cadastrar mais um produto? (SIM = 1, NAO = 2) ");
    scanf("%i", &continuar);

    Nproduto++;
    if(Nproduto == 20){
      printf("Numero maximo de produtos atingido.");
    }
    
  }while(continuar == 1 && Nproduto < 20);  

  //informações dos produtos
  printf("\nEscolha a opcao desejada:\n");
  printf("1. Listar os dados de todos os produtos\n");
  printf("2. Listar os dados de um produto, conforme o código digitado.\n");
  printf("3. Listar os produtos cuja quantidade em estoque é zero.\n");
  printf("4. Mostrar os dados do produto de maior valor de venda.\n");
  printf("5. Mostrar os dados do produto de menor valor de venda.\n");
  printf("OPCAO: ");
  scanf("%i", &opcao);

  if(opcao == 1){ //primeira opcao
    for(i=0; i<Nproduto; i++){
      printf("\nPRODUTO %i\n", i+1);
      printf("Codigo do produto: %i\n", produto[i].codigo);
      printf("Nome do produto: %s\n", produto[i].nome);
      printf("Unidade do produto: %s\n", produto[i].unidade);
      printf("Quantidade em estoque: %i\n", produto[i].quantidade_estoque);
      printf("Preco de custo: %2.f\n", produto[i].preco_custo);
      printf("Preco de lucro: %.2f\n", produto[Nproduto].preco_venda);
    }
  }else if(opcao == 2){ //segunda opcao
          printf("\nDigite o codigo do produto: ");
          scanf("%i", &codigo);

          for(i=0; i<Nproduto; i++){
            if(codigo == produto[i].codigo){
              printf("Nome do produto: %s\n", produto[i].nome);
              printf("Unidade do produto: %s\n", produto[i].unidade);
              printf("Quantidade em estoque: %i\n", produto[i].quantidade_estoque);
              printf("Preco de custo: %2.f\n", produto[i].preco_custo);
              printf("Preco de lucro: %.2f\n", produto[Nproduto].preco_venda);
            }
          }
        }else if(opcao == 3){ //terceira opcao
                printf("\nProdutos sem estoque: \n");
                for(i=0; i<Nproduto; i++){
                  if(produto[i].quantidade_estoque == 0){
                    printf("%s\n", produto[i].nome);
                  }
                }
              }else if(opcao == 4){ //quarta opcao
                      for(i=0; i<Nproduto; i++){
                        if(maiorvenda == produto[i].preco_venda){
                          printf("\nCodigo do produto: %i\n", produto[i].codigo);
                          printf("Nome do produto: %s\n", produto[i].nome);
                          printf("Unidade do produto: %s\n", produto[i].unidade);
                          printf("Quantidade em estoque: %i\n", produto[i].quantidade_estoque);
                          printf("Preco de custo: %2.f\n", produto[i].preco_custo);
                          printf("Preco de lucro: %.2f\n", produto[Nproduto].preco_venda);
                        }
                      }
                    }else if(opcao == 5){
                            for(i=0; i<Nproduto; i++){
                              if(menorvenda == produto[i].preco_venda){
                                printf("\nCodigo do produto: %i\n", produto[i].codigo);
                                printf("Nome do produto: %s\n", produto[i].nome);
                                printf("Unidade do produto: %s\n", produto[i].unidade);
                                printf("Quantidade em estoque: %i\n", produto[i].quantidade_estoque);
                                printf("Preco de custo: %2.f\n", produto[i].preco_custo);
                                printf("Preco de lucro: %.2f\n", produto[Nproduto].preco_venda);
                              }
                            }
                          }else{
                            printf("\nOpcao invalida.");
                          }
  return 0;
}
