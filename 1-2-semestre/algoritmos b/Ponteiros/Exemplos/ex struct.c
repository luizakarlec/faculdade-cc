#include<stdio.h>
#include<string.h>

struct aluno {
    char nome[80];
    char curso[60];
    int anoIngresso;
    int anoFormatura;
};

void lerAluno(struct aluno *p){
    printf("Nome: ");
    fflush(stdin);
    gets(p->nome);
    printf("Curso: ");
    fflush(stdin);
    gets(p->curso);
    printf("Ano de ingresso: ");
    scanf("%d", &p->anoIngresso);
    printf("Previsao de formatura em: ");
    scanf("%d", &p->anoFormatura);
    
    return;
}

int main(){
    struct aluno a[3];
    int i;
    
    for(i=0; i<3; i++){
        lerAluno(&a[i]);
    }
    
    for(i=0; i<3; i++){
        printf("------------------\n");
        printf("Nome %s\n", a[i].nome);
        printf("Curso: %s\n", a[i].curso);
        printf("Ano de ingreso: %d\n", a[i].anoIngresso);
        printf("Previsao de formatura: %d\n", a[i].anoFormatura);
    }
    
    return 0;
}
