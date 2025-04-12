using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Text.RegularExpressions;
using System.Threading.Tasks;

namespace Exercicio02
{
    internal class Carro : Veiculo
    {
        public String cor;

        public override void Dirigir()
        {
            Console.WriteLine("Dirigindo o " + marca +" "+ modelo +" "+ cor);
        }
    }
}
