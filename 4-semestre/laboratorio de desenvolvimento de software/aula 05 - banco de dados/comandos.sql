-- MYSQL 8.0 Command Line Client

create database BDAula01;
show databases;
use bdaula01;

CREATE TABLE pessoa(
  id int AUTO_INCREMENT PRIMARY KEY,
  nome varchar(50) NOT NULL,
  sexo varchar(1) NOT NULL,
  idioma varchar (10) NOT NULL
  );

show tables;
desc pessoa;

INSERT INTO pessoa(nome, sexo, idioma)
    VALUES ("Luiza", "F", "Português");

select * from pessoa;

INSERT INTO pessoa (nome, sexo, idioma)
    VALUES
    ("Gerald", "M", "Inglês"),
    ("William", "M", "Inglês"),
    ("Umberto", "M", "Espanhol"),
    ("Jostein", "M", "Alemão"),
    ("Stephen", "M", "Holandês");

CREATE DATABASE escola;
use escola;

CREATE TABLE alunos(
    id int AUTO_INCREMENT PRIMARY KEY,
    nome varchar(50) NOT NULL,
    idade int NOT NULL,
    curso varchar(50) NOT NULL
    );

INSERT INTO alunos (nome, idade, curso)
    VALUES
    ("Luiza", 20, "Ciência da Computação"),
    ("Vanessa", 22, "Engenharia Civil"),
    ("Frazzon", 19, "Educação Física"),
    ("Eric", 22, "Dança");

CREATE TABLE professores(
    id int AUTO_INCREMENT PRIMARY KEY,
    nome varchar(50) NOT NULL,
    idade int NOT NULL,
    disciplina varchar(50) NOT NULL
    );

INSERT INTO professores (nome, idade, disciplina)
    VALUES
    ("Mario", 35, "Matemática"),
    ("Augusto", 40, "História"),
    ("Ricardo", 38, "Sistemas de Informação");

 CREATE TABLE matriculas (
    id int AUTO_INCREMENT PRIMARY KEY,
    id_aluno INT,
    id_professor INT,
    data_matricula DATE,
    FOREIGN KEY (id_aluno) REFERENCES alunos(id),
    FOREIGN KEY (id_professor) REFERENCES professores(id)
    );

INSERT INTO matriculas (id_aluno, id_professor, data_matricula)
    VALUES
    (1, 1, "2023-01-15"),
    (2, 2, "2023-02-20"),
    (3, 3, "2023-03-10"),
    (4, 1, "2023-04-05");

SELECT nome, curso FROM alunos;
SELECT nome, disciplina FROM professores;
