namespace Aula4
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int x = 1;

            while (x != 0)
            {
                Console.Write("Digite 0 para encerrar o laço: ");
                x = int.Parse(Console.ReadLine());
            }
            
         
        }
    }
}
