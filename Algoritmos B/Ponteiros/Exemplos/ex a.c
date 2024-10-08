#include <stdio.h>
int main(){
    int a[4] = {1, 2, 3, 4};
    int b[4] = {10, 20, 30, 40};
    int *pa, *pb, i, pe;
    
    pa = &a[0]; //pa = a;
    pb = &b[0]; //pb = b;
    
    for(i=0; i<4; i++){
        pe = pe + (*(pa+i)) * *(pb +i);
    }
    
    printf("Produto escalar = %d", pe);

    return 0;
}
