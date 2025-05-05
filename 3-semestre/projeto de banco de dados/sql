-- comando para criar base de dados ou esquema de dados
create database livraria;
show databases;
use livraria;

-- criar tabelas: nome, atributos/tipos, restrições (chave primária e/ou chave estrangeira), indices
-- create table nomeTabela (
-- );

drop table Autor;
drop table Editor;
drop table Categoria;
drop table Livro;
drop table Cliente;
drop table Venda;
drop table Transportadora;
drop table Entrega;

create table Autor (
	idAutor INT PRIMARY KEY auto_increment,
	nome VARCHAR(150) NOT NULL,
    nacionalidade VARCHAR(40) NOT NULL,
    biografia VARCHAR(500)
);

create table Editor (
	idEditor INT PRIMARY KEY auto_increment,
    nome VARCHAR(100) NOT NULL,
    cnpj VARCHAR(18) NOT NULL, 
    cidade VARCHAR(45) NOT NULL,
    pais VARCHAR(45) NOT NULL
);

create table Categoria (
	idCategoria INT PRIMARY KEY auto_increment,
    descricao VARCHAR(500) NOT NULL,
    titulo VARCHAR(100) NOT NULL
);

create table Livro (
	idLivro INT PRIMARY KEY auto_increment,
    titulo VARCHAR(150) NOT NULL,
    descritivo VARCHAR(100) NOT NULL,
    ano DATE NOT NULL,
    preco DECIMAL NOT NULL,
    idEditor INT NOT NULL,
    FOREIGN KEY (idEditor) REFERENCES Editor(idEditor) on delete restrict
);

create table Cliente (
	idCliente INT auto_increment,
    tipo VARCHAR(20) NOT NULL,
    cpf VARCHAR(14),
    cnpj VARCHAR(18),
    cep VARCHAR(9) NOT NULL,
    PRIMARY KEY (idCliente)
);

INSERT INTO Cliente (idCliente, tipo, cpf, cnpj, cep)
VALUES (1, "Físico", "123", null, "97010002");

INSERT INTO Cliente (idCliente, tipo, cpf, cnpj, cep)
VALUES (2, "Físico", "8888", null, "987654");

UPDATE Cliente
SET cpf = "99999"
WHERE idCliente = 2;

select * from Cliente;

create table Venda (
	numeroNotaFiscal VARCHAR(400) PRIMARY KEY,
    data DATETIME NOT NULL,
    valorTotal FLOAT NOT NULL,
    idCliente INT NOT NULL,
    idLivro INT NOT NULL,
    FOREIGN KEY (idCliente) REFERENCES Cliente(idCliente) on delete restrict,
    FOREIGN KEY (idLivro) REFERENCES Livro(idLivro) on delete restrict
);

CREATE TABLE Transportadora (
    idTransportadora INT PRIMARY KEY AUTO_INCREMENT,
    nome VARCHAR(45) NOT NULL,
    cnpj VARCHAR(18) NOT NULL,
    cep VARCHAR(8) NOT NULL
);

create table Entrega (
	numeroProtocolo INT PRIMARY KEY,
    numeroNotaFiscal VARCHAR(400) NOT NULL,
    idTransportadora INT NOT NULL,
    FOREIGN KEY (numeroNotaFiscal) REFERENCES Venda(numeroNotaFiscal) on delete restrict,
    FOREIGN KEY (idTransportadora) REFERENCES Transportadora(idTransportadora) on delete restrict
);

create table LivroAutor(
	idLivro INT NOT NULL,
    idAutor INT NOT NULL,
    idLivroAutor INT PRIMARY KEY AUTO_INCREMENT,
    FOREIGN KEY (idLivro) REFERENCES Livro(idLivro) on delete restrict,
    FOREIGN KEY (idAutor) REFERENCES Autor(idAutor) on delete restrict
);

create table LivroCategoria(
	idLivro INT NOT NULL,
    idCategoria INT NOT NULL,
    idLivroCategoria INT PRIMARY KEY AUTO_INCREMENT,
    FOREIGN KEY (idLivro) REFERENCES Livro(idLivro) on delete restrict,
    FOREIGN KEY (idCategoria) REFERENCES Categoria(idCategoria) on delete restrict
);

show tables;

select * from Autor;
select * from Entrega;

alter table Autor add nomeFantasia VARCHAR(45); 
alter table Entrega add meioEntrega VARCHAR(45) NOT NULL;
alter table Autor modify column biografia VARCHAR(1000) NOT NULL;

-- alterar algumas tabelas
-- na tabela autor adiciona um campo chamado nomeFantasia para autores que não utilizam nome verdadeiro
-- na tabela entrega colocar um atributo chamado meioEntrega (terrestre, aéreo ou aquático)
-- na tabela autor modificar o atributo biografia que suporta 1000 caracteres
