USE MICROSOFT;
GO;

-- 1- Crie uma vis�o que liste todos os funcion�rios que n�o s�o chefes.
CREATE VIEW vw_NaoChefe AS 
SELECT F.Pnome, F.Unome, F.Cpf_supervisor
FROM FUNCIONARIO AS F
WHERE F.Cpf_supervisor IS NOT NULL

SELECT * FROM vw_NaoChefe;

-- 2- Fa�a uma vis�o que liste a quantidade de vendas que cada produto (o quanto cada produto foi vendido).
CREATE VIEW vw_QtdVendaProduto AS
SELECT P.ProductID, P.ProductName, SUM(OD.Quantity) AS Quantidade
FROM [Order Details] AS OD
INNER JOIN PRODUCTS AS P
ON OD.ProductID = P.ProductID
GROUP BY P.ProductID, P.ProductName;

SELECT * FROM vw_QtdVendaProduto;

-- 3- Fa�a uma vis�o que liste os territ�rios e quantos vendedores est�o vinculados a ele.
CREATE VIEW vw_VendedoresTerritorios AS
SELECT T.TerritoryDescription, SUM(ET.EmployeeID) AS Vendedores
FROM Territories AS T
INNER JOIN EmployeeTerritories AS ET
ON T.TerritoryID = ET.TerritoryID
GROUP BY T.TerritoryDescription

SELECT * FROM vw_VendedoresTerritorios;

-- 4- Fa�a uma vis�o que retorne o nome do cliente da venda de maior valor.
CREATE VIEW vw_ClienteMenorVenda AS
SELECT TOP 1 C.CompanyName, (OD.UnitPrice * OD.Quantity - OD.Discount) AS VALOR
FROM [Order Details] AS OD
INNER JOIN Orders AS O
ON OD.OrderID = O.OrderID
INNER JOIN Customers AS C
ON O.CustomerID = C.CustomerID
ORDER BY VALOR DESC

SELECT * FROM vw_ClienteMenorVenda;

-- 5- Fa�a uma vis�o que liste os vendedores ordenados pela lucratividade.
CREATE VIEW vw_Produtividade AS
SELECT E.FirstName, E.LastName, SUM(OD.UnitPrice * OD.Quantity - OD.Discount) AS Produtividade
FROM Employees AS E
INNER JOIN Orders AS O
ON E.EmployeeID = O.EmployeeID
INNER JOIN [Order Details] AS OD
ON O.OrderID = OD.OrderID
GROUP BY E.FirstName, E.LastName
ORDER BY Produtividade DESC

SELECT * FROM vw_Produtividade;

-- 6- Fa�a uma vis�o que retorne os produtos, seu fornecedor, sua categoria, seu pre�o 
-- e a informa��o de ele estar descontinuado ou n�o, para aqueles que possuem estoque
CREATE VIEW vw_ProdutosEstoque AS
SELECT P.ProductID, P.ProductName, S.CompanyName AS Fornecedor, C.CategoryName AS Categoria, P.UnitPrice AS Preco, P.Discontinued AS Descontinuado
FROM Products AS P
INNER JOIN Suppliers S ON P.SupplierID = S.SupplierID
INNER JOIN Categories C ON P.CategoryID = C.CategoryID
WHERE P.UnitsInStock > 0;

SELECT * FROM vw_ProdutosEstoque;