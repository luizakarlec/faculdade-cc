#include <stdio.h>

int main(){
    int x = 100, y = 20;
    int *p1, *p2;
    
    p1 = &x;
    p2 = &y;
    *p2 = *p1;
    
    printf("%p %p\n%d %d", p1, p2, *p1, *p2);

    return 0;
}
