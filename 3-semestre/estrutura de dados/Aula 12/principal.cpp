#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
 
#include "arvore.h"
 
int main() {
    Arvore *arvore = NULL;
    int qtd = 10;
    int numero;
   
    srand(time(NULL));
 
    for (;qtd > 0; qtd--) {
        numero = rand() % 10;
        cout << "Numero gerado: " << numero << endl;
        arvore = inserir(numero, arvore);
    }
 
    cout << endl;
    cout << "Total de nos: " << contarNodos(arvore) << endl;
    exibirArvore(0, arvore);
 
    // cout << "Digite numero para pesquisa/delecao: ";
    // cin >> numero;
 
    // cout << "Localizado? " << localizarNivel(numero, arvore) << endl;
 
 
    // cout << "Total de folhas: " << contarFolhas(arvore) << endl;
    // exibirFolhas(arvore);
 
    cout << "Digite numero para pesquisa/delecao: ";
    cin >> numero;
 
    arvore = remover(numero, arvore);
   
    cout << "Total de nos apos remocao: " << contarNodos(arvore) << endl;
    exibirArvore(0, arvore);
 
    cout << endl;
 
   
 
    return 1;
}
