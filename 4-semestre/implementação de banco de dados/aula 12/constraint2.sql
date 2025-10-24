USE RESTRICOES;

CREATE TABLE Produto
(
	cod INT PRIMARY KEY,
	nome VARCHAR(50),
	categoria VARCHAR(50)
);

CREATE TABLE Inventario
(
	id INT PRIMARY KEY IDENTITY,
	codProduto INT,
	quantidade INT,
	minLevel INT,
	maxLevel INT,
	CONSTRAINT fk_inv_produto
		FOREIGN KEY (codProduto)
		REFERENCES Produto (cod)
		ON DELETE CASCADE
		ON UPDATE CASCADE
);


CREATE TABLE Venda
(
	id INT PRIMARY KEY IDENTITY,
	codProduto INT,
	quantidade INT
);
-- Outra forma de criar restrições
ALTER TABLE Venda
ADD CONSTRAINT fk_venda_produto
FOREIGN KEY (codProduto)
		REFERENCES Produto (cod)
		ON DELETE SET NULL 
		ON UPDATE CASCADE;


-- Cadastrando produtos
INSERT INTO Produto 
VALUES (1, 'Sabão', 'Higiene'),
	   (2, 'Coca', 'Bebidas'),
	   (3, 'Spaten 473ml', 'Bebidas'),
	   (4, 'Belinha', 'Bebidas'),
	   (5, 'Catuaba', 'Bebidas'),
	   (6, 'Energético', 'Bebidas');

INSERT INTO Inventario (codProduto, quantidade, minLevel, maxLevel)
VALUES (1, 8, 2, 20),
	   (2, 100, 80, 200),
	   (3, 1000, 800, 5000),
	   (4, 5, 1, 10),
	   (5, 15, 10, 100),
	   (6, 200, 100, 500);

-- Simulando algumas vendas
INSERT INTO Venda
VALUES (87655, 5),
	   (3, 10),
	   (3, 20),
	   (3, 5),
	   (5, 1),
	   (4, 2),
	   (6, 4);

SELECT * FROM Produto AS P
INNER JOIN Inventario AS I ON I.codProduto = P.cod;

DELETE FROM Produto 
WHERE cod = 1;

UPDATE Produto
SET cod = 87655
WHERE cod = 2;

SELECT * FROM Produto AS P
RIGHT JOIN Venda AS V ON V.codProduto = P.cod;

UPDATE Produto
SET cod = 2
WHERE cod = 87655;

DELETE FROM Produto 
WHERE cod = 4;

ALTER TABLE Venda DROP CONSTRAINT fk_venda_produto;