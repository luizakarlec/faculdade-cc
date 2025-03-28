namespace Ex1
{
    internal class Program
    {
        static void Main(string[] args)
        {
            String nome, cpf;
            int rg, dia, mes, ano;

            Console.Write("Digite o nome da pessoa: ");
            nome = Console.ReadLine();
            Console.Write("Digite o CPF da pessoa: ");
            cpf = Console.ReadLine();
            Console.Write("Digite o dia de nascimento: ");
            dia = int.Parse(Console.ReadLine());
            Console.Write("Digite o mês de nascimento: ");
            mes = int.Parse(Console.ReadLine());
            Console.Write("Digite o ano de nascimento: ");
            ano = int.Parse(Console.ReadLine());
            Console.Write("Digite o RG da pessoa: ");
            rg = int.Parse(Console.ReadLine());

            DateTime dtNasc = new DateTime(ano, mes, dia);

            Pessoa p1 = new Pessoa(nome, cpf, dtNasc, rg);
            p1.retornar();
        }
    }
}
