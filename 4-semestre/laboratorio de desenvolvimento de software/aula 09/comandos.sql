create database BDAula01;
show databases;

use bdaula01;

CREATE TABLE pessoa(
id int AUTO_INCREMENT PRIMARY KEY,
nome varchar(50) NOT NULL,
sexo varchar(1) NOT NULL,
idioma varchar (10) NOT NULL
);

desc pessoa;

INSERT INTO pessoa(nome, sexo, idioma)
VALUES ("Luiza", "F", "Português");

INSERT INTO pessoa (nome, sexo, idioma)
    ->     VALUES
    ->     ("Gerald", "M", "Inglês"),
    ->     ("William", "M", "Inglês"),
    ->     ("Umberto", "M", "Espanhol"),
    ->     ("Jostein", "M", "Alemão"),
    ->     ("Stephen", "M", "Holandês");


mysql> CREATE TABLE veiculo(
    -> id int AUTO_INCREMENT PRIMARY KEY,
    -> modelo varchar(30),
    -> placa varchar(7),
    -> id_pessoa int NOT NULL,
    -> foreign key(id_pessoa) references pessoa(id)
    -> );
