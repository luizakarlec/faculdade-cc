-- Escola
CREATE TABLE disciplina (
id int AUTO_INCREMENT PRIMARY KEY,
nome varchar(50) NOT NULL,
carga_horaria int NOT NULL,
id_professor INT,
FOREIGN KEY (id_professor) REFERENCES professores(id)
);

-- Produto
create database produto;
use produto;

create table categorias(
id int auto_increment primary key,
nome varchar(50)
);

create table produtos(
id int auto_increment primary key,
nome varchar(50),
preço decimal(10,2),
quantidade int,
id_categoria int,
foreign key (id_categoria) references categorias(id)
);
