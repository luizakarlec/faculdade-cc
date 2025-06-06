#include <iostream>
#include <cstdlib>
 
using namespace std;
 
#include "arvore.h"
 
int main() {
    Arvore *arvore = NULL;
    arvore = inserir(50, arvore);
    arvore = inserir(35, arvore);
    arvore = inserir(40, arvore);
    arvore = inserir(60, arvore);
 
    cout << "Total de elementos: " << contar(arvore) << endl;
    
    cout << "Exibindo arvore ordenada: " << endl;
    exibirOrdenado(arvore);
    
    cout << "\nExibindo folhas: " << endl;
    exibirFolhas(arvore);

    cout << "\nTotal de folhas: " << contarFolhas(arvore) << endl;

    cout << "Localizar: " << localizar(40, arvore);

    return 1;
}
