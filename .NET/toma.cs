namespace PrimeiroProjeto
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Oieeeeeeeeeeeee!!!! s2 >_< :D");
            int n1;
            int n2;
            int n3;

            n1 = 5;
            n2 = 3;

            n3 = n1 + n2;

            Console.WriteLine("N1 = "+n1);
            Console.WriteLine("N2 = "+n2);
            Console.WriteLine("N1 + N2 = "+n3);

            var dt = new DateTime();
            Console.WriteLine(dt);
            dt = DateTime.Now;
            Console.WriteLine(dt);

            Console.WriteLine("Dia = " + dt.Day);
            Console.WriteLine("Mes = " + dt.Month);
            Console.WriteLine("Ano = " + dt.Year);
            Console.WriteLine("Hora = " + dt.Hour);
            Console.WriteLine("Minuto = " + dt.Minute);
        }
    }
}
