import random
class Util:
    """_summary_
        classe responsável por métodos de gestão de listas de números inteiros e listas de palavras
    """
    
    @staticmethod
    def popular_aleatorio_numeros(lista, quantidade, inicio, fim):
        """_summary_
            método de classe que popula uma lista de números inteiros com valores aleatórios
        Args:
            lista (int): estrutura de armazenamento dos números
            quantidade (int): de números a serem gerados
            inicio (int): valor inicial da extensão do número gerado
            fim (int): valor final da extensão do número gerado
        """
        for _ in range(quantidade):
            lista.append(random.randrange(inicio, fim))
            
    @staticmethod
    def exibir_lista(lista):
        for item in lista:
            print(item)
            
    @staticmethod
    def popular_aleatorio_palavras(lista, quantidade, tamanho):
        letras = "abcdefghijklmnopqrstuvwxyz "
        for _ in range(quantidade):
            palavra_gerada = ""
            letra_sorteada = ""
            for i in range(tamanho):
                letra_sorteada = letras[random.randrange(len(letras))]
                palavra_gerada += letra_sorteada
        
            
            lista.append(palavra_gerada)        

    @staticmethod
    def popular_numeros_arquivo(arquivo_lido): 
        numeros = []
        with open(arquivo_lido, "r") as arquivo:
            for num in arquivo:
                numeros.append(int(num))
        return numeros

    @staticmethod
    def popular_palavras_arquivo(arquivo_lido):
        palavras = []
        with open(arquivo_lido, "r") as arquivo:
            for p in arquivo:
                palavras.append(p)
        return palavras