namespace Projeto
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Lampada l1 = new Lampada(120, "rosa");
            Console.WriteLine("Potência: "+l1.potencia);
            Console.WriteLine("Cor: "+l1.cor);

            l1.desligar();
            l1.ligar();
            l1.ligar();
            l1.ligar();
            l1.ligar();
            l1.ligar();
            l1.desligar();
            l1.desligar();

            bool retorno = l1.estaLigada();
            Console.WriteLine("Retorno do método: "+retorno );
        }
    }
}
