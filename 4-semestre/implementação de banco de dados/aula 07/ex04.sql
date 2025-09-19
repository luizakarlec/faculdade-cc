CREATE PROCEDURE uso_InserirFuncionario
	@Pnome VARCHAR(15),
    @Unome VARCHAR(15),
    @Cpf CHAR(11)
AS
BEGIN
    IF EXISTS(
       SELECT * 
       FROM FUNCIONARIO AS F
       WHERE F.Pnome = @Pnome
       AND F.Unome = @Unome
       )
    BEGIN 
        PRINT 'Já existe um funionário com este nome'
        RETURN;
    END

    INSERT INTO FUNCIONARIO VALUES 
    (@Pnome, NULL, @Unome, @Cpf, NULL, NULL, NULL, NULL, NULL , NULL, NULL, NULL);
END

EXEC uso_InserirFuncionario 'Luiza', 'Karlec', '123';
select * from FUNCIONARIO;