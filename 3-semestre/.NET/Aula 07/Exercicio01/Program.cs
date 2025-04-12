namespace Exercicio01
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Professor p = new Professor();
            Aluno a = new Aluno();

            Console.Write("Digite o nome do professor: ");
            p.nome = Console.ReadLine();
            Console.Write("Digite a idade do professor: ");
            p.idade = int.Parse(Console.ReadLine());
            Console.Write("Digite a disciplina do professor: ");
            p.disciplina = Console.ReadLine();

            Console.Write("\nDigite o nome do aluno: ");
            a.nome = Console.ReadLine();
            Console.Write("Digite a idade do aluno: ");
            a.idade = int.Parse(Console.ReadLine());
            Console.Write("Digite a matricula do aluno: ");
            a.matricula = int.Parse(Console.ReadLine());

            p.apresentar();
            a.apresentar();
        }
    }
}
