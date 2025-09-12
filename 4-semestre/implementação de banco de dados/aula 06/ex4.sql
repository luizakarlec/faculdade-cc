-- Crie uma função fn_GanhaMaisQueSupervisor que receba o Cpf de um funcionário 
-- e retorne 1 (verdadeiro) se o salário dele for maior que o salário de seu supervisor, 
-- ou 0 (falso) caso contrário. 

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