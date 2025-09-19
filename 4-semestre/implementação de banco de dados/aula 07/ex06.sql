CREATE PROCEDURE usp_dobro(@valor AS INT OUTPUT)
AS
SELECT @valor * 2
RETURN

EXEC usp_dobro 3;

DECLARE @custo AS INT = 15;
EXEC usp_dobro @custo OUTPUT;
PRINT @custo;