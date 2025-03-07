/*
Ler uma palavra e duas letras, toda vez que a primeira letra aparecer substituí-la pela segunda. Apresentar a
como resultado a nova palavra.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char palavra[50], L1, L2, i;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);
    printf("Digite duas letras: ");
    scanf(" %c %c", &L1, &L2);

    for(i = 0; palavra[i]; i++){
        if(toupper(palavra[i]) == toupper(L1)){
            palavra[i] = L2;
        }
    }

    printf("Nova palavra: %s", palavra);

    return 0;
}
