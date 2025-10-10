/*
1. Autocommit × Transação Explícita 
Tarefa: Insira dois departamentos: um em modo autocommit e outro dentro de uma 
transação explícita. Em seguida, desfaça o segundo (Rollback) e confirme o primeiro. 
Entregável: Demonstre, por consulta, qual linha permaneceu e explique por quê.

2. SAVEPOINT e ROLLBACK Parcial 
Tarefa: Dentro de uma única transação, insira dois departamentos. Crie um SAVEPOINT 
após o primeiro insert e faça ROLLBACK para o savepoint (mantendo o primeiro e 
desfazendo o segundo). Entregável: Evidencie que apenas o primeiro persiste após COMMIT.

3. UPDATE com Conferência e Decisão 
Tarefa: Inicie transação, atualize o endereço de um funcionário específico, conferir 
a alteração e então decidir entre COMMIT ou ROLLBACK com base na conferência.
Entregável: Registre a decisão e o estado final do registro.

4. SAVEPOINT antes de UPDATE em Massa 
Tarefa: Em uma transação, crie um SAVEPOINT e aplique um reajuste salarial (ex.: +2%) 
para um departamento. Avalie o impacto (média e quantidade). Caso o efeito não seja 
desejado, ROLLBACK para o savepoint; caso contrário, COMMIT. 
Entregável: Relatório curto do antes/depois e a decisão tomada.

5. Operação Composta: INSERT + UPDATE (Tudo-ou-Nada) 
Tarefa: Em uma única transação, crie um novo departamento e realoque um funcionário 
para esse departamento. Ao final, decida entre COMMIT ou ROLLBACK (tudo deve persistir ou nada). 
Entregável: Comprove atomicidade: se desfizer, nem o depto novo nem a realocação devem permanecer.

6. Tratamento de Erros com TRY…CATCH e XACT_STATE() 
Tarefa: Dentro de uma transação, faça um UPDATE válido e, em seguida, provoque um 
erro (por ex., atualizar uma coluna inexistente). Trate o erro com TRY…CATCH e decida 
COMMIT/ROLLBACK conforme XACT_STATE(). 
Entregável: Explique quando XACT_STATE retorna 1 ou -1 e o que isso implica para a recuperação.
/*

