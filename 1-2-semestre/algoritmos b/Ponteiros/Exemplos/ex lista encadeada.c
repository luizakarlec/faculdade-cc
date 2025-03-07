#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct aluno {
    char nome[80];
    char curso[60];
    int anoIngresso;
    int anoFormatura;
    struct aluno *prox;
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

void listarAlunos(struct aluno *p){
    struct aluno *ptr;
    ptr = p;

    while(ptr != NULL){
        printf("\n\n%s cursa %s e ingressou no ano %d\n", ptr->nome, ptr->curso, ptr->anoIngresso);
        ptr = ptr->prox;
    }
    return;
}

void destruirLista(struct aluno *p){
    struct aluno *aux;

    while(p != NULL){
        aux = p;
        p = p->prox;
        free(aux);
    }
    printf("Lista destruida\n");
    return;
}

int main(){
    struct aluno *pa, *pinicio, *pnew;
    char letra = 's';
    int i=0;

    while(letra == 'S' || letra == 's'){
        pnew = (struct aluno *) malloc(sizeof(struct aluno));

        lerAluno(pnew);

        pnew->prox = NULL;

        if (i == 0){
            pinicio = pnew;
            pa = pnew;
        }else
            pa->prox = pnew;

        pa = pnew;
        i++;

        printf("Digitar dados de outro aluno (S/N)?\n");
        fflush(stdin);
        scanf("%c", &letra);
    }

    printf("Foram inseridos %d alunos:\n", i);
    listarAlunos(pinicio);
    printf("--------------------------\n");
    printf("Destruindo a lista...\n");
    destruirLista(pinicio);

    return 0;

}
