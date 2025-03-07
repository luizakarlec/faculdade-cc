#include<stdio.h>

int main(){
    FILE *fp;
    char arq[15];
    int idade;
    float salario;

    printf("Digite o nome do arquivo a ser criado: ");
    gets(arq);

    if((fp = fopen(arq, "w+b"))==NULL){
        printf("Arquivo não pode ser aberto...PRESSIONE QUALQUER TECLA PARA CONTINUAR");
        getchar();
        exit(1);
    }

    printf("Idade: \n"); scanf("%d", &idade);
    printf("Salario: \n"); scanf("%f", &salario);
    fwrite(&idade, sizeof(int), 1, fp);
    fwrite(&salario, sizeof(float), 1, fp);

    idade=0; salario=0.0;
    rewind(fp);

    fread(&idade, sizeof(int), 1, fp);
    fread(&salario, sizeof(float), 1, fp);

    printf("Idade %d - Salário %f\n", idade, salario);
    fclose(fp);
    return 0;
}
