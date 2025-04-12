using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Exercicio04
{
    internal class Eletronico : Produto
    {
        public double desconto;
        public override void CalcularDesconto()
        {
            desconto = preco * 0.125;
            Console.WriteLine("Desconto do eletrocnico: "+desconto);
        }
    }
}
