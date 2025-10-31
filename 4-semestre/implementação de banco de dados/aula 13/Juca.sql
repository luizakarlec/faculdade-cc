SELECT L.isbn, L.titulo, L.ano, A.nome, E.nome
FROM Livro AS L
JOIN LivroAutor AS LA ON LA.fk_livro = L.isbn
JOIN Autor AS A ON LA.fk_autor = A.id
JOIN Editora AS E ON L.fk_editora = E.id;

INSERT INTO Autor (nacionalidade, nome)
VALUES ('Brasileiro', 'Juca da Silva');

SELECT * FROM Autor;
SELECT * FROM Livro;

-- Juca tentando ser autor de Harry Potter e A Pedra Filosofal
-- ISBN: 8532511015

UPDATE LivroAutor
SET fk_autor = 7
WHERE fk_livro = '8532511015';

SELECT * FROM Editora;