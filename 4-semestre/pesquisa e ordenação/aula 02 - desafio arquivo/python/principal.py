from util import Util

lista_numeros = []
lista2_numeros = []

lista_palavras = []

# Util.popular_aleatorio_numeros(lista_numeros, 10, 100, 500)
# Util.exibir_lista(lista_numeros)

#lista2_numeros.extend(lista_numeros)

#Util.popular_aleatorio_palavras(lista_palavras, 10, 5)
# Util.exibir_lista(lista_palavras)

lista_num = Util.popular_numeros_arquivo('numeros.txt')
lista_p = Util.popular_palavras_arquivo('palavras.txt')

print('Lista números:')
Util.exibir_lista(lista_num)
print('\nLista palavras:')
Util.exibir_lista(lista_p)