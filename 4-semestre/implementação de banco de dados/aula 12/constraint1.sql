CREATE DATABASE RESTRICOES;
GO;

USE RESTRICOES;
GO;

CREATE TABLE petShop
(
	id INT PRIMARY KEY IDENTITY,
	nomeDono VARCHAR(50) UNIQUE,
	nomePet VARCHAR(50) NOT NULL,
	idadePet INT CHECK (idadePet > 0),
	sexoPet CHAR CHECK (sexoPet IN('M', 'F', 'N'))
);

--Testando as Restrições
INSERT INTO petShop VALUES('Luiza', 'Koda', 1, 'M');
INSERT INTO petShop VALUES('Juca', 'Fumaça', -1, 'M');
INSERT INTO petShop VALUES('Juca', 'Fumaça', 4, 'X');
INSERT INTO petShop VALUES('Juca', 'Fumaça', 4, 'Femea');

