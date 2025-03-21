namespace Exercicio01
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Jogo j = new Jogo();
            Console.WriteLine("JOGO: ");
            Console.Write("Digite o titulo: ");
            j.titulo = Console.ReadLine();
            Console.Write("Digite o gênero: ");
            j.genero = Console.ReadLine();
            Console.Write("Digite a plataforma: ");
            j.plataforma = Console.ReadLine();
            Console.Write("Digite o ano de lancamento: ");
            j.anoLancamento = int.Parse(Console.ReadLine());

            Console.WriteLine("\nTITULO = "+j.titulo);
            Console.WriteLine("GÊNERO = " + j.genero);
            Console.WriteLine("PLATAFORMA = " + j.plataforma);
            Console.WriteLine("ANO DE LANÇAMENTO = " + j.anoLancamento);
        }
    }
}
