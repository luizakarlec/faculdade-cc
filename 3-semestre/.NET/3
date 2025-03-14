namespace Projeto
{
    internal class Program
    {
        static void Main(string[] args)
        {
            double x, y;
            Console.Write("Primeiro numero: ");
            x = double.Parse(Console.ReadLine());
            Console.Write("Segundo numero: ");
            y = double.Parse(Console.ReadLine());

            int opcao;
            Console.WriteLine("\nEscolha a operação: ");
            Console.WriteLine("1 - Adição");
            Console.WriteLine("2 - Subtração");
            Console.WriteLine("3 - Multiplicação");
            Console.WriteLine("4 - Divisão");
            Console.Write("Opção escolhida: ");
            opcao = int.Parse(Console.ReadLine());

            double soma, subtracao, multiplicacao, divisao;

            if(opcao == 1)
            {
                soma = x + y;
                Console.WriteLine("\nSOMA = " + soma.ToString("N2"));
            }
            else if (opcao == 2)
            {
                subtracao = x - y;
                Console.WriteLine("\nSUBTRACAO = " + subtracao.ToString("N2"));
            }
            else if (opcao == 3)
            {
                multiplicacao = x * y;
                Console.WriteLine("\nMULTIPLICACAO = " + multiplicacao.ToString("N2"));
            }
            else if (opcao == 4)
            {
                if (y == 0)
                {
                    Console.WriteLine("\nERRO! DIVISÂO POR 0");
                }
                else
                {
                    divisao = x / y;
                    Console.WriteLine("\nDIVISAO = " + divisao.ToString("N2"));
                }
            }
        }
    }
}
