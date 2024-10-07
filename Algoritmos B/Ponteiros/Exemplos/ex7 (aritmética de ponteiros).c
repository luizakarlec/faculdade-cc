#include <stdio.h>

int main() {
    char str[20], *point;
    int i;
    printf("Digite uma string: ");
    gets(str);
    point = str;

    if (*(point+0) != '\0') {
        for (i = 0; (*(point+i)) && *(point+i) != ' '; i++);

        /* se nao chegou no fim, parou no espaco, pula espaco */
        if (*(point+i)) point = point + i + 1;
        printf("%s", point);
    } else printf("Nao foi digitada nenhuma palavra!");

    return 0;
}
