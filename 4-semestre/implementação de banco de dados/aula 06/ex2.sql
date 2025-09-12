-- Crie uma função fn_ListarDependentes que receba o Cpf de um funcionário 
-- e retorne uma tabela com os nomes e parentescos de todos os seus dependentes. 

CREATE FUNCTION fn_ListarDependentes(@CPF VARCHAR(11))
RETURNS TABLE
AS
RETURN
(
	SELECT F.Pnome, F.Minicial, F.Unome
	FROM FUNCIONARIO AS F
	WHERE @CPF = F.Cpf_supervisor
);
GO

SELECT *
FROM dbo.fn_ListarDependentes('33344555587');