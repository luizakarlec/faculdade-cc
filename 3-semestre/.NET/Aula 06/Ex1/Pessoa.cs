namespace Ex1
{
    internal class Pessoa
    {
        public String nome;
        public String cpf;
        public DateTime dataNascimento;
        public int rg;

        public Pessoa(String nome, String cpf, DateTime dataNascimento, int rg)
        {
            this.nome = nome;
            this.cpf = cpf;
            this.dataNascimento = dataNascimento;
            this.rg = rg;
        }

        public void retornar()
        {
            Console.WriteLine("\nNome: "+nome);
            Console.WriteLine("CPF: "+cpf);
            Console.WriteLine("Data de nascimento = " + dataNascimento.ToString("d"));
            Console.WriteLine("RG: "+rg);
        }
    }
}
