-- Função Multi-Statment (Tabela com Lógica)

CREATE FUNCTION fn_SalarioAnual()
RETURNS @Tabela TABLE
(
	NomeCompleto VARCHAR(100),
	SalarioMensal DECIMAL(10,2),
	SalarioAnual DECIMAL(12,2)
)
AS
BEGIN
	INSERT INTO @Tabela
	SELECT CONCAT(F.Pnome, ' ', F.Minicial, ' ', F.Unome), 
		F.Salario,
		F.Salario * 12
	FROM FUNCIONARIO AS F
	RETURN;
END;
GO

SELECT * FROM fn_SalarioAnual();