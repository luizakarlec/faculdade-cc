memoria = ['0000','0000','0000','0000']
acumulador = ['0000']
#comando aceitados
# 00 - LER
# 01 - ESCREVER
# 10 - SOMAR
# 11 - SUBTRAIR
instrucao = '10100001' #instrucao tem 8 bits

def converte4bits(parametro):
  tamanhoRes = len(parametro) #len retorna o tamanho
  if tamanhoRes < 4:
    for repeticoes in range(4-tamanhoRes):
      parametro = '0'+ parametro
  if tamanhoRes > 4:
    parametro = '0000'
  return parametro

#verifica se numeros são validos para MULTIPLICAR (resultado entre 1 e 15) e salva nas variaveis
def entrada():
  n1 = int(input('Digite o primeiro valor: '))
  n2 = int(input('Digite o segundo valor: '))
  if (n1*n2) >= 1 and (n1*n2) <= 15:
    print(n1, 'X', n2)
    return n1,n2
  else:
    print('numeros nao validos!')
    return -1, -1

def mostraMemoria():
  mem = ''
  for posicao in memoria:
    mem = mem+posicao
  print(mem)

def mostraAcumulador():
  print('AC:',acumulador)

def ler(posicao):
  global acumulador
  acumulador = memoria[posicao]
  mostraAcumulador()

def escrever(posicao,dado):
  global acumulador,memoria
  memoria[posicao]=dado
  mostraMemoria()

def somar(endDec,dado):
  global acumulador, memoria
  valor = memoria[endDec]
  print('Funcao somar ',valor, 'com',dado)
  valorDec = int(valor,2)
  dadoDec = int(dado,2)
  print('Convertidos: valor',valorDec,'dado',dadoDec)
  resultado = valorDec+dadoDec
  resultadoBin = bin(resultado)
  res = resultadoBin[2:]
  tamanhoRes = len(res) #len retorna o tamanho
  if tamanhoRes < 4:
    for repeticoes in range(4-tamanhoRes):
      res = '0'+res
  if tamanhoRes > 4:
    res = '0000'
  print('Soma=',resultado,'-',res)
  memoria[endDec] = res #atualizar a memoria
  mostraMemoria()
  acumulador[0] = res  # !!!!!!!! armazena o resultado no acumulador (usado na multiplicação)

def subtrair(endDec,dado):
  global acumulador, memoria
  valor = memoria[endDec]
  print('Funcao subtrair ',valor, 'com',dado)
  valorDec = int(valor,2)
  dadoDec = int(dado,2)
  print('Convertidos: valor',valorDec,'dado',dadoDec)
  resultado = valorDec - dadoDec
  resultadoBin = bin(resultado)
  res = resultadoBin[2:]
  tamanhoRes = len(res)#len retorna o tamanho
  if tamanhoRes < 4:
    for repeticoes in range(4-tamanhoRes):
      res = '0'+res
  if tamanhoRes > 4:
    res = '0000'
  print('Subtração=',resultado,'-',res)
  memoria[endDec] = res #atualizar a memoria
  mostraMemoria()

def executaInstrucao(instr):
  print('Instrucao:',instr)
  com = instr[:2]
  comDec = int(com,2)
  end = instr[2:4]
  endDec = int(end,2)
  dado = instr[4:]
  print(com,comDec,end,endDec,dado)
  if comDec == 0:
    ler(endDec)
  if comDec == 1:
    escrever(endDec,dado)
  if comDec == 2:
    somar(endDec,dado)
  if comDec == 3:
    subtrair(endDec,dado)

#MULTIPLICAR

escrever(0,'0000')

print("\nMultiplicação: ")
v1, v2 = entrada() #manda valores v1 e v2 para a função entrada
if v1 != -1 and v2 != -1:
  #carrega o v2 na memoria
  v2Bin = bin(v2) #converte o numero v2 para inteiro binario
  v2mem = converte4bits(v2Bin[2:]) #remove dois primeiros caracteres "0b" e passa o valor para função converte4bits
  instrucao = '0100' + v2mem + '\n'
  for i in range(v1-1):
    instrucao = instrucao + '1000' + v2mem + '\n'
  print(instrucao)

  #calculo multiplicação decimal
  resultado_multiplicacao = 0
  for i in range(v1):
    resultado_multiplicacao += v2

  #calculo multiplicação binario
  print('*uso da função somar para a multiplicação*')
  for i in range(v1):
    somar(0, v2mem)

  print('\nResultado da multiplicação:', resultado_multiplicacao)
  mostraAcumulador()  # Mostra o acumulador atualizado
  mostraMemoria()


#NAO necessarios agora:
#mostraMemoria()
#executaInstrucao(instrucao)
