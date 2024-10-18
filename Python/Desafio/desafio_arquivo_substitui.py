# solocitar ao usuario um arquivo texto
nome_arquivo = input('Digite caminho e nome do arquivo texto: ')

# solicitar a palavra ou expressão a ser substituida (origem)
origem = input('Digite palavra ou expressao a ser substituida no arquivo (origem): ')

# solocitar a palavra ou expressão que irá substituir (destino)
destino = input('Digite palavra ou expressao a ser substituida no arquivo (destino): ')

# associar e abrir o arquivo a um leitor de arquivo
with open(nome_arquivo, 'r', encoding='utf-8') as leitor:
    # Lendo o conteudo do arquivo
    # transferir o conteudo do arquivo para dentro de uma variavel string
    conteudo = leitor.read()

# localizar a palavra origem e substituir pela palavra destino na variavel string
resultado = conteudo.replace(origem,destino)

# associar e abrir o arquivo a um escritor de arquivo
with open(nome_arquivo, 'w', encoding='utf-8') as escritor:
    # gravar a variavel do tipo string como texto alterado no arquivote
    escritor.write(resultado)

