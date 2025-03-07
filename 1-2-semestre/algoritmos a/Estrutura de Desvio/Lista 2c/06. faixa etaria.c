/*
Determine e informe a faixa etária de uma pessoa, a partir do seu ano de nascimento e do
ano atual. Faixas:
   0 a 9 anos: criança
   10 a 11 anos: pré-adolescente
   12 a 18 anos: adolescente
   18 a 25 anos: jovem
   26 a 59 anos: adulto
   60 em diante: idoso
*/

#include<stdio.h>
int main (){
    int idade;

    printf("informe a idade: ");
    scanf("%d",&idade);

    if(idade<=9)
        printf("crianca");
        else if(idade>9 && idade<=11)
                printf("pre-adolescente");
                else if(idade>11 && idade<=18)
                        printf("adolescente");
                        else if(idade>18 && idade<=25)
                                printf("jovem");
                                else if(idade>25 && idade<=59)
                                        printf("adulto");
                                        else
                                            printf("idoso");

    return 0;
}
