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
	PRINT 'Alteração não realizada'
END;
ELSE
BEGIN
	COMMIT TRANSACTION;
	PRINT 'Alteração realizada com sucesso!'
END;

