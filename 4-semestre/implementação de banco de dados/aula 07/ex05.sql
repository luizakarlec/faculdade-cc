CREATE PROCEDURE usp_InserirDepLoc
	@Dnome VARCHAR(15),
	@Dnumero INT,
	@Dlocal VARCHAR(15)
AS
BEGIN
	IF EXISTS (SELECT *
				FROM DEPARTAMENTO AS D
				WHERE D.Dnome = @Dnome)
	BEGIN
		INSERT INTO LOCALIZACAO_DEP VALUES (@Dnumero, @Dlocal);
		RETURN;
	END

	INSERT INTO DEPARTAMENTO VALUES (@Dnome, @Dnumero, NULL, NULL)
	INSERT INTO LOCALIZACAO_DEP VALUES (@Dnumero, @Dlocal);
END

EXEC usp_InserirDepLoc 'Novo', 10, 'São Borja';