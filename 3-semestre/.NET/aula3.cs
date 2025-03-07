namespace Aula
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

            char c;
            Console.Write("Digite uma letra: ");
            c = char.Parse(Console.ReadLine());
            Console.WriteLine("Foi digitado: " + c);

            string nome;
            Console.Write("Digite  um nome: ");
            nome = Console.ReadLine();
            Console.WriteLine("Foi digitado: " + nome);
        }
    }
}
