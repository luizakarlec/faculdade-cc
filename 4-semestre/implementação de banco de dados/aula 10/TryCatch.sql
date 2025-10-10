-- TRY CATCH
BEGIN TRY
	SELECT 1/0; -- erro
	PRINT 'Não cheguei aqui'
END TRY
BEGIN CATCH
	PRINT 'DEU ERRO!';
	PRINT 'Número: ' + CAST(ERROR_NUMBER() AS VARCHAR(10))
	PRINT 'Mensagem: ' + ERROR_MESSAGE();
END CATCH

-- TRY CATCH
BEGIN TRY
	BEGIN TRAN;

	UPDATE FUNCIONARIO
	SET Dnr = 112
	WHERE CPF = '98765432168'
	
	COMMIT TRAN
	PRINT 'Realizada alteraçãode departamento!'
END TRY
BEGIN CATCH
	-- XACT_STATE() retorna o estado da transação
	-- 1 Transação em aberto
	-- 0 Não existe transação em aberto
	IF XACT_STATE() <> 0
		ROLLBACK TRAN;
	PRINT 'Número: ' + CAST(ERROR_NUMBER() AS VARCHAR(10))
	PRINT 'Mensagem: ' + ERROR_MESSAGE();
END CATCH