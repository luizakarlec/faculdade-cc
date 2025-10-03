-- 7
SELECT A.Nome, HE.Nota, D.Nome_disciplina
FROM ALUNO AS A
INNER JOIN HISTORICO_ESCOLAR AS HE
ON A.Numero_aluno = HE.Numero_aluno
INNER JOIN TURMA AS T
ON T.Identificacao_turma = HE.Identificacao_turma
INNER JOIN DISCIPLINA AS D
ON T.Numero_disciplina = D.Numero_disciplina
WHERE D.Nome_disciplina = 'Banco de dados'

-- 8 
SELECT D.Nome_disciplina, PR.Numero_pre_requisito
FROM DISCIPLINA AS D
INNER JOIN PRE_REQUISITO AS PR
ON D.Numero_disciplina = PR.Numero_disciplina

-- 9
SELECT A.Nome, D.Nome_disciplina, T.Semestre, T.Ano, HE.Nota
FROM DISCIPLINA AS D
INNER JOIN TURMA AS T
ON D.Numero_disciplina = T.Numero_disciplina
INNER JOIN HISTORICO_ESCOLAR AS HE
ON T.Identificacao_turma = HE.Identificacao_turma
INNER JOIN ALUNO AS A
ON HE.Numero_aluno = A.Numero_aluno
WHERE A.Nome = 'Silva'

-- 10
CREATE FUNCTION fn_AprovacaoAluno(@aluno NVARCHAR(50), @disciplina NVARCHAR(100))
RETURNS VARCHAR(15)
AS
BEGIN
	DECLARE @nota CHAR(1)

	SELECT @nota = HE.Nota
	FROM HISTORICO_ESCOLAR AS HE
	INNER JOIN ALUNO AS A
	ON HE.Numero_aluno = A.Numero_aluno
	INNER JOIN TURMA AS T
	ON HE.Identificacao_turma = T.Identificacao_turma
	INNER JOIN DISCIPLINA AS D
	ON T.Numero_disciplina = D.Numero_disciplina
	WHERE A.Nome = @aluno AND D.Nome_disciplina = @disciplina

	IF @nota = 'A' OR @nota = 'B'
		RETURN 'APROVADO'
	ELSE IF @nota = 'C'
		RETURN 'EM RECUPERAÇÃO'
	ELSE IF @nota = 'F'
		RETURN 'REPROVADO'
	RETURN 'SEM RETORNO'
END

SELECT dbo.fn_AprovacaoAluno('Silva', 'Matemática discreta') AS Aprovação;
SELECT dbo.fn_AprovacaoAluno('Silva', 'Introdução à ciência da computação') AS Aprovação;

-- 11
CREATE FUNCTION fn_ConverteNota(@nota CHAR(1))
RETURNS INT
AS
BEGIN
	IF @nota = 'A'
		RETURN 10
	ELSE IF @nota = 'B'
		RETURN 9
	ELSE IF @nota = 'C'
		RETURN 8
	ELSE IF @nota = 'F'
		RETURN 0

	RETURN NULL
END

SELECT A.Nome, D.Nome_disciplina, dbo.fn_ConverteNota(HE.Nota) AS NOTA
FROM ALUNO AS A
INNER JOIN HISTORICO_ESCOLAR AS HE
ON A.Numero_aluno = HE.Numero_aluno
INNER JOIN TURMA AS T
ON HE.Identificacao_turma = T.Identificacao_turma
INNER JOIN DISCIPLINA AS D
ON T.Numero_disciplina = D.Numero_disciplina

-- 12
CREATE FUNCTION fn_LotacaoTurma(@Turma INT)
RETURNS VARCHAR(20)
AS
BEGIN
	DECLARE @qtd INT

	SELECT @qtd = COUNT(A.Numero_aluno)
	FROM ALUNO AS A
	INNER JOIN HISTORICO_ESCOLAR AS HE
	ON A.Numero_aluno = HE.Numero_aluno
	INNER JOIN TURMA AS T
	ON HE.Identificacao_turma = T.Identificacao_turma
	WHERE T.Identificacao_turma = @Turma
	
	IF @qtd >= 5
		RETURN 'Completamente Lotada'
	ELSE IF @qtd = 4 OR @qtd = 3
		RETURN 'Quase Cheia'
	ELSE IF @qtd < 3
		RETURN 'Com Vagas'

	RETURN NULL
END

SELECT T.Identificacao_turma COUNT(HE.Numero_aluno) AS NumeroAlunos, dbo.fn_LotacaoTurma(T.Identificacao_turma) AS Status --, D.Nome_disciplina
FROM TURMA AS T
INNER JOIN DISCIPLINA AS D
ON T.Numero_disciplina = D.Numero_disciplina
INNER JOIN HISTORICO_ESCOLAR AS HE
ON T.Identificacao_turma = HE.Identificacao_turma
GROUP BY T.Identificacao_turma

-- 13
ALTER PROCEDURE usp_CalcularIdadeAluno(@aluno INT)
AS
BEGIN
	DECLARE @ano INT
	DECLARE @mes INT
	DECLARE @dia INT

	SELECT @ano = YEAR(A.Data_Nascimento), @mes = MONTH(A.Data_Nascimento), @dia = DAY(A.Data_Nascimento)
	FROM ALUNO AS A
	WHERE A.Numero_aluno = @aluno

	IF @mes > MONTH(GETDATE())
		PRINT YEAR(GETDATE()) - @ano - 1
	ELSE IF @mes = MONTH(GETDATE()) AND @dia > DAY(GETDATE())
		PRINT YEAR(GETDATE()) - @ano - 1
	ELSE
		PRINT YEAR(GETDATE()) - @ano
END

EXEC usp_CalcularIdadeAluno @aluno = 7

-- 14
ALTER PROCEDURE usp_AtualizarNota(@nAluno INT, @turma INT, @novaNota CHAR(1))
AS
BEGIN
	UPDATE HISTORICO_ESCOLAR SET Nota = @novaNota WHERE Numero_aluno = @nAluno AND Identificacao_turma = @turma
	
	DECLARE @tmp CHAR(1)
	SELECT @tmp = HE.Nota
	FROM HISTORICO_ESCOLAR AS HE
	WHERE Numero_aluno = @nAluno AND Identificacao_turma = @turma

	IF @tmp = @novaNota
		PRINT 'SUCESSO'
	ELSE
		PRINT 'FALHA AO ATUALIZAR'
END

EXEC usp_AtualizarNota @nAluno = 2, @turma = 85, @novaNota = 'B'
SELECT * FROM HISTORICO_ESCOLAR
