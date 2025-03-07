/*
Ler dois números e calcular o somatório dos números do intervalo
*/

#include<stdio.h>
#include<locale.h>
int main (){
    setlocale(LC_ALL,"Portuguese");
    int a, b, i, aux, soma = 0;

    printf("Digite o intervalo: ");
    scanf("%i%i", &a, &b);

    if(a > b){
        aux = a;
        a = b;
        b = aux;
    }

    for(i = a; i <= b; i++){
        soma = soma + i;
        //soma += i
    }
    printf("Somatório do intervalo: %i", soma);

    return 0;
}
