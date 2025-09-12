-- Crie uma função fn_AnoAposentadoria que receba a data de nascimento de um funcionário 
-- e retorne o ano em que ele poderá se aposentar, considerando 65 anos como idade de aposentadoria. 

CREATE FUNCTION fn_AnoAposentadoria(@nasc DATE)
RETURNS INT
AS
BEGIN
	DECLARE @ano_nasc INT;
	SET @ano_nasc = YEAR(@nasc);

	DECLARE @ano_aposentadoria INT;
	SET @ano_aposentadoria = @ano_nasc + 65;

	RETURN @ano_aposentadoria;
END;
GO

SELECT F.Pnome, F.Datanasc,dbo.fn_AnoAposentadoria(F.Datanasc)
FROM FUNCIONARIO AS F;