using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Exercicio02
{
    internal class Livro
    {
        public String nome;
        public String autor;
        public int anoPublicacao;
        public bool emprestado;

        public Livro(String nome, String autor, int anoPublicacao)
        {
            this.nome = nome;
            this.autor = autor;
            this.anoPublicacao = anoPublicacao;
        }

        public void emprestar()
        {
            if (emprestado)
            {
                Console.WriteLine("O livro não está disponível.");
            }
            else
            {
                emprestado = true;
                Console.WriteLine("Livro emprestado");
            }
        }

        public void devolver()
        {
            if (!emprestado)
            {
                Console.WriteLine("O livro está disponível.");
            }
            else
            {
                emprestado = false;
                Console.WriteLine("Livro devolvido");
            }
        }
    }
}
