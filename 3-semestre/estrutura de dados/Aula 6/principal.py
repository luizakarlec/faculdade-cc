from aluno import Aluno

class Principal:
    alunos = []
    matricula = 1
    while(True):
        
        nome = input("Digite o nome: ").upper()
        tmp = Aluno(matricula, nome)

        if(tmp in alunos):
            print("Aluno com email ja registrado")
        else: 
            alunos.append(tmp)

            print("Aluno cadastrado com a matricula de número ", matricula)
            print("e com email ", tmp.email)
            matricula+=1
            
        opcao = input("Continuar: [1 - Sim; Outra tecla - Não] ");
        if(opcao != "1"):
            break

    alunos.sort(key=lambda aluno : aluno.nome)

    print("Relacao alunos")
    for aluno in alunos: #for objeto
        print(aluno)

