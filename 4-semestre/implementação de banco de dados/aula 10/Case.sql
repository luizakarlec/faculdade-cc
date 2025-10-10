-- Classificar funcionarios por faixa salarial
SELECT 
	Pnome,
	Unome,
	Salario,
	CASE
		WHEN Salario < 20000 THEN 'Baixo'
		WHEN Salario BETWEEN 20000 AND 40000 THEN 'Medio'
		WHEN Salario > 40000 THEN 'Alto'
		ELSE 'Sem Registro'
	END AS 'Categoria'
FROM FUNCIONARIO;

-- Utilizando CASE verificar se o funcionário foi contratado nos últimos 6 meses
SELECT
	Pnome,
	Unome,
	Data_Admissao, 
	CAST(GETDATE() AS DATE) AS 'Hoje',
	CASE
		WHEN DATEDIFF(DAY, Data_Admissao, GETDATE()) <= 180 THEN 'Recém contratado'		
		ELSE 'Antigo'
	END AS 'Status'
FROM FUNCIONARIO;