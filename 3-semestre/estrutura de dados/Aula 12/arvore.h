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
