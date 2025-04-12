using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Exercicio04
{
    abstract class Produto
    {
        public String nome;
        public double preco;

        public abstract void CalcularDesconto();
    }
}
