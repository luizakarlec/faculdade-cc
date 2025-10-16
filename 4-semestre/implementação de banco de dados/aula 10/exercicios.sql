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
*/

-- 1
INSERT INTO DEPARTAMENTO (Dnome, Dnumero) VALUES ('Departamento1', 9);

BEGIN TRAN;
INSERT INTO DEPARTAMENTO (Dnome, Dnumero) VALUES ('Departamento2', 10);
ROLLBACK TRAN;

SELECT * FROM DEPARTAMENTO;
-- Apenas a primeira primeira linha permaneceu pois o ROLLBACK desfaz tudo dentro da transa��o expl�cita

-- 2
BEGIN TRAN;
INSERT INTO DEPARTAMENTO (Dnome, Dnumero) VALUES ('Departamento3', 11);
SAVE TRAN dpt;
INSERT INTO DEPARTAMENTO (Dnome, Dnumero) VALUES ('Departamento4', 12);
ROLLBACK TRAN dpt;
COMMIT TRANSACTION;

SELECT * FROM DEPARTAMENTO; -- 'Departamento2' n�� foi inserido pois estava abaixo do SAVEPOINT

-- 3
BEGIN TRAN;
DECLARE @registroAfetado INT = 0;

UPDATE FUNCIONARIO SET Endereco ='Santa Maria, RS' WHERE Cpf = '12312312311';
SET @registroAfetado = @@ROWCOUNT + @registroAfetado

IF @registroAfetado <> 1
BEGIN
	ROLLBACK TRAN;
	PRINT 'Altera��o n�o realizada'
END;
ELSE
BEGIN
	COMMIT TRANSACTION;
	PRINT 'Altera��o realizada!'
END;
