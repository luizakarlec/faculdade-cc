using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Encapsulamento
{
    internal class Produto
    {
        private int _codigo;
        private string _nome;
        private string _valor;

        public int Quantidade { get; set; }
        public int Codigo
        {
            get
            {
                return _codigo;
            }
            set
            {
                _codigo = value;
            } 
        }
        public string Nome 
        {
            get
            {
                return _nome;
            } //get => _nome;
            set
            {
                _nome = value;
            } //set => _nome = value; 
        }

        public String Valor
        {
            get
            {
                return _valor;
            }
            set
            {
                _valor = value;
            }
        }

        public void Exibir()
        {
            Console.WriteLine("Código: "+_codigo);
            Console.WriteLine("Nome: "+Nome);
            Console.WriteLine("Valor: "+_valor);
            Console.WriteLine("Quantidade: "+ Quantidade);
        }
    }
}
