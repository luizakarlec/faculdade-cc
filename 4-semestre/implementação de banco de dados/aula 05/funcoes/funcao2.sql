-- Função Escalar

CREATE FUNCTION fn_CalcularIdade (@Nasc DATE)
RETURNS INT
AS
BEGIN
	DECLARE @Idade INT
	SET @Idade = DATEDIFF(YEAR, @Nasc, GETDATE())
	IF(MONTH(@Nasc) > MONTH(GETDATE()) 
		OR (MONTH(@Nasc) = MONTH(GETDATE()) 
		AND DAY(@Nasc) > DAY(GETDATE())))
		SET @Idade = @Idade -1
	RETURN @Idade;
END

GO
SELECT F.Pnome, F.Datanasc, dbo.fn_CalcularIdade(F.Datanasc)
FROM FUNCIONARIO AS F