import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

public class dicionarios {
    public static void main(String[] args) {

        //LISTA QUE VAI ARMAZENAR OS MAPAS
        List<Map<String,String>> listaDeDicionario = new ArrayList<>();

        //CRIANDO O PRIMEIRO DICIONARIO (MAPA)
        Map<String, String> dicionario1 = new HashMap<>();
        dicionario1.put("nome", "vanessa");
        dicionario1.put("idade", "22");

        //CRIANDO O PRIMEIRO DICIONARIO (MAPA)      
        Map<String, String> dicionario2 = new HashMap<>();
        dicionario2.put("nome", "luiza");
        dicionario2.put("idade", "20");

        //ADICIONANDO OS MAPAS NA LISTA
        listaDeDicionario.add(dicionario1);
        listaDeDicionario.add(dicionario2);

        //IMPRIMINDO OS DADOS

        for(Map<String,String> dicionario : listaDeDicionario){
            System.out.println("NOME: "+ dicionario.get("nome"));
            System.out.println("IDADE:" +dicionario.get("idade"));
            System.out.println("-----------");
        }

    }    
}
