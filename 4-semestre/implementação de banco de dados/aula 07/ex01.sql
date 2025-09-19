CREATE PROCEDURE usp_MeuNome (@nome VARCHAR(100))
AS
BEGIN
	PRINT @nome;
END

EXEC usp_MeuNome @nome = 'luiza';
GO

ALTER PROCEDURE usp_MeuNome (@nome VARCHAR(100))
AS
BEGIN
	PRINT 'Seu nome é: ' + @nome;
END