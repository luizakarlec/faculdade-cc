using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Ordenacao
{
    /// <summary>
    /// classe responsável por métodos de gestão de listas de números inteiros e listas de palavras
    /// </summary>
    internal class Util
    {
        /// <summary>
        /// método de classe que popula uma lista de números inteiros com valores aleatórios
        /// </summary>
        /// <param name="lista">estrutura de armazenamento dos números</param>
        /// <param name="quantidade">de números a serem gerados</param>
        /// <param name="inicio">valor inicial da extensão do número gerado</param>
        /// <param name="fim">valor final da extensão do número gerado</param>
        public static void popularAleatorioNumeros(List<int> lista, long quantidade, int inicio, int fim)
        {
            Random gerador = new Random();
            for (; quantidade > 0; quantidade--)
            {
                lista.Add(gerador.Next(inicio, fim));
            }
        }

        /// <summary>
        /// método estático que gera palavras aleatórias
        /// </summary>
        /// <param name="lista">armazena as palavras geradas</param>
        /// <param name="quantidade">de palavras a serem geradas</param>
        /// <param name="tamanho">das palavras a serem geradas</param>
        public static void popularAleatorioPalavras(List<string> lista, long quantidade, int tamanho)
        {
            string letras = "abcdefghijklmnopqrstuvwxyz ";
            Random gerador = new Random();

            for (; quantidade > 0; quantidade--)
            {
                string palavraGerada = "";
                char letraSorteada;

                for (int i = 0; i < tamanho; i++)
                {
                    letraSorteada = letras[gerador.Next(letras.Length)];
                    palavraGerada = palavraGerada + letraSorteada;
                }

                lista.Add(palavraGerada);
            }
        }

        /// <summary>
        /// método estático que exibe uma lista de números inteiros
        /// </summary>
        /// <param name="lista">contém números inteiros</param>
        public static void exibirListaNumeros(List<int> lista)
        {
            foreach (int item in lista)
            {
                Console.WriteLine(item);
            }
        }

        /// <summary>
        /// método estático que exibe uma lista de palavras
        /// </summary>
        /// <param name="lista">contendo palavras</param>
        public static void exibirListaPalavras(List<string> lista)
        {
            foreach (string item in lista)
            {
                Console.WriteLine(item);
            }
        }
    }
}
