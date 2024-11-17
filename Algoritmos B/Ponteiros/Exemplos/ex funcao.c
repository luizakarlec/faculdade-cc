#include <stdio.h>

int teste (int *y, int *z){
    *y = *y * 100;
    *z = *z + *y;
    return *y;
}

int main(){
    float x = 3.14;
    int a = 100, b;
    
    b = teste(&a, &b);
    printf("a = %d, b = %d, x = %f\n", a, b, x);

    return 0;
}
