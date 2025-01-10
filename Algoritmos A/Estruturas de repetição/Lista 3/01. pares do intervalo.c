/*
Ler dois números e mostrar os números pares do intervalo.
*/

#include<stdio.h>
#include<locale.h>
int main (){
    setlocale(LC_ALL,"Portuguese");
    int a, b, i, aux;

    printf("Digite o intervalo: ");
    scanf("%i%i", &a, &b);

    if(a > b){
        aux = a;
        a = b;
        b = aux;
    }

    printf("Números pares do intervalo: \n");
    for(i = a; i <= b; i++){
        if(i%2 == 0)
            printf("%i\t", i);
    }

    return 0;
}
