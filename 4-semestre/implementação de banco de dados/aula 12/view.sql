USE BIBLIOTECA;
GO

CREATE VIEW vw_VisaoGeral AS 
SELECT L.isbn AS 'ISBN', 
	   L.titulo AS 'Título', 
	   L.ano AS 'Ano', 
	   E.nome AS 'Editora', 
	   CONCAT(A.nome, ' (' , A.nacionalidade, ')') AS  'Autor/Nascionalidade', 
	   C.tipo_categoria AS 'Categoria'
FROM livro AS L, editora AS E, categoria AS C, autor AS A, livroautor AS LA
WHERE L.fk_editora = E.id
	  AND L.fk_categoria = C.id
	  AND LA.fk_autor = A.id
	  AND LA.fk_livro = L.isbn;

SELECT * FROM vw_VisaoGeral ORDER BY Título;