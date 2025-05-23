namespace ExemploLampada
{
    internal class Lampada
    {
        public bool ligada;
        public double potencia;
        public string cor;

        public Lampada(double p, string c)
        {
            potencia = p;
            cor = c;
        }

        public void ligar()
        {
            if(!ligada)
            {
                ligada = true;
                Console.WriteLine("Ligando lâmpada!");
            }
            else
            {
                Console.WriteLine("Esta ligada!");
            }
        }
       
        public void desligar()
        {
            if(ligada)
            {
                ligada = false;
                Console.WriteLine("Desligando lâmpada!");
            }
            else
            {
                Console.WriteLine("Esta desligada!");
            }
        }
        public bool estaLigada()
        {
            return ligada;
        }
    }
}
