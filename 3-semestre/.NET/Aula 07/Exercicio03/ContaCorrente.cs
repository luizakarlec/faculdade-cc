using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Exercicio03
{
    internal class ContaCorrente : ContaBancaria
    {
        public double deposito;
        public double saque;
        public override void Depositar()
        {
            saldo = saldo + deposito;
            Console.WriteLine("Depositado!");
        }
        public override void Sacar()
        {
            if (saque <= saldo)
            {
                saldo = saldo - saque;
                Console.WriteLine("Sacado!");
            } 
            else
            {
                Console.WriteLine("Saldo insuficiente.");
            }
        }

    }
}
