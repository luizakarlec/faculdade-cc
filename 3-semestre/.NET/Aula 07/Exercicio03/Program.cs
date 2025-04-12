namespace Exercicio03
{
    internal class Program
    {
        static void Main(string[] args)
        {
            
            ContaCorrente cc = new ContaCorrente();
            ContaPoupanca cp = new ContaPoupanca();

            Console.Write("Digite o valor que deseja depositar na Conta Corrente: ");
            cc.deposito = double.Parse(Console.ReadLine());
            cc.Depositar();

            Console.Write("Digite o valor que deseja sacar da Conta Corrente: ");
            cc.saque = double.Parse(Console.ReadLine());
            cc.Sacar();

            Console.Write("Digite o valor que deseja depositar na Conta Poupanca: ");
            cp.deposito = double.Parse(Console.ReadLine());
            cp.Depositar();

            Console.Write("Digite o valor que deseja sacar da Conta Poupanca: ");
            cp.saque = double.Parse(Console.ReadLine());
            cp.Sacar();

        }
    }
}
