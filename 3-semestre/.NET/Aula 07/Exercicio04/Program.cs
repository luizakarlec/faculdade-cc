namespace Exercicio04
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Livro l = new Livro();
            Eletronico e = new Eletronico();

            Console.Write("Digite o nome do livro: ");
            l.nome = Console.ReadLine();
            Console.Write("Digite o preco do livro: ");
            l.preco = double.Parse(Console.ReadLine());

            Console.Write("Digite o nome do eletronico: ");
            e.nome = Console.ReadLine();
            Console.Write("Digite o preco do eletronico: ");
            e.preco = double.Parse(Console.ReadLine());

            l.CalcularDesconto();
            e.CalcularDesconto();
        }
    }
}
