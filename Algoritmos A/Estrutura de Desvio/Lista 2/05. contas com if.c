/*
Desenvolva um algoritmo que leia valores inteiros em duas variáveis distintas e faça o
seguinte:
  se o resto da divisão da primeira variável pela segunda for 1, mostre a soma dessas
variáveis mais o resto da divisão;
  se o resto desta divisão for 2, escreva se os valores das variáveis são pares ou ímpares;
  se o resto desta divisão for igual a 3, multiplique a soma dos valores lidos pelo
primeiro valor;
  se for igual a 4 divida a soma dos números lidos pelo segundo valor, se o segundo
valor for diferente de zero.
  Em qualquer outra situação mostre o quadrado dos números lidos.

*/

#include<stdio.h>
int main(){
    int a,b;
    int soma,resto,rest3,rest4,Qa,Qb;

    printf("informe dois valores A e B: ");
    scanf("%i%i",&a,&b);

    soma=a+b;
    resto=a%b;
    rest3=soma*a;
    rest4=soma/b;
    Qa=a*a;
    Qb=b*b;

    if(resto==1){
        printf("soma: %i\n",soma);
        printf("resto divisao: %i",resto);
    }if(resto==2){
        if(a%2==0){
            printf("A eh par\n");
        }else{
            printf("A eh impar\n");
        }if(b%2==0){
            printf("B eh par\n");
        }else{
            printf("B eh impar\n");
        }
    }if(resto==3){
        printf("soma vezes a: %i",rest3);
    }if(resto==4){
        if(b!=0){
            printf("soma dividido b: %i",rest4);
        }else{
            printf("soma dividido b: impossivel b=0");
            }
    }else{
        printf("quadrado dos dois numeros: %i %i",Qa,Qb);
    }

    return 0;
}
