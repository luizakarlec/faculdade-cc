-- Função Escalare

CREATE FUNCTION fn_Dobro(@Numero INT)
RETURNS INT
AS
BEGIN
	RETURN @Numero * 2;
END;
GO

SELECT dbo.fn_Dobro(5) AS 'Resultado';

SELECT F.Pnome, F.Unome, F.Salario, dbo.fn_Dobro(F.Salario) AS 'Dobro'
FROM FUNCIONARIO AS F
