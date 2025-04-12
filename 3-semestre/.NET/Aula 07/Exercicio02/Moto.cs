using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Exercicio02
{
    internal class Moto : Veiculo
    {
        public double cilindrada;

        public override void Dirigir()
        {
            Console.WriteLine("Dirigindo a "+ marca +" "+ modelo +" com "+ cilindrada +" cilindradas");
        }
    }
}
