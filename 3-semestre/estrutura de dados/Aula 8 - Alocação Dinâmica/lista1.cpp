#include <iostream>
using namespace std;

#include "lista.h"

int main() {
    Celula *lista = NULL;

    lista = inserir(7, lista);
    lista = inserir(10, lista);
    lista = inserir(5, lista);
    lista = inserir(10, lista);

    cout << "Lista contem " << contarLista(lista) << " elementos\n";
    exibir(lista);

    int numero;
    cout << "Digite numero para pesquisa: ";
    cin >> numero;

    cout << numero << " esta na lista? " << estaNaLista(numero, lista) << endl;

    //contar ocorências de um número
     cout << numero << " esta na lista " << ocorrenciaLista(numero, lista) <<  " vezes" << endl;

    //verificar se a lista esta ou não ordenada
    cout << "Lista esta ordenada? " << estaOrdenadaLista(lista) << endl;

    //calcular a média dos elementos da lista
    cout << "Media dos elementos da lista:  " << mediaLista(lista) << endl;

    //alterar o inserir para que controle duplicados

    //criar um método de ordenação da lista encadeada
    ordenarBolha(lista); 
    exibir(lista);

    return 1;
}
