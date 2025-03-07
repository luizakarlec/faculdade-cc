/*
Escreva um algoritmo para ler duas notas de cada aluno, de uma turma de 40 alunos. Para
cada aluno, escreva na tela a palavra “Aprovado” se a média das duas notas do aluno for
maior ou igual a 7,0. Caso a média seja inferior a 7,0, o programa deve ler a nota do
exame e calcular a média final. Se esta média for maior ou igual a 5,0, o programa deve
escrever “Aprovado”, caso contrário deve escrever “Reprovado”.
*/

#include<stdio.h>
#define N 40

int main(){
    int i;
    float nota1, nota2, exame, media;

    for(i = 1; i <= N; i++){
        printf("\nEntrada %i\n",i);
        printf("Primeira nota: ");
        scanf("%f", &nota1);
        printf("Segunda nota: ");
        scanf("%f", &nota2);

        media = (nota1 + nota2) / 2;

        if(media < 7.0){
            printf("Nota do exame: ");
            scanf("%f", &exame);
            media = (nota1 + nota2 + exame) / 3;
        }

        if(media >= 7.0){
            printf("APROVADO!!!\n");
        }else{
            printf("REPROVADO!!!\n");
        }
    }   

    return 0;
}
