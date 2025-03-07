#include<stdio.h>

int main(){
    FILE *forigem, *fdestino;
    char origem[30], ch;

    printf("Digite o nome do arquivo a ser copiado: ");
    gets(origem);

    if((forigem = fopen(origem, "r"))==NULL){
        printf("Arquivo origem não pode ser aberto...PRESSIONE QUALQUER TECLA PARA CONTINUAR");
        getchar();
        exit(1);
    }

    printf("ARQUIVO %s ABERTO COM SUCESSO!!!\n", origem);

    if((fdestino = fopen("copia.txt", "w"))==NULL){
        printf("Arquivo destino não pode ser aberto...PRESSIONE QUALQUER TECLA PARA CONTINUAR");
        getchar();
        exit(1);
    }

    while (!feof(forigem)){
        ch = getc(forigem);
        if (!feof(forigem))
            putc(ch, fdestino);
    }

    printf("ARQUIVO \"copia.txt\" CRIADO COM SUCESSO!!!\n");

    getchar();
    fclose(forigem);
    fclose(fdestino);

    return 0;
}
