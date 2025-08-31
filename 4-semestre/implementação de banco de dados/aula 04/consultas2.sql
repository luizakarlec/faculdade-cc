--Variáveis

-- EXEMPLO 1
DECLARE @idade INT,
		@nome VARCHAR(40),
		@data DATE,
		@grana MONEY;

SET @nome = 'Luiza Karlec';
SET @data = '2004-10-27'; -- AAAA-MM-DD
SET @grana = 1000000000;
SET @idade = YEAR(GETDATE()) - YEAR(@data);

SELECT @nome AS 'Nome', @data AS 'Data_Nasc', @idade AS 'Idade', @grana AS 'Dinheiro'

PRINT 'Meu nome é: ' + @nome + ', nascida em: ' + CAST(@data AS VARCHAR(11));

-- EXEMPLO 2
DECLARE @dpt_nome VARCHAR(100);

SELECT @dpt_nome = D.Dnome
FROM DEPARTAMENTO AS D
WHERE D.Dnumero = 4;

PRINT @dpt_nome;

-- EXEMPLO 3
DECLARE @s_jennifer DECIMAL(10,2);

SELECT @s_jennifer = F.Salario
FROM FUNCIONARIO AS F
WHERE F.Pnome = 'Jennifer';

DECLARE @novo_s_jennifer DECIMAL(10,2);

SET @novo_s_jennifer = @s_jennifer * 1.1;

PRINT @s_jennifer;
PRINT @novo_s_jennifer;

-- EXEMPLO 4
DECLARE @data2 DATE;
DECLARE @idade_jen INT;
DECLARE @nome_funcionario VARCHAR(30);

SET @nome_funcionario = 'Jennifer';

SELECT @idade_jen = YEAR(GETDATE()) - YEAR(F.Datanasc)
FROM FUNCIONARIO AS F
WHERE F.Pnome = @nome_funcionario;

PRINT 'Nome: ' + @nome_funcionario + ', Idade: ' + CAST(@idade_jen AS VARCHAR(2));

-- Conversão de Dados

-- EXEMPLO 1 - CAST
PRINT 'O funcionario(a) ' + @nome_funcionario
	+ ' recebe o salario '+ CAST(@s_jennifer AS VARCHAR(20));

-- EXEMPLO 2 - CONVERT
PRINT 'O funcionario(a) ' + @nome_funcionario
	+ ' recebe o salario '+ CONVERT(VARCHAR(10), @s_jennifer);

-- EXEMPLO 3 - CONVERT
SELECT F.Pnome, CONVERT(VARCHAR(10), F.Datanasc, 103)
FROM FUNCIONARIO AS F;

-- Condicional IF/ELSE

-- EXEMPLO 1
DECLARE @media_salarial DECIMAL(10,2)

SELECT @media_salarial = AVG(F.Salario)
FROM FUNCIONARIO AS F;

IF @s_jennifer < @media_salarial
	BEGIN
		PRINT @nome_funcionario + ' esta abaixo da média salarial'
	END
ELSE 
	BEGIN
		PRINT @nome_funcionario + ' esta acima da média salarial';
	END

-- EXEMPLO 2
DECLARE @idade_joi INT;

SELECT @idade_joi = YEAR(GETDATE()) - YEAR(F.Datanasc)
FROM FUNCIONARIO AS F
WHERE F.Pnome = 'Joice';

IF @idade_joi BETWEEN 55 AND 60
	PRINT 'Proximo a aposentadoria'
ELSE IF @idade_joi > 80
	PRINT 'Aposentadoria compulsória'
ELSE
	PRINT 'Não está proximo a aposentadoria'

PRINT @idade_joi;
