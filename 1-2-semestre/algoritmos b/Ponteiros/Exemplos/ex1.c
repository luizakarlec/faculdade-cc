#include <stdio.h>
#include <stdlib.h>

int main(){
    system("cls");

    int x, y, *P1, *P2;
    x = 10;
    P1 = &x;
    y = *P1 * 2;
    printf("%d, %d, %d\n", x, *P1, y);
    P2 = &x;
    *P2 = 30;
    printf("%d, %d, %d\n", x, *P1, y);

    return 0;
}
