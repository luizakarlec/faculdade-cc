namespace Encapsulamento
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Testando encapsulamento!");
            Produto p = new Produto();
            //p._codigo = 1234;
            p.Quantidade = 10;
            p.Codigo = 154;
            p.Nome = "Coca";
            p.Valor = "10.00";
            p.Exibir();
        }
    }
}
