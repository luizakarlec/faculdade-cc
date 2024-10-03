memoria = ['1000', '1111', '1111', '1010']
acumulador = ['0000']
#comandos aceitados
#00 - LER
#01 - ESCREVER
#10 - SOMAR
#11 - SUBTRAIR
instrucao = '10100001' #instrucao tem 8 bits

# XX instrução XX posicao XXXX numero

def mostraMemoria():
  mem = ''
  for posicao in memoria:
    mem = mem+posicao
  print(mem)

def mostraAcumulador():
  print('AC', acumulador)

#instruções

def ler(posicao):
  global acumulador
  acumulador = memoria[posicao]
  mostraAcumulador()

def escrever(posicao, dado):
  global acumulador, memoria
  memoria[posicao] = dado
  mostraMemoria()

def somar(endDec, dado):
  global acumulador, memoria
  valor = memoria[endDec]
  print('Função somar ', valor, 'com', dado)
  valorDec = int(valor,2)
  dadoDec = int(dado,2)
  print('Convertidos: valor', valorDec, 'dado', dadoDec)
  resultado = valorDec + dadoDec #decimal
  resultadoBin = bin(resultado) #binario
  res = resultadoBin[2:] #tira o 0b
  tamanhoRes = len(res) #len retorna o tamanho
  if tamanhoRes < 4:
    for repeticoes in range(4-tamanhoRes):
      res = '0'+ res
  if tamanhoRes > 4:
    res = '0000'
  print('Soma =', resultado, '-', res)
  memoria[endDec] = res
  mostraMemoria()

#fazer
def subtrair():
  global acumulador, memoria
  valor = memoria[endDec]
  print('Função subtrair ', valor, 'com', dado)
  valorDec = int(valor,2)
  dadoDec = int(dado,2)
  print('Convertidos: valor', valorDec, 'dado', dadoDec)
  resultado = valorDec + dadoDec #decimal
  resultadoBin = bin(resultado) #binario
  res = resultadoBin[2:] #tira o 0b
  tamanhoRes = len(res) #len retorna o tamanho
  if tamanhoRes < 4:
    for repeticoes in range(4-tamanhoRes):
      res = '0'+ res
  if tamanhoRes > 4:
    res = '0000'
  print('Subtração =', resultado, '-', res)
  memoria[endDec] = res
  mostraMemoria()

def executaInstrucao(instr):
  print('Instrucao', instr)
  com = instr[:2]
  comDec = int(com,2) #transforma em decimal
  end = instr[2:4]
  endDec = int(end,2)
  dado = instr[4:]
  print(com, comDec, end, endDec, dado)
  if comDec == 0:
    ler(endDec)
  if comDec == 1:
    escrever(endDec, dado)
  if comDec == 2:
    somar(endDec, dado)
  if comDec == 3:
    subtrair(endDec, dado)

mostraMemoria()
executaInstrucao(instrucao)
