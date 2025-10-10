-- TRANSACTIONS
BEGIN TRAN;

DECLARE @registroAfetado INT = 0;

UPDATE FUNCIONARIO
SET Salario = 30000
WHERE Pnome = 'Carlos'
SET @registroAfetado = @@ROWCOUNT + @registroAfetado

IF @registroAfetado <> 1
BEGIN
	ROLLBACK TRAN;
	PRINT 'Altera��o n�o realizada'
END;
ELSE
BEGIN
	COMMIT TRANSACTION;
	PRINT 'Altera��o realizada com sucesso!'
END;

