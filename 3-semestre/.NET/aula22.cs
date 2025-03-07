namespace PrimeiroProjeto
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int num;
            Console.Write("Digite um valor: ");
            num = int.Parse(Console.ReadLine());
            Console.WriteLine("Foi digitado: " + num);

            double num2;
            Console.Write("Digite um valor: ");
            num2 = double.Parse(Console.ReadLine());
            Console.WriteLine("Foi digitado: " + num2);
        }
    }
}
