/*
Escreva um algoritmo que leia o número de inscrição de um nadador, sua idade e sexo (F
ou M). O algoritmo deve escrever a categoria do nadador, conforme a tabela:
Idade || Sexo || Categoria
6 a 8 anos || F || Infantil A-F
6 a 8 anos || M || Infantil A-M
9 a 11 anos || F ou M || Infantil B
12 a 14 anos || F ou M || Juvenil A
*/

#include<stdio.h>
int main (){
    int idade,insc;
    char sexo;

    printf("numero de inscricao: ");
    scanf("%d",&insc);
    printf("idade do nadador: ");
    scanf("%d",&idade);
    printf("sexo do nadador (M ou F): ");
    fflush(stdin);
    scanf("% c",&sexo);

    if(idade>5 && idade<9 && sexo=='F')
        printf("categoria: Infantil A-F");
        else if(idade>5 && idade<9 && sexo=='M')
                printf("categoria: Infantil A-M");
                else if(idade>8 && idade<12)
                        printf("categoria: Infantil B");
                        else if(idade>11 && idade<15)
                                printf("categoria: Juvenil A");
                                else
                                    printf("nao se encaixa em nenhuma categoria\n");

    return 0;
}
