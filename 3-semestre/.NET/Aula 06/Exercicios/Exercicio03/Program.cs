namespace Exercicio03
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Digite o nome do personagem: ");
            String nome = Console.ReadLine();
            Console.Write("Digite a posição do personagem: ");
            int posicao = int.Parse(Console.ReadLine());
            Console.Write("Digite os intens coletados: ");
            int itensColetados = int.Parse(Console.ReadLine());

            Personagem p = new Personagem(nome, posicao, itensColetados);

            p.atacar(2.3);
            p.atacar(9);
            p.movimentar(1);
            p.movimentar(2);
            p.movimentar(3);
            p.movimentar(4);
        }
    }
}
