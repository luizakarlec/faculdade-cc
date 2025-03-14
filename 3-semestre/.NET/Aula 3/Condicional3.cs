namespace Aula
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int num;
            Console.WriteLine("Digite um numero: ");
            num = int.Parse(Console.ReadLine());
            if (num % 4 == 0 && num % 3 == 0)
            {
                Console.WriteLine("Numero é divisivel por 2, 3 e 4 ao mesmo tempo!!");
            }
            else
            {
                Console.WriteLine("NAO é divisivel por 2, 3 e 4 ao mesmo tempo.");
            }
        }
    }
}
