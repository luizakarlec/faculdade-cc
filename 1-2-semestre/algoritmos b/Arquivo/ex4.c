#include<stdio.h>

int main(){
    char origem[30];

    printf("Digite o nome do arquivo a ser apagado: ");
    gets(origem);

    remove(origem);
    return 0;
}
