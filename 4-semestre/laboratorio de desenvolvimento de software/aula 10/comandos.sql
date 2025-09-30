CREATE TABLE disciplina (
id int AUTO_INCREMENT PRIMARY KEY,
nome varchar(50) NOT NULL,
carga_horaria int NOT NULL,
id_professor INT,
FOREIGN KEY (id_professor) REFERENCES professores(id)
);
