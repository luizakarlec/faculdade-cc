namespace Exercicio02
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Moto m = new Moto();
            Carro c = new Carro();

            Console.Write("Digite o modelo do carro: ");
            c.modelo = Console.ReadLine();
            Console.Write("Digite a marca do carro: ");
            c.marca = Console.ReadLine();
            Console.Write("Digite a cor do carro: ");
            c.cor = Console.ReadLine();

            Console.Write("Digite o modelo da moto: ");
            m.modelo = Console.ReadLine();
            Console.Write("Digite a marca da moto: ");
            m.marca = Console.ReadLine();
            Console.Write("Digite a cilindrada da moto: ");
            m.cilindrada = int.Parse(Console.ReadLine());

            c.Dirigir();
            m.Dirigir();
        }
    }
}
