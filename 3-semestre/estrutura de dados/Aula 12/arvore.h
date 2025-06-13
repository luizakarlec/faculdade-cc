typedef struct no {
    int dado;
    struct no *esq;
    struct no *dir;
} Arvore;
 
 
Arvore *inserir(int dado, Arvore *raiz) {
    if (raiz) {
        if (dado < raiz->dado) { //ir para esquerda
            raiz->esq = inserir(dado, raiz->esq);
        } else { //ir para direita
            raiz->dir = inserir(dado, raiz->dir);
        }
        return raiz;
    }
    //processo chegou no vazio da árvore e um novo nodo sera adicionado
    Arvore *novo = (Arvore*)malloc(sizeof(Arvore));
    novo->dado = dado;
    novo->esq = NULL;
    novo->dir = NULL;
    return novo;
}
 
void exibirOrdenado(Arvore *raiz) {
    if (raiz) { //caminhamento infixado = ERD
        exibirOrdenado(raiz->esq);
        cout << raiz->dado << "\t";
        exibirOrdenado(raiz->dir);
    }
}
 
void exibirArvore(int nivel, Arvore *raiz) {
    if (raiz) { //percurso DRE
        //vai para Direita
        exibirArvore(nivel + 1, raiz->dir);
 
        //visita rairz
        for (int i = 0; i < nivel; i++) {
            cout << "  ";
        }
        cout << "(" << nivel << ")" <<  raiz->dado << endl;
 
        //vai para Esquerda
        exibirArvore(nivel + 1, raiz->esq);
    }
}
 
int contarNodos(Arvore *raiz) {
    if (raiz) {
        return 1 + contarNodos(raiz->esq) + contarNodos(raiz->dir);
    }
    return 0;
}
 
bool localizar(int dado, Arvore *raiz) {
    if (raiz) {
        if (dado == raiz->dado) {
            return true;
        }
        if (dado < raiz->dado) { //ir para a esquerda
            return localizar(dado, raiz->esq);
        } //ir para direita
        return localizar(dado, raiz->dir);
    }
    return false;
}
 
int localizarNivel(int dado, Arvore *raiz) {
    if (raiz) {
        if (dado == raiz->dado){
            return 0;
        }
        if (dado < raiz->dado) { //ir para esquerda
            int respostaDoEmpilhamento = localizarNivel(dado, raiz->esq);
            if (respostaDoEmpilhamento == -1) {
                return -1;
            }
            return 1 + respostaDoEmpilhamento;
 
        } else { //ir para direita
            int respostaDoEmpilhamento = localizarNivel(dado, raiz->dir);
            if (respostaDoEmpilhamento == -1) {
                return -1;
            }
            return 1 + respostaDoEmpilhamento;
        }
    }
    return -1; //cheguei no vazio e nao encontrei o valor
}
 
void exibirFolhas(Arvore *raiz) {
    if (raiz) {
        if (!raiz->esq && !raiz->dir) {
            cout << raiz->dado << "\t";
        } else {
            exibirFolhas(raiz->esq);
            exibirFolhas(raiz->dir);
        }
    }
}
 
int contarFolhas(Arvore *raiz) {
    if (raiz) {
        if (!raiz->esq && !raiz->dir) {
            return 1;
        }
        return 0 + contarFolhas(raiz->esq) + contarFolhas(raiz->dir);
    }
    return 0;
}
 
Arvore *podar(Arvore *raiz) {
    if (raiz) {
        if (!raiz->esq && !raiz->dir) {
            //apagar o no folha
            free(raiz);
            return NULL;
        }
        raiz->esq = podar(raiz->esq);
        raiz->dir = podar(raiz->dir);
        return raiz;
    }
    return NULL;
}
 
Arvore *limpar(Arvore *raiz) {
    if (raiz) {
        raiz->esq = limpar(raiz->esq);
        raiz->dir = limpar(raiz->dir);
        free(raiz);
    }
    return NULL;
}
 
Arvore *remover(int dado, Arvore *raiz) {
    if (raiz) {
        if (dado == raiz->dado) {//localizei o dado e remover
            //verificar se eh folha
            if (!raiz->esq && !raiz->dir) {
                free(raiz);
                return NULL;
            }
            //verificar se ha um filho somente
            if ((raiz->esq && !raiz->dir) || (raiz->dir && !raiz->esq)) {
                Arvore *tmp;
                if (raiz->esq) {
                    tmp = raiz->esq;    
                }
                if (raiz->dir) {
                    tmp = raiz->dir;    
                }
                free(raiz);
                return tmp;
            }
            //se estou neste ponto eh porque o nodo tem dois filhos e o filho da esquerda serah o novo pai
            Arvore *novoPai = raiz->esq;
            Arvore *tmp = novoPai->dir;
            novoPai->dir = raiz->dir;
            free(raiz);
 
            Arvore *p;
            for (p = novoPai->dir; p->esq; p = p->esq);
           
            p->esq = tmp;
            return novoPai;
        }
        if (dado < raiz->dado) {
            raiz->esq = remover(dado, raiz->esq);
        } else {
            raiz->dir = remover(dado, raiz->dir);
        }
        return raiz;
    }
    return NULL;
}
