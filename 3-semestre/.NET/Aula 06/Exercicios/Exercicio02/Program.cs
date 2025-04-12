namespace Exercicio02
{
    internal class Program
    {
        static void Main(string[] args)
        {
            String nome, autor;
            int anoPublicacao;

            Console.WriteLine("Livro 1");
            Console.Write("Digite o nome do livro: ");
            nome = Console.ReadLine();
            Console.Write("Digite o nome do autor do livro: ");
            autor = Console.ReadLine();
            Console.Write("Digite o ano de publicação do livro: ");
            anoPublicacao = int.Parse(Console.ReadLine());

            Livro l = new Livro(nome, autor, anoPublicacao);

            Console.WriteLine("Livro 2");
            Console.Write("Digite o nome do livro: ");
            nome = Console.ReadLine();
            Console.Write("Digite o nome do autor do livro: ");
            autor = Console.ReadLine();
            Console.Write("Digite o ano de publicação do livro: ");
            anoPublicacao = int.Parse(Console.ReadLine());

            Livro l2 = new Livro(nome, autor, anoPublicacao);

            l.emprestar();
            l.emprestar();
            l.devolver();
            l.devolver();


        }
    }
}
