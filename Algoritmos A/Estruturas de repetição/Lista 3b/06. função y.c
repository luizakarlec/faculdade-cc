/*
Calcule o valor de y na seguinte função: y = 4x + 3.
a. Faça a primeira versão com o x variando de -7 até 15.
b. Construa uma outra versão deste algoritmo, onde o intervalo de variação do x é
informado pelo usuário.
*/

#include<stdio.h>
int main(){
    int x,x1,x2,y;

    printf("informe o intervalo de x: ");
    scanf("%i%i",&x1,&x2);

    for(x = x1; x <= x2; x++){
        y = (4*x) + 3;
        printf("(4 * %i) + 3 = %i \n",x,y);
    }


    return 0;
}
