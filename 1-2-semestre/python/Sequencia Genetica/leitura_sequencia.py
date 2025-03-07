import os
os.system('cls')

print('***Leitor de expressao genetica***\n')

#informar o arquivo que vai ser usado (no meu caso, "exemplo_sequencia.txt"):
arquivo_lido = input("Informe o arquivo: ")

#leitura do arquivo de texto com a sequencia
with open(arquivo_lido, "r") as arquivo:
    conteudo = arquivo.read()

#leitura de uma expressão genética a ser pesquisada no arquivo lido
expressao = input('Digite a expressao a ser pesquisada: ').upper()

#resposta em terminal, informando quantas vezes a pesquisa genética ocorre no arquivo com dados genéticos 
contagem = conteudo.count(expressao)
print(f"\nA expressao genetica aparece {contagem} vezes no arquivo.\n")
