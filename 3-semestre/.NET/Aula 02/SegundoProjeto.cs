namespace SegundoProjeto
{
    internal class Program
    {
        static void Main(string[] args)
        {
            double nota1, nota2, nota3;
            Console.WriteLine("Atribuindo 3 notas para o aluno!");
            nota1 = 7.5;
            Console.WriteLine("Nota 1 = "+nota1);
            nota2 = 9.9;
            Console.WriteLine("Nota 2 = "+nota2);
            nota3 = 0.7;
            Console.WriteLine("Nota 3 = "+nota3);
            double media = (nota1 + nota2 + nota3) / 3;
            Console.WriteLine("Media = " + media.ToString("N2"));

            int i;
            i = 0;
            Console.WriteLine("i = " + i);
            i = i + 1;
            Console.WriteLine("i = " + i);
            i++;
            Console.WriteLine("i = " + i);
            i += 1;
            Console.WriteLine("i = " + i);
            i += 2;
            Console.WriteLine("i = " + i);
            i = i + 3;
            Console.WriteLine("i = " + i);

            Console.Write("escrevo mas ao final nao quebra linha... \n\n");
            Console.WriteLine("escrevo e quebra linha...");

            Console.WriteLine("\nVamos manipular strings");
            string frase1 = "Frase da declaracao de variavel com string";
            String frase2 = "Frase da declaracao de variavel com String";
            //concatenando string
            Console.WriteLine("Concatenando strings");
            Console.WriteLine("Frase 1 = "+frase1);
            Console.WriteLine("Frase 2 = "+frase2);
            //interpolação de string
            Console.WriteLine("Interpolando strings");
            Console.WriteLine($"Frase 1 = {frase1}");
            Console.WriteLine($"Frase 2 = {frase2}");
        }
    }
}
