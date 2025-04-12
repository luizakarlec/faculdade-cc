namespace Exercicio01
{
    internal class Program
    {
        static void Main(string[] args)
        {

            Console.WriteLine("Informe os dados do aluno: ");
            Console.Write("Nome: ");
            String nome = Console.ReadLine();
            Console.Write("CPF: ");
            String cpf = Console.ReadLine();
            Console.Write("Curso: ");
            String curso = Console.ReadLine();
            Console.Write("Matricula: ");
            String matricula = Console.ReadLine();

            Aluno a = new Aluno(nome, cpf, curso, matricula);

            a.apresentaDados();
        }
    }
}
