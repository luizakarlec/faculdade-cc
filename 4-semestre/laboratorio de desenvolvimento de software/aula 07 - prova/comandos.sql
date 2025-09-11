create database prova;
use prova;

create table Veiculo (
    id int AUTO_INCREMENT PRIMARY KEY,
    marca varchar(50),
    modelo varchar(50),
    ano int,
    placa varchar(50),
    cor varchar(20)
    );
