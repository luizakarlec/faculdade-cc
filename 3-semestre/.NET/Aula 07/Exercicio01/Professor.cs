using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Exercicio01
{
    internal class Professor : Pessoa
    {
        public String disciplina;

        public override void apresentar()
        {
            Console.WriteLine("\nDados do professor: ");
            Console.WriteLine("Nome = "+nome);
            Console.WriteLine("Idade = "+idade);
            Console.WriteLine("Disciplina = "+disciplina);
        }
    }
}
