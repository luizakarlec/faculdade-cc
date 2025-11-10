-- Avaliação 2 - Implementação de Banco de Dados
-- Luiza Karlec
USE PapelariaDB;

-- Questão 1
/*
Transações são as operações no banco de dados que ao final da operação devem sofrer um commit ou serem revertidas, dependendo que o resultado da operação foi esperado ou não.
Toda transação em um banco de dados deve seguir as propriedades ACID, Atomicidade que é a indivisibilidade, Consistência para que os dados do banco estejam corretos seguindo suas restrições, 
Isolamento para que cada operação ocorra isoladamente sem afetar as demais e Durabilidade para que os dados permanecam no mesmo estado em que foram colocados.
*/

-- Questão 2
BEGIN TRANSACTION;
DECLARE @e INT = 0;

UPDATE Produtos
SET PrecoVenda = 5
WHERE Descricao = 'Caneta BIC cristal'
SET @e = @@ROWCOUNT+ @e

IF @e <> 1
	BEGIN
		ROLLBACK TRAN;
		PRINT 'Mais de um registro afetado. Transação revertida';
	END
ELSE
	COMMIT TRAN;


-- Questão 3
/*
Gatilhos são operações que acontecem assim que alguma outra operação (insert, update, delete) em certa tabela o ativa.
Existem os gatilhos AFTER que ocorrem depois que a operação que o ativou acontece e os gatilhos INSTEAD OF que ocorrem no lugar dessa operação.
*/

-- Questão 4
GO;
CREATE TRIGGER trg_estoque
ON ItensVenda
AFTER INSERT
AS
BEGIN 
	-- quantidades 
	DECLARE @qtdVendido INT;
	DECLARE @qtdEstoque INT;
	SELECT @qtdVendido = Quantidade FROM inserted;
	SELECT @qtdEstoque = QuantidadeEstoque FROM Produtos;

	-- id da venda
	DECLARE @idVenda INT;
	SELECT @idVenda = VendaID FROM inserted;

	-- id do produto da venda
	DECLARE @idProduto VARCHAR(50);
	SELECT @idProduto = CodigoBarras FROM inserted;

	-- preco unitário do produto da venda
	DECLARE @PrecoUni DECIMAL(10, 2);
	SELECT @PrecoUni = PrecoUnitario FROM inserted;

	IF @qtdVendido > @qtdEstoque
		BEGIN
			PRINT 'Erro: Estoque insuficiente para um ou mais produtos'
			ROLLBACK;
		END
	ELSE
		BEGIN
			UPDATE Produtos
			SET QuantidadeEstoque = @qtdEstoque - @qtdVendido
			WHERE CodigoBarras = @idProduto

			UPDATE Vendas
			SET ValorTotal = @qtdVendido * @PrecoUni
			WHERE VendaID = @idVenda
		END
END

-- Questão 5
GO;
CREATE TABLE log_Produtos(
	LogID INT PRIMARY KEY IDENTITY(1,1),
	ProdutoID INT,
	TipoOperacao CHAR(1) NOT NULL,
	DataOperacao DATETIME DEFAULT GETDATE()
);

GO;
CREATE TRIGGER trg_ProdutosUpdate
ON Produtos
AFTER UPDATE
AS
BEGIN
	DECLARE @ID VARCHAR(50);
	SELECT @ID = CodigoBarras FROM INSERTED

	INSERT INTO log_Produtos(ProdutoID, TipoOperacao, DataOperacao)
	VALUES (@ID ,'U', GETDATE()); 
END

GO;
CREATE TRIGGER trg_ProdutosDelete
ON Produtos
AFTER DELETE
AS
BEGIN
	DECLARE @ID VARCHAR(50);
	SELECT @ID = CodigoBarras FROM deleted

	INSERT INTO log_Produtos(ProdutoID, TipoOperacao, DataOperacao)
	VALUES (@ID ,'D', GETDATE()); 
END

UPDATE Produtos SET Nome = 'Teste' WHERE CodigoBarras = '74829';
DELETE Produtos WHERE CodigoBarras = '74829';
SELECT * FROM log_Produtos;

-- Questão 6
GO;
CREATE TRIGGER trg_InativarCliente
ON Clientes
INSTEAD OF DELETE
AS
BEGIN
	DECLARE @ID INT;
	SELECT @ID = ClienteID FROM DELETED

	UPDATE Clientes
	SET Status = 'I'
	WHERE ClienteID = @ID
END

DELETE Clientes
WHERE ClienteID = '1';

SELECT * FROM Clientes;

-- Questão 7
/*
As restrições de integridade são restrições que garantem que o banco de dados funcione como ele deveria. 
Elas podem ser declarativas, que são criadas na declaração das tabelas como: idade INT CHECK (idade > 0),
ou podem ser proceduais, que são criadas depoes e envolvem os processos como INSERT, UPDATE, DELETE, como por exemplo:
FOREING KEY (codProduto) REFERENCES Produto(cod)
	ON DELETE SET NULL
	ON UPDATE CASCADE
*/

-- Questão 8
GO;
ALTER TABLE ItensVenda
DROP CONSTRAINT FK_ItensVenda_Produtos

ALTER TABLE ItensVenda
ADD CONSTRAINT FK_ItensVenda_Produtos
FOREIGN KEY (CodigoBarras) REFERENCES Produtos(CodigoBarras)
ON UPDATE CASCADE

UPDATE Produtos 
SET CodigoBarras = '999999'
WHERE Nome = 'Caneta Esferográfica Azul 1.0mm';

SELECT * FROM ItensVenda
-- A tabela ItensVenda também é alterada pois o UPDATE está em CASCADE

-- Questão 9
/*
Views são um modo mais simplificado de visualizar os dados como um select, ao ser selecionada uma view ela mostra todas as informações no select produzido na sua criação.
Algumas das principais vantagens de usa-las é a simplicidade de código, pois esconde o select que por vezes pode ser confuso e por segurança, quando certas informações de uma
tabela não devem ser expostas é possivel criar uma view para selecionar apenas os dados quedevem ser mostrados.
*/

-- Questão 10
GO;
CREATE VIEW vw_RelatiorioDetalhadoVendas
AS
SELECT 
		V.VendaID,
		V.DataVenda,
		CASE 
			WHEN C.Nome IS NULL THEN 'Venda de Balcão'
			ELSE C.Nome
		END AS NomeCliente,
		P.Nome AS NomeProduto,
		CA.Nome AS NomeCategoria,
		IV.Quantidade,
		IV.PrecoUnitario AS PrecoVendaUnitario,
		Quantidade * PrecoUnitario AS SubtotalItem
FROM Vendas AS V
LEFT JOIN Clientes AS C
ON V.ClienteID = C.ClienteID
INNER JOIN ItensVenda AS IV
ON V.VendaID = IV.VendaID
INNER JOIN Produtos AS P
ON IV.CodigoBarras = P.CodigoBarras
INNER JOIN Categorias AS CA
ON P.CategoriaID = CA.CategoriaID

GO;
SELECT * FROM vw_RelatiorioDetalhadoVendas;

-- Questão 11
GO;
USE [master]
GO
CREATE LOGIN [Estagiario] WITH PASSWORD=N'123', DEFAULT_DATABASE=[master], CHECK_EXPIRATION=OFF, CHECK_POLICY=OFF
GO
USE [PapelariaDB]
GO
CREATE USER [Estagiario] FOR LOGIN [Estagiario]
GO
USE [PapelariaDB]
GO
ALTER ROLE [db_datareader] ADD MEMBER [Estagiario]
GO

GRANT INSERT ON Produtos TO [Estagiario];

-- Questão 13
GO;
CREATE VIEW vw_ProductCatalog
AS
SELECT P.Nome AS NomeProduto, C.Nome AS NomeCategoria, P.PrecoVenda
FROM Produtos AS P
INNER JOIN Categorias AS C
ON P.CategoriaID = P.CategoriaID

GO;
SELECT * FROM vw_ProductCatalog