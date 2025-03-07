/*
Escreva um algoritmo que leia 2 vetores X(10) e Y(10) e os escreva. Crie, a seguir, um
vetor para cada uma das operações:
 • A união de X com Y
 • A diferença entre X e Y
 • A interseção entre X e Y
Escreva os vetores resultado de cada operação.
*/

#include<stdio.h>
int main(){
    int X[10], Y[10], uniao[20], dif[10], inte[10], i, j, k, l, m, existe;

    //entrada
    printf("Vetor X[10]:\n");
    for(i=0; i<10; i++)
        scanf("%i", &X[i]);

    printf("Vetor Y[10]:\n");
    for(i=0; i<10; i++)
        scanf("%i", &Y[i]);

    //uniao
    //X U Y
    for(i=0; i<10; i++){ //primeiros 10 iguais X 
        uniao[i] = X[i];
    }

    k = 10;
    existe = 0;
    for(i=0; i<10; i++){ //conta Y
        for(j=0; j<10; j++){ //conta X
            if(Y[i] == X[j])
                existe = 1;
        }
        if(existe == 0){
            uniao[k] = Y[i];
            k++;
        }
        existe = 0;
    }

    //diferenca
    //X - EXISTE em Y

    l = 0;
    existe = 0;
    for(i=0; i<10; i++){ //conta X
        for(j=0; j<10; j++){ //conta Y
            if(X[i] == Y[j]){
                existe = 1;
            }  
        }
        if(existe == 0){
            dif[l] = X[i];
            l++;
        }
        existe = 0;
    }

    //interseccao
    //EXISTE em X e Y
    m = 0;
    for(i=0; i<10; i++){
        for(j=0; j<10; j++){
            if(X[i] == Y[j]){
                inte[m] = X[i];
                m++;
            }
        }
    }

    //saida
    printf("VETOR UNIAO:\n");
    for(i=0; i<k; i++){
        printf("%i\t", uniao[i]);
    }

    printf("\nVETOR DIFERENCA:\n");
    for(i=0; i<l; i++){
        printf("%i\t", dif[i]);
    }

    printf("\nVETOR INTERSECCAO:\n");
    for(i=0; i<m; i++){
        printf("%i\t", inte[i]);
    }

  return 0;
}
