using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Exercicio03
{
    abstract class ContaBancaria
    {
        public double saldo;

        public abstract void Depositar();
        public abstract void Sacar();
    }
}
