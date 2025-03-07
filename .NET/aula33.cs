namespace Aula
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

            double soma, subtracao, multiplicacao, divisao;
            soma = x + y;
            subtracao = x - y;
            multiplicacao = x * y;
            divisao = x / y;

            Console.WriteLine("\nSOMA = " + soma.ToString("N2"));
            Console.WriteLine("SUBTRACAO = " + subtracao.ToString("N2"));
            Console.WriteLine("MULTIPLICACAO = " + multiplicacao.ToString("N2"));
            Console.WriteLine("DIVISAO = " + divisao.ToString("N2"));
         }
    }
}
