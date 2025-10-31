CREATE DATABASE DB_Temporal;
GO;
USE DB_Temporal;
GO;

CREATE TABLE InventarioCarros(
	Id INT IDENTITY PRIMARY KEY,
	Ano INT,
	Marca VARCHAR(40),
	Modelo VARCHAR(40),
	Cor VARCHAR(10),
	Quilometragem INT,
	Disponivel BIT NOT NULL DEFAULT 1,
	SysStartTime datetime2 GENERATED ALWAYS AS ROW START NOT NULL,
	SysEndTime datetime2 GENERATED ALWAYS AS ROW END NOT NULL,
	PERIOD FOR SYSTEM_TIME (SysStartTime, SysEndTime)
)
WITH
(
	SYSTEM_VERSIONING = ON (HISTORY_TABLE = dbo.HistoricoInventarioCarros)
)

Insert into dbo.InventarioCarros (Ano,Marca,Modelo,Cor,Quilometragem,Disponivel) 
values (2004, 'Fiat', 'Uno', 'Branco', 150000, 1);
Insert into dbo.InventarioCarros (Ano,Marca,Modelo,Cor,Quilometragem,Disponivel) 
values (2015, 'Ford', 'Ka', 'Preto', 30000, 1);
Insert into dbo.InventarioCarros (Ano,Marca,Modelo,Cor,Quilometragem,Disponivel) 
values (2022, 'Hyundai', 'HB20', 'Prata', 0, 1);
Insert into dbo.InventarioCarros (Ano,Marca,Modelo,Cor,Quilometragem,Disponivel) 
values (2022, 'Hyundai', 'HB20', 'Branco', 0, 1);

SELECT * FROM InventarioCarros;
SELECT * FROM HistoricoInventarioCarros;

-- Carros alugados
UPDATE dbo.InventarioCarros SET Disponivel = 0 WHERE Id = 1;
UPDATE dbo.InventarioCarros SET Disponivel = 0 WHERE Id = 4;

-- Carros devolvidos
UPDATE dbo.InventarioCarros SET Disponivel = 1, Quilometragem = 160000 WHERE Id = 1;
UPDATE dbo.InventarioCarros SET Disponivel = 1, Quilometragem = 3000 WHERE Id = 4;

-- Uno deu PT s/2
UPDATE dbo.InventarioCarros SET Disponivel = 0 WHERE Id = 1;
DELETE FROM InventarioCarros WHERE Id = 1;

SELECT * FROM InventarioCarros
FOR SYSTEM_TIME AS OF '2025-10-31 14:15:30' ORDER BY Id;

SELECT * FROM InventarioCarros
FOR SYSTEM_TIME ALL
WHERE Id = 1;

-- Carros destruidos e excluídos
SELECT DISTINCT H.Modelo
FROM InventarioCarros AS I
RIGHT JOIN HistoricoInventarioCarros AS H
ON I.Id = H.Id
WHERE I.Modelo IS NULL;