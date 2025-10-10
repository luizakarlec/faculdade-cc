-- TRY CATCH
BEGIN TRY
	SELECT 1/0; -- erro
	PRINT 'N�o cheguei aqui'
END TRY
BEGIN CATCH
	PRINT 'DEU ERRO!';
	PRINT 'N�mero: ' + CAST(ERROR_NUMBER() AS VARCHAR(10))
	PRINT 'Mensagem: ' + ERROR_MESSAGE();
END CATCH

-- TRY CATCH
BEGIN TRY
	BEGIN TRAN;

	UPDATE FUNCIONARIO
	SET Dnr = 112
	WHERE CPF = '98765432168'
	
	COMMIT TRAN
	PRINT 'Realizada altera��ode departamento!'
END TRY
BEGIN CATCH
	-- XACT_STATE() retorna o estado da transa��o
	-- 1 Transa��o em aberto
	-- 0 N�o existe transa��o em aberto
	IF XACT_STATE() <> 0
		ROLLBACK TRAN;
	PRINT 'N�mero: ' + CAST(ERROR_NUMBER() AS VARCHAR(10))
	PRINT 'Mensagem: ' + ERROR_MESSAGE();
END CATCH