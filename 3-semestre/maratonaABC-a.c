#include<stdio.h>

int main (){
    int N, M;

    scanf("%d", &N);
    scanf("%d", &M);

    int A[N][N];

    //inicializo em zero
    for(int i=0; i<N; i++)
    {
       for(int j=0; j<N; j++)
        {
            A[i][j] = 0;
        }
    }

    int u, v, l;
    //entrada dos valores
    for(int i=0; i<M; i++)
    {
       scanf("%d", &u);
       scanf("%d", &v);
       scanf("%d", &l);

       A[u-1][v-1] = l;
    }




    //validacao
    int soma=0;
    int menor=99999999;

    for(int i=0; i<N; i++)
    {
       for(int j=0; j<N; j++)
        {
            int a, b, c;

            a = i;
            b = j;

            if(A[i][j]!=0)
            {
                printf("d");
                for(int k=0; k<M; k++)
                {
                    if(A[a][b]!=0)
                    {
                        soma +=  A[a][b];

                        c = a;
                        a = b;
                        b = c;
                    }
                }
            }

            if(menor>soma)
            {
                menor = soma;
            }
            for(int i=0; i<M; i++)
            {
                printf("%d",menor);
            }

        }
    }
    return 0;
}


