# Revisão de Pesquisa

1. Pesquisa, o que é e para que serve?
```
Procurar uma informação devolvendo o seu endereço
```

2. Localizar vs recuperar
```
- Localizar: indexOf, contains, in
- Recuperar:
  - INDEXAÇÃO ~= INDICE -> "apontador de conteúdo" -> REMISSIVO = tags
      - Etiquetação + Tabela HASH                     ANALÍTICO
```
```
Localizar é o ato de procurar o apontador (o índice, o endereço) que leva ao conteúdo.
Recuperar usa o apontador para acessar o conteúdo real.
```

3. Complexidade das pesquisas
```
- Sequencial   O(n)
- Binária      O(log n)
- Digital      O(n)
- Hash         O(1)
```

4. Fluxo: 
```
armazenar, "ordenar", pesquisar
```
   
6. Algoritmos
   - Pesquisa digital

   - Pesquisa binária
   ```python
   def pesquisa_binaria(lista, valor):
    ini = 0
    fim = len(lista) - 1
    while (ini <= fim):
        meio = int((ini+fim)/2)
        if (valor == lista[meio]):
            return True
        if (valor < lista[meio]):
            fim = meio - 1
        else:
            ini = meio + 1
   ```
     
7. Teoria de tabelas hash
   - Tabela
   ```
   Tabelas hash são tabelas que guardam a informação com um par de chave e valor, sendo a chave a posição da informação na tabela hash
   ```
   - Função hash de endereçamento
   ```
   A função hash transforma um valor de identificação do objeto em uma chave que esteja entre os valores [0, N-1] para existir uma posição na tabela para guardar a informação
   ```
  
  ---
  OBS: Qual pesquisa usar em cada caso, quantas comparações
