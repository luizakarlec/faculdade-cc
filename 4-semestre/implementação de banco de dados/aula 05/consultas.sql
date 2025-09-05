-- IF/ELSE

DECLARE @QtdFuncionarios INT = 0;

SELECT @QtdFuncionarios = COUNT(F.Cpf)
FROM FUNCIONARIO AS F
INNER JOIN DEPARTAMENTO AS D
ON F.Dnr = D.Dnumero
WHERE D.Dnome = 'Pesquisa';

PRINT @QtdFuncionarios;

IF (@QtdFuncionarios <= 1)
	PRINT 'Pequeno'
ELSE IF (@QtdFuncionarios >= 2 AND @QtdFuncionarios <= 3)
	PRINT 'Medio'
ELSE
	PRINT 'Grande';

-- WHILE

-- EXEMPLO 1
DECLARE @valor INT
SET @valor = 0

WHILE @valor < 10
	BEGIN
		PRINT 'Número: ' + CAST(@valor AS VARCHAR(2))
		SET @valor = @valor + 1
	END

-- EXEMPLO 2
DECLARE @salarioJoice FLOAT;

SELECT  @salarioJoice = F.Salario
FROM FUNCIONARIO AS F
WHERE F.Pnome = 'Joice' AND F.Unome = 'Leite';

WHILE (@salarioJoice < 30000)
	BEGIN
		SET @salarioJoice = @salarioJoice * 1.05;
		PRINT @salarioJoice
	END