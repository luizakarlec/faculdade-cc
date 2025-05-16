#include <cstdlib>

typedef struct no{
    int dado;
    struct no *prox;

} Celula;

Celula *inserir(int dado, Celula *lista) {
    //alocar memória
    Celula *novo = (Celula *)malloc(sizeof(Celula));

    //verifica se parâmetro esta na lista
    int contem = 0;
    for (Celula *p = lista; p != NULL; p = p->prox) {
        if(dado == p->dado){
            contem = 1;
            break;
        }
    }
    
    if (contem == 0){
        //depositar valores que vem do parâmetro
        novo->dado = dado;
        novo->prox = NULL;

         //testar se é o primeiro elemento a ser inserido
        if (!lista) { //if (lista == NULL)
            return novo;
        }

        //percorrer a estrutura até o final
        Celula *p;
        for(p = lista; p->prox != NULL; p = p->prox);

        //encadear e retornar
        p->prox = novo;
    }
    return lista;
}

void exibir(Celula *lista) {
    for (Celula *p = lista; p != NULL; p = p->prox) {
        cout << p->dado << "\t";
    }
    cout <<endl;
}

int contarLista(Celula *lista) {
    int total = 0;
    for (Celula *p = lista; p != NULL; p = p->prox) {
        total++;
    }
    return total;
}

bool estaNaLista(int numero, Celula *lista) {
    for (Celula *p = lista; p != NULL; p = p->prox) {
        if(p->dado == numero)
            return true; //1
    }
    return false; //0
}

int ocorrenciaLista(int numero, Celula *lista) {
    int total = 0;
    for (Celula *p = lista; p != NULL; p = p->prox) {
        if(p->dado == numero)
            total++;
    }
    return total;
}

float mediaLista(Celula *lista) {
    float soma = 0, total = 0;
    for (Celula *p = lista; p != NULL; p = p->prox) {
        soma += p->dado;
        total++;
    }
    return soma / total;
}

bool estaOrdenadaLista(Celula *lista) {
    for (Celula *p = lista; p != NULL; p = p->prox) {
        if (p->dado > p->prox->dado){
            return false;
        }
    }
    return true;
}

void ordenarBolha(Celula *lista){
    cout << "Ordenando.." << endl;
    int tmp;
    bool houveTroca;

    do {
        houveTroca = false;
        for(Celula *p = lista; p->prox != NULL; p = p->prox) {
            if (p->dado > p->prox->dado) {
                tmp = p->dado;
                p->dado = p->prox->dado;
                p->prox->dado = tmp;
                houveTroca = true;
            }
        }
    } while (houveTroca);
}
