/*
Ler duas palavras e compará-las. O programa deve informar se as palavras são iguais, em caso contrário,
informar se a primeira é maior do que a segunda, se a segunda é maior do que a primeira ou se são
diferentes e tem o mesmo tamanho.
*/

#include <stdio.h>
#include <string.h>
int main(){
    char palavra1[50], palavra2[50];
    int t1, t2, flag = 1, i, j;

    printf("Informe a palavra 1: ");
    scanf("%s", palavra1);
    printf("Informe a palavra 2: ");
    scanf("%s", palavra2);

    t1 = strlen(palavra1);
    t2 = strlen(palavra2);

    for(i=0, j=0; palavra1[i], palavra2[i]; i++, j++){
        if(palavra1[i] != palavra2[j]){
            flag = 0; 
        }
    }

    if(flag == 1){
        printf("As palavras sao iguais.");
    }else if(t1 > t2){
                printf("Palavra 1 eh maior.");
            }else if(t2 > t1){
                        printf("Palavra 2 eh maior.");
                    }else if(t1 == t2){
                                printf("Palavras são diferente e tem o mesmo tamanho.");
                            }

    return 0;
}
