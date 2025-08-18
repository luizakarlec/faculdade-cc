# Lista de usuários, onde cada usuário é um dicionário
usuarios = [
    {"tipo": "aluno",  "matricula": "A001", "historico_emprestimos": []},
    {"tipo": "professor",  "matricula": "P001", "historico_emprestimos": []},
    {"tipo": "funcionario",  "matricula": "F001", "historico_emprestimos": []}
]

print("Lista inicial de usuários:")
for u in usuarios:
  print(u)
print()

# Lista de livros, onde cada livro é um dicionário
livros = [
    {"isbn": "12345", "titulo": "Python para Iniciantes", "disponivel": True, "localizacao": "Estante A", "prazo_devolucao": None},
    {"isbn": "67890", "titulo": "Modelagem e Simulação", "disponivel": True, "localizacao": "Estante B", "prazo_devolucao": None}
]

print("Lista inicial de livros:")
for l in livros:
  print(l)
print()

# Lista de bibliotecários, onde cada bibliotecários é um dicionário
bibliotecarios = [
    {"nome": "João", "turno": "manhã", "especializacao": None},
    {"nome": "Maria", "turno": "tarde", "especializacao": None}
]

print("Lista incial de bibliotecarios:")
for b in bibliotecarios:
  print(b)
print()

# Funções
emprestimos_ativos = {}

def encontrar_usuario(matricula):
  for u in usuarios:
    if u["matricula"] == matricula:
      return(u)
  return None

def encontrar_livro(isbn):
  for l in livros:
    if l["isbn"] == isbn:
      return(l)
  return None

def emprestar_livro(matricula_usuario, isbn_livro):
  usuario_encontrado = encontrar_usuario(matricula_usuario)
  livro_encontrado = encontrar_livro(isbn_livro)

  if livro_encontrado["disponivel"]:
    livro_encontrado["disponivel"] = False
    usuario_encontrado["historico_emprestimos"].append(isbn_livro)
    emprestimos_ativos[isbn_livro] = matricula_usuario
    print('Livro', livro_encontrado['titulo'], 'emprestado para', usuario_encontrado['tipo'], usuario_encontrado['matricula'])
  else:
    print('Livro',  livro_encontrado['titulo'], 'não está disponivel no momento')

def devolver_livro(matricula_usuario, isbn_livro):
  usuario_encontrado = encontrar_usuario(matricula_usuario)
  livro_encontrado = encontrar_livro(isbn_livro)

  livro_encontrado["disponivel"] = True
  emprestimos_ativos.pop(isbn_livro)
  print('Livro', livro_encontrado['titulo'], 'devolvido por', usuario_encontrado['tipo'], usuario_encontrado['matricula'])

# Simulaçao
print('--- Início da Simulação da Biblioteca ---')
emprestar_livro('A001', '12345')
emprestar_livro('P001', '67890')
emprestar_livro('A001', '67890')
devolver_livro('A001', '12345')
emprestar_livro('F001', '12345')

print('\n--- Estado Final da Simulação ---')
print('Livros:')
for l in livros:
  print(l)

print('\nUsuários:')
for u in usuarios:
  print(u)

print('\nEmpréstimos Ativos:')
for isbn, matricula in emprestimos_ativos.items():
  print("Livro", isbn, "emprestado para", matricula)

print('\nSimulação finalizada.')
