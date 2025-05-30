#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
 
#include "lista.h"
 
int main() {
    srand(time(NULL));
    
    Lista *lista1 = NULL;
    Lista *lista2 = NULL;
    
    //Faça um método que receba as duas listas e exiba os números que estão presentes em ambas.
    for (int i = 0; i < 5; i++) {
        lista1 = inserir(rand() % 100, lista1);
        lista2 = inserir(rand() % 100, lista2);
    }

    cout << "Lista 1: " << endl;
    exibir(lista1);
    cout << "Lista 2: " << endl;
    exibir(lista2);

    //Faça um método que exclua todos os números pares da lista1 ou listaA
    lista1 = removerPares(lista1);
    cout << "Lista 1 sem pares: " << endl;
    exibir(lista1);

    //Faça um método que una a lista1 ou listaA na lista2 ou listaB. Ou seja, todos os elementos da primeira lista devem vir primeiro dos elementos da segunda lista CONFERE
    lista2 = unirListas(lista1, lista2);
    cout << "Lista 2 com os elementos da Lista 1: " << endl;
    exibir(lista2);

    //Faça um método que receba o resultado da união da lista1 com a lista2 e aplique um método de ordenação
    ordenarBolha(lista2);
    cout << "Uniao ordenada: " << endl;
    exibir(lista2);

    //Faça um método que delete todos os elementos da lista criada da união entre lista1 e lista2.
    lista2 = deletarTudo(lista2);
    exibir(lista2);

    return 1;
}
