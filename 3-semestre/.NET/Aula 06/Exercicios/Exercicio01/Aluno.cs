using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Exercicio01
{
    internal class Aluno
    {
        public String nome;
        public String cpf;
        public String curso;
        public String matricula;
        public Aluno(String nome, string cpf, String curso, String matricula)
        {
            this.nome = nome;
            this.cpf = cpf;
            this.curso = curso;
            this.matricula = matricula;
        }

        public void apresentaDados()
        {
            Console.WriteLine("\nDADOS DO ALUNO:");
            Console.WriteLine("Nome = "+ nome);
            Console.WriteLine("CPF = "+ cpf);
            Console.WriteLine("Curso = "+ curso);
            Console.WriteLine("Matricula = "+ matricula);
        }
    }

}
