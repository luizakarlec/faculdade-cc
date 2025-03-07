/*
Desenvolva um algoritmo para ler quatro valores inteiros, calcular a sua média, e escrever na
tela os que são superiores à média.
*/

#include<stdio.h>
int main(){
    int a,b,c,d,media;

    printf("informe quatro valores inteiros:");
    scanf("%i%i%i%i",&a,&b,&c,&d);

    media=(a+b+c+d)/4;
    printf("media: %i\n",media);

    if(a>media)
        printf("%i maior que a media\n",a);
    if(b>media)
        printf("%i maior que a media\n",b);
    if(c>media)
        printf("%i maior que a media\n",c);
    if(d>media)
        printf("%i maior que a media\n",d);

    return 0;
}
