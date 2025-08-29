USE EMPRESA;

-- EXISTS
SELECT D.Dnome, D.Dnumero
FROM DEPARTAMENTO AS D
WHERE EXISTS(
				SELECT 1
				FROM PROJETO AS P
				WHERE P.Dnum = D.Dnumero);

-- ANY
SELECT F.Pnome, F.Unome, F.Salario
FROM FUNCIONARIO AS F
WHERE F.Salario > ANY (
						SELECT F.Salario
						FROM FUNCIONARIO AS F
						INNER JOIN DEPARTAMENTO AS D
						ON F.Dnr = D.Dnumero
						WHERE D.Dnome = 'Administração'
						)
ORDER BY F.Salario;

-- ALL
SELECT *
FROM PROJETO AS P
INNER JOIN TRABALHA_EM AS TE
ON P.Projnumero = TE.Pnr
WHERE TE.Horas > ALL (
						SELECT TE.Horas
						FROM TRABALHA_EM AS TE
						INNER JOIN PROJETO AS P
						ON TE.Pnr = P.Projnumero
						WHERE P.Projlocal = 'Mauá'
						);

SELECT P.Projnome, SUM(TE.Horas)
FROM PROJETO AS P
INNER JOIN TRABALHA_EM AS TE
ON TE.Pnr = P.Projnumero
GROUP BY P.Projnome
HAVING SUM(TE.Horas) > ALL (
						SELECT SUM(TE.Horas)
						FROM PROJETO AS P
						INNER JOIN TRABALHA_EM AS TE
						ON TE.Pnr = P.Projnumero
						WHERE P.Projlocal = 'Itu' OR P.Projlocal = 'Santo André'
						GROUP BY P.Projlocal
						);
