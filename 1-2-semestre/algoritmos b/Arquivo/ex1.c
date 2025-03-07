#include<stdio.h>

main(){
    FILE *fp;
    char nome[15], ch;

    printf("Digite o nome do arquivo a ser criado: ");
    gets(nome);

    if((fp = fopen(nome, "w"))== NULL){
        printf("Arquivo não pode ser aberto...PRESSIONE QUALQUER TECLA PARA CONTINUAR");
        getchar();
        exit(1);
    }

    printf("ARQUIVO TEXTO ABERTO COM SUCESSO!!!\n Digite seu texto(# - termina): \n");
    
    do{
        ch = getchar();
        if (ch!='#') 
            putc(ch, fp);
        
    }while (ch!='#');

    printf("\nTérmino da Digitação");
    fclose(fp);
}
