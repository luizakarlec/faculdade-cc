CREATE PROCEDURE usp_FuncionarioDepartamento(@Departamento VARCHAR(15) = NULL)
AS
BEGIN
	IF (@Departamento IS NULL)
		BEGIN
			SELECT CONCAT(F.Pnome,' ', F.Minicial,' ', F.Unome) AS Nome, D.Dnome
			FROM FUNCIONARIO AS F
			LEFT JOIN DEPARTAMENTO AS D
			ON F.Dnr = D.Dnumero
		END
	ELSE
		BEGIN 
			SELECT CONCAT(F.Pnome,' ', F.Minicial,' ', F.Unome) AS Nome, D.Dnome
			FROM FUNCIONARIO AS F
			LEFT JOIN DEPARTAMENTO AS D
			ON F.Dnr = D.Dnumero
			WHERE D.Dnome = @Departamento
		END
END
GO

EXEC usp_FuncionarioDepartamento 'Pesquisa';
EXEC usp_FuncionarioDepartamento;