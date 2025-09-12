-- Crie uma função fn_NomeSupervisor que receba o Cpf de um funcionário 
-- e retorne o nome completo do seu supervisor 
-- (usando a coluna Cpf_supervisor da tabela FUNCIONARIO). 

CREATE FUNCTION fn_NomeSupervisor(@CPF VARCHAR(11))
RETURNS TABLE
AS
RETURN
(
	SELECT F.Pnome, F.Minicial, F.Unome
	FROM FUNCIONARIO AS F
	INNER JOIN FUNCIONARIO AS D
	ON F.Cpf = D.Cpf_supervisor
	WHERE @CPF = D.Cpf	
);
GO

SELECT *
FROM dbo.fn_NomeSupervisor('12345678966');