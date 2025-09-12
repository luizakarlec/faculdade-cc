-- Crie uma fun��o fn_GanhaMaisQueSupervisor que receba o Cpf de um funcion�rio 
-- e retorne 1 (verdadeiro) se o sal�rio dele for maior que o sal�rio de seu supervisor, 
-- ou 0 (falso) caso contr�rio. 

CREATE FUNCTION fn_GanhaMaisQueSupervisor(@CPF VARCHAR(11))
RETURNS INT
AS
BEGIN
	DECLARE @s_funcionario DECIMAL(10,2);
	DECLARE @s_supervisor DECIMAL(10,2);
	DECLARE @resultado INT;

	SELECT @s_funcionario = F.Salario, @s_supervisor = S.Salario 
	FROM FUNCIONARIO AS F
	INNER JOIN FUNCIONARIO AS S
	ON F.Cpf_supervisor = S.Cpf
	WHERE F.Cpf = @CPF
	 
	IF @s_funcionario > @s_supervisor
		SET @resultado = 1;
	ELSE 
		SET @resultado = 0;

	RETURN @resultado;
END;
GO

SELECT dbo.fn_GanhaMaisQueSupervisor('12345678966');