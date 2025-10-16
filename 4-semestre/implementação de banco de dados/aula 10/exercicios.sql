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
*/

-- 1
INSERT INTO DEPARTAMENTO (Dnome, Dnumero) VALUES ('Departamento1', 9);

BEGIN TRAN;
INSERT INTO DEPARTAMENTO (Dnome, Dnumero) VALUES ('Departamento2', 10);
ROLLBACK TRAN;

SELECT * FROM DEPARTAMENTO;
-- Apenas a primeira primeira linha permaneceu pois o ROLLBACK desfaz tudo dentro da transação explícita

-- 2
BEGIN TRAN;
INSERT INTO DEPARTAMENTO (Dnome, Dnumero) VALUES ('Departamento3', 11);
SAVE TRAN dpt;
INSERT INTO DEPARTAMENTO (Dnome, Dnumero) VALUES ('Departamento4', 12);
ROLLBACK TRAN dpt;
COMMIT TRANSACTION;

SELECT * FROM DEPARTAMENTO; -- 'Departamento2' nãõ foi inserido pois estava abaixo do SAVEPOINT

-- 3
BEGIN TRAN;
DECLARE @registroAfetado INT = 0;

UPDATE FUNCIONARIO SET Endereco ='Santa Maria, RS' WHERE Cpf = '12312312311';
SET @registroAfetado = @@ROWCOUNT + @registroAfetado

IF @registroAfetado <> 1
BEGIN
	ROLLBACK TRAN;
	PRINT 'Alteração não realizada'
END;
ELSE
BEGIN
	COMMIT TRANSACTION;
	PRINT 'Alteração realizada!'
END;
