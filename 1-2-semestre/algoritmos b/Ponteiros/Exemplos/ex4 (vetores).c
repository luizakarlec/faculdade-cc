#include <stdio.h>

int main(){
    int x[5] = {1, 2, 3, 4, 5};
    int *p, i;
    
    p = x; //ou p = &x[0];
    
    //sem ponteiros
    for(i=0; i<5; i++){
        printf("%d", x[i]); //ou printf("%d", p[i])
    }
    printf("\n");
    
    //com ponteiros
    for(i=0; i<5; i++){
        printf("%d", *(p+i));
    }

    return 0;
}
