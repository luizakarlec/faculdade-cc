/*
Escreva um algoritmo que leia duas datas, na forma dia, mês e ano e informe qual é a mais
recente. 
*/

#include<stdio.h>
int main(){
    int dia,mes,ano;
    int dia2,mes2,ano2;

    printf("informe uma data (dia mes ano): ");
    scanf("%d%d%d",&dia,&mes,&ano);
    printf("informe outra data (dia mes ano): ");
    scanf("%d%d%d",&dia2,&mes2,&ano2);

    if(ano>ano2){
        printf("\nsegunda data eh mais recente!\n");
    }else if(ano2>ano){
            printf("\nprimeira data eh mais recente!\n");
            }else //anos sao iguais
            if(mes>mes2){
                printf("\nsegunda data eh mais recente!\n");
            }else if(mes2>mes){
                    printf("\nprimeira data eh mais recente!\n");
                    }else //meses sao iguais
                    if(dia>dia2){
                        printf("\nsegunda data eh mais recente!\n");
                    }else if(dia2>dia){
                            printf("\nprimeira data eh mais recente!\n");
                        }else{ //dias sao iguais
                            printf("\ndatas sao iguais!\n");
                            }

    return 0;
}
