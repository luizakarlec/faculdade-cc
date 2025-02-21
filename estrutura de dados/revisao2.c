/*
2) Programa em C/C++ que gere n números aleatórios e os armazene um abaixo do outro em um arquivo dados.txt

3) Programa em C/C++ que leia o arquivo dados.txt vom números inteiros, um abaixo do outro, e os armazene em um vetor. 
Contudo, os números repetidos devem ser ignorados.
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *fp;
    char nome[15];

    printf("Digite o nome do arquivo a ser criado: ");
    gets(nome);

    if((fp = fopen(nome, "w"))== NULL){
        printf("Arquivo não pode ser aberto...PRESSIONE QUALQUER TECLA PARA CONTINUAR");
        getchar();
        exit(1);
    }
    printf("ARQUIVO TEXTO ABERTO COM SUCESSO!!!\n");
   

    fclose(fp);
    return 0;
}
