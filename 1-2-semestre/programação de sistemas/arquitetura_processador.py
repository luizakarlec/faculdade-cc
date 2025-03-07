import os
os.system('clear')

memoria = ['1000','1111','0101','1010']
acumulador = ['0000']

#Comandos aceitos:
#00 - ler
#01 - escrever
#10 - somar
#11 - subtrair

instrucao = '11100001' #instrução tem 8 bits

def mostraMemoria():
    mem = ''
    for posicao in memoria:
        mem = mem + posicao
    print(mem)

def mostraAcumulador():
    print('AC:', acumulador)

def ler(posicao):
    global acumulador
    acumulador = memoria[posicao]
    mostraAcumulador()

def escrever(posicao,dado):
    global acumulador, memoria
    memoria[posicao] = dado
    mostraMemoria()

def somar(endDec,dado):
  global acumulador, memoria
  valor = memoria [endDec]
  print('Funcao SOMAR', valor, 'com', dado)
  valorDec = int(valor, 2)
  dadoDec = int(dado, 2)
  print('Convertidos: valor', valorDec, 'dado', dadoDec)
  resultado = valorDec + dadoDec             #realiza a soma em decimal
  resultadoBin = bin(resultado)              #transforma o resultado em momoria
  res = resultadoBin[2:]                     #tira o 0b do resultadoBin
  tamanhoRes = len(res)                      #len retorna o tamanho -> para poder saber o tamanho do res
  if tamanhoRes < 4:                         #para colocar o 0 na frente se necessario
    for repeticoes in range(4 - tamanhoRes): #para colocar o 0 na frente se necessario
      res = '0' + res                        #para colocar o 0 na frente se necessario
  if tamanhoRes > 4:
    res = '0000'
  print('Soma em decimal =', resultado, '| Soma em binario =', res,'t:', tamanhoRes)
  memoria[endDec] = res                      #atualizar memoroia
  mostraMemoria()

def subtrair(endDec,dado):
  global acumulador, memoria
  valor = memoria [endDec]
  print('Funcao SUBTRAIR', valor, 'com', dado)
  valorDec = int(valor, 2)
  dadoDec = int(dado, 2)
  print('Convertidos: valor', valorDec, 'dado', dadoDec)
  resultado = valorDec - dadoDec             #realiza a subtracao em decimal
  resultadoBin = bin(resultado)              #transforma o resultado em momoria
  res = resultadoBin[2:]                     #tira o 0b do resultadoBin
  tamanhoRes = len(res)                      #len retorna o tamanho -> para poder saber o tamanho do res
  if tamanhoRes < 4:                         #para colocar o 0 na frente se necessario
    for repeticoes in range(4 - tamanhoRes): #para colocar o 0 na frente se necessario
      res = '0' + res                        #para colocar o 0 na frente se necessario
  if tamanhoRes > 4:
    res = '0000'
  print('Subtracao em decimal =', resultado, '| subtracao em binario =', res,'t:', tamanhoRes)
  memoria[endDec] = res                      #atualizar memoroia
  mostraMemoria()



def executaInstrucao(instr):
    print('Instrucao', instr)
    com = instr[:2]
    comDec = int(com,2)
    end = instr[2:4]
    endDec = int (end,2)
    dado = instr[4:]
    print(com, comDec, end, endDec,dado)
    if comDec == 0: #00
      ler(endDec)
    if comDec == 1: #01
      escrever(endDec, dado)
    if comDec == 2: #10
      somar(endDec, dado)
    if comDec == 3: #11
      subtrair(endDec, dado)


mostraMemoria()
executaInstrucao(instrucao)
