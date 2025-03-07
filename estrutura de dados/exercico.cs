/*
1) baseado no codigo anterior (lista de Integer), construir um programa em C# que receba, via teclado do usuario, n nomes de pessoas. 
Assim como no primeiro codigo: i) não podera haver nomes duplicados; ii) ao final do cadastro a lista deverá ser ordenada;
iii) o código deve permitir que o usuário digite um nome para pesquisa e o programa exclua esse nome da lista;
iv) exiba novamente a lista.
obs: em C#, como colocar em maiusculo um nome antes de armazena-lo na lista.
*/

List<string> ListaNomes = new List<string>();

//inserir nomes
string opcao;
string nome;

do
{
    Console.Write("Digite um nome completo: ");
    nome = Console.ReadLine();
    nome = nome.ToUpper();

    if (!ListaNomes.Contains(nome))
    {
        ListaNomes.Add(nome);
    } else
    {
        Console.WriteLine("Nome ja cadastrado!");
    }

    Console.Write("1 = Continua; 2 - Finaliza: ");
    opcao = Console.ReadLine();
} while (opcao != "2");

ListaNomes.Sort();
Console.WriteLine("A lista contem " + ListaNomes.Count());
foreach (var i in ListaNomes)
{
    Console.WriteLine(i);
}
