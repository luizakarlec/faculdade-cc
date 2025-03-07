namespace Aula
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int num;
            Console.WriteLine("Digite um numero: ");
            num = int.Parse(Console.ReadLine());
            if (num % 2 == 0)
            {
                Console.WriteLine("Divisivel por 2!");
            }
            if (num % 4 == 0)
            {
                Console.WriteLine("Divisivel por 4!");
            }
            if (num % 8 == 0)
            {
                Console.WriteLine("Divisivel por 8!");
            }
        }
    }
}
