typedef struct no {
    int dado;
    struct no *prox;
} Lista;


//metodo para inserir dados no INICIO da lista
Lista *inserir(int dado, Lista *lista) {
    Lista *novo;
    novo = (Lista*)malloc(sizeof(Lista));

    novo->dado = dado;
    novo->prox = lista;

    return novo;
}

 
//metodo para exibir dados na lista
void exibir(Lista *lista) {
    for(Lista *p = lista; p; p = p->prox){
        cout << p->dado << endl;
    }
}

//metodo para deletar um dado da lista
Lista *remover(int dado, Lista *lista){
    Lista *p, *pR;
    for(p=lista, pR=NULL; p; pR=p, p=p->prox){
        if(dado == p->dado){
            if(p == lista){ //primeiro elemento
                lista = lista->prox;
                free(p);
                return lista;
            }
            if(!p->prox){ //ultimo elemento
                pR->prox = NULL;
                free(p);
                return lista;
            }
            pR->prox = p->prox;
            free(p);
            return lista;
        }
    }
    return lista;
}

//metodo para deletar pares da lista
Lista *removerPares(Lista *lista){
    Lista *p;
    for(p = lista; p;){
        if(p->dado %2 == 0){
            lista = remover(p->dado, lista);
            p = lista;
        } else {
            p = p->prox;
        }
    }
    return lista;
}

//metodo para unir listas
Lista *unirListas(Lista *lista1, Lista *lista2){
    
    for(Lista *p = lista1; p; p = p->prox){
        lista2 = inserir(p->dado, lista2);
    }
    
    return lista2;
}

//metodo para remover todos os elementos da lista
Lista *deletarTudo(Lista *lista){
    Lista *p;
    for(p = lista; p; p = p->prox){
        p = remover(p->dado, p);
    }

    return lista;
}

//ordenar dados da lista
void ordenarBolha(Lista *lista){
    cout << "Ordenando.." << endl;
    int tmp;
    bool houveTroca;

    do {
        houveTroca = false;
        for(Lista *p = lista; p->prox != NULL; p = p->prox) {
            if (p->dado > p->prox->dado) {
                tmp = p->dado;
                p->dado = p->prox->dado;
                p->prox->dado = tmp;
                houveTroca = true;
            }
        }
    } while (houveTroca);
}

/*
Lista *inserir(int dado, Lista *lista) {
    if (lista && dado >= lista->dado) {
        if (dado != lista->dado) {
            //avançar na lista
            lista->prox = inserir(dado, lista->prox);
        }
        return lista;

    } else { //cheguei no final da lista
        Lista *novo = (Lista*)malloc(sizeof(Lista));
        novo->dado = dado;
        if (lista) {
            novo->prox = lista;
        } else {
            novo->prox = NULL;
        }
        return novo;
    }
}
*/
