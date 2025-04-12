using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Exercicio03
{
    internal class Personagem
    {
        public String nome;
        public int posicao;
        public int itensColetados;

        public Personagem(string nome, int posicao, int itensColetados)
        {
            this.nome = nome;
            this.posicao = posicao;
            this.itensColetados = itensColetados;
        }

        public void atacar(double dano)
        {
            Console.WriteLine("PERSONAGEM ATACANDO!!");
            Console.WriteLine("Dano causado = " + dano);
        }

        public void movimentar(int direcao)
        {
            if (direcao == 1)
            {
                Console.WriteLine("Personagem se movendo para frente!");
            }
            else if (direcao == 2)
            {
                Console.WriteLine("Personagem se movendo para trás!");
            }
            else if (direcao == 3)
            {
                Console.WriteLine("Personagem se movendo para direita!");
            }
            else if (direcao == 4)
            {
                Console.WriteLine("Personagem se movendo para esquerda!");
            }
            else
            {
                Console.WriteLine("Direcao invalida!");
            }
        }
    }
}
