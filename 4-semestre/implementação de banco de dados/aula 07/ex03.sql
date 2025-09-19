CREATE PROCEDURE usp_AtualizaSalario
	@CPF VARCHAR(11),
	@NovoSalario DECIMAL(10,2)
AS
BEGIN
	UPDATE FUNCIONARIO
	SET Salario = @NovoSalario
	WHERE Cpf = @CPF

	IF @@ROWCOUNT = 0
		PRINT 'N�o h� ningu�m com o CPF: ' + @CPF
END
GO

EXEC usp_AtualizaSalario '5', 15000.00;