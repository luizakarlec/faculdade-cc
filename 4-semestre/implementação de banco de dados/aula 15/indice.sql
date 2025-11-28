CREATE DATABASE AULA;
USE AULA;

CREATE TABLE Pessoa(
	id INT IDENTITY(1,1) PRIMARY KEY,
	Nome VARCHAR(150),
	Cidade VARCHAR(150),
	Estado VARCHAR(2),
	CPF VARCHAR(14)
);

DECLARE @json NVARCHAR(MAX);

SELECT @json = BulkColumn
FROM OPENROWSET(
	BULK 'C:\Users\laboratorio\Downloads\generated.json', -- local do arquivo (4devs ou json generator)
	SINGLE_NCLOB -- SINGLE_CLOB -> SINGLE_NCLOB -- mudar formato do arquivo para UTF-16
) AS J;

SELECT @json AS JsonCompleto;

INSERT INTO Pessoa (Nome, Cidade, Estado, CPF)
SELECT
	Nome,
	Cidade,
	Estado,
	CPF
FROM OPENJSON(@json)
WITH(
	Nome VARCHAR(150)	'$.nome',
	Cidade VARCHAR(150)	'$.cidade',
	Estado VARCHAR(2)	'$.estado',
	CPF VARCHAR(14)		'$.cpf'
);

CREATE INDEX IX_Pessoa_Nome_Estado
ON Pessoa (Nome, Estado);

SELECT * FROM Pessoa ORDER BY Pessoa.Nome, Pessoa.Estado;

TRUNCATE TABLE PESSOA;
