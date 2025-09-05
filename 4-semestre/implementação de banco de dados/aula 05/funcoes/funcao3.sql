-- Fun��o Inline (Retornando Tabela)

CREATE FUNCTION fn_FuncionarioPorDepartamento (@Nome VARCHAR(15))
RETURNS TABLE
AS
RETURN
(
	SELECT F.Pnome, F.Unome, F.Salario
	FROM FUNCIONARIO AS F
	INNER JOIN DEPARTAMENTO AS D
	ON F.Dnr = D.Dnumero
	WHERE D.Dnome = @Nome
);
GO

SELECT * FROM dbo.fn_FuncionarioPorDepartamento('Pesquisa');