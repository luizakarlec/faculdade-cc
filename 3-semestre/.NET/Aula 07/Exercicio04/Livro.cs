using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Exercicio04
{
    internal class Livro : Produto
    {
        public double desconto;

        public override void CalcularDesconto()
        {
            desconto = preco * 0.05;
            Console.WriteLine("Desconto do livro: "+desconto);
        }

    }
}
