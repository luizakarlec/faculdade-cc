-- Transação
BEGIN TRANSACTION;
DECLARE @e INT = 0;

INSERT INTO FUNCIONARIO (Pnome, Unome, Cpf, Sexo)
VALUES ('Herryson', 'Rodrigues', '123456784', 'M');
SET @e = @@ERROR + @e
PRINT @e;

SELECT * FROM FUNCIONARIO;

INSERT INTO DEPARTAMENTO (Dnome, Dnumero) 
VALUES('Matriz', 1);
SET @e = @@ERROR + @e
PRINT @e;

SELECT * FROM DEPARTAMENTO

IF @e <> 0
	BEGIN
		ROLLBACK TRANSACTION;
		PRINT 'Erro detectado, Transação revertida';
	END
ELSE
	BEGIN
		COMMIT TRANSACTION;
		PRINT 'Transação concluida com sucesso';
	END
