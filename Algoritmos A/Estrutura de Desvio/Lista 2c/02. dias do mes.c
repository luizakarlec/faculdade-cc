/*
Desenvolva um programa para ler um número inteiro de 1 a 12, que corresponde a um dos
meses do ano, e outro número inteiro que corresponde ao ano. Encontre e mostre o número de dias
referente ao mês informado.
*/

#include<stdio.h>
int main(){
    int mes,ano,x;

    printf("informe o mes em numero(1 a 12): ");
    scanf("%d",&mes);
    printf("informe o ano: ");
    scanf("%d",&ano);

    if(mes==1)
        printf("janeiro\n");
        else if(mes==2)
            printf("fevereiro\n");
          else if(mes==3)
                  printf("marco\n");
                else if(mes==4)
                        printf("abril\n");
                      else if(mes==5)
                              printf("maio\n");
                            else if(mes==6)
                                    printf("junho\n");
                                  else if(mes==7)
                                          printf("julho\n");
                                        else if(mes==8)
                                                printf("agosto\n");
                                              else if(mes==9)
                                                      printf("setembro\n");
                                                    else if(mes==10)
                                                            printf("outubro\n");
                                                          else if(mes==11)
                                                                  printf("novembro\n");
                                                                else if(mes==12)
                                                                        printf("dezembro\n");
                                                                      else
                                                                        printf("mes invalido\n");

    //calculo bissexto
    x=ano%4;

    if(mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12)
        printf("tem 31 dias");
    else if(mes==4 || mes==6 || mes==9 || mes==11)
            printf("tem 30 dias");
            else if(mes==2 && x==00)
                    printf("tem 29 dias");
                    else
                        printf("tem 28 dias");


    return 0;
}
