-- 1.	Crie uma função fn_ProjetosPorFuncionario que receba o Cpf de um funcionário 
-- e retorne os nomes dos projetos nos quais ele trabalha (usando a tabela TRABALHA_EM). 

CREATE FUNCTION fn_ProjetosPorFuncionario(@CPF VARCHAR(11))
RETURNS TABLE
AS
RETURN
(
	SELECT P.Projnome
	FROM PROJETO AS P
	INNER JOIN TRABALHA_EM AS TE
	ON P.Projnumero = TE.Pnr
	WHERE TE.Fcpf = @CPF
);
GO

SELECT *
FROM dbo.fn_ProjetosPorFuncionario('12345678966');