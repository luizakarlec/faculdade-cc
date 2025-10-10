/*
1. Autocommit � Transa��o Expl�cita 
Tarefa: Insira dois departamentos: um em modo autocommit e outro dentro de uma 
transa��o expl�cita. Em seguida, desfa�a o segundo (Rollback) e confirme o primeiro. 
Entreg�vel: Demonstre, por consulta, qual linha permaneceu e explique por qu�.

2. SAVEPOINT e ROLLBACK Parcial 
Tarefa: Dentro de uma �nica transa��o, insira dois departamentos. Crie um SAVEPOINT 
ap�s o primeiro insert e fa�a ROLLBACK para o savepoint (mantendo o primeiro e 
desfazendo o segundo). Entreg�vel: Evidencie que apenas o primeiro persiste ap�s COMMIT.

3. UPDATE com Confer�ncia e Decis�o 
Tarefa: Inicie transa��o, atualize o endere�o de um funcion�rio espec�fico, conferir 
a altera��o e ent�o decidir entre COMMIT ou ROLLBACK com base na confer�ncia.
Entreg�vel: Registre a decis�o e o estado final do registro.

4. SAVEPOINT antes de UPDATE em Massa 
Tarefa: Em uma transa��o, crie um SAVEPOINT e aplique um reajuste salarial (ex.: +2%) 
para um departamento. Avalie o impacto (m�dia e quantidade). Caso o efeito n�o seja 
desejado, ROLLBACK para o savepoint; caso contr�rio, COMMIT. 
Entreg�vel: Relat�rio curto do antes/depois e a decis�o tomada.

5. Opera��o Composta: INSERT + UPDATE (Tudo-ou-Nada) 
Tarefa: Em uma �nica transa��o, crie um novo departamento e realoque um funcion�rio 
para esse departamento. Ao final, decida entre COMMIT ou ROLLBACK (tudo deve persistir ou nada). 
Entreg�vel: Comprove atomicidade: se desfizer, nem o depto novo nem a realoca��o devem permanecer.

6. Tratamento de Erros com TRY�CATCH e XACT_STATE() 
Tarefa: Dentro de uma transa��o, fa�a um UPDATE v�lido e, em seguida, provoque um 
erro (por ex., atualizar uma coluna inexistente). Trate o erro com TRY�CATCH e decida 
COMMIT/ROLLBACK conforme XACT_STATE(). 
Entreg�vel: Explique quando XACT_STATE retorna 1 ou -1 e o que isso implica para a recupera��o.
/*

