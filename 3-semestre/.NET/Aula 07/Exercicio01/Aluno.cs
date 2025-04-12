using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.ConstrainedExecution;
using System.Runtime.Intrinsics.X86;
using System.Text;
using System.Threading.Tasks;
namespace Exercicio01
{
    internal class Aluno : Pessoa
    {
        public int matricula;

        public override void apresentar()
        {
            Console.WriteLine("\nDados do aluno: ");
            Console.WriteLine("Nome = "+nome);
            Console.WriteLine("Idade = "+idade);
            Console.WriteLine("Matricula = "+matricula);
        }
    }
}
