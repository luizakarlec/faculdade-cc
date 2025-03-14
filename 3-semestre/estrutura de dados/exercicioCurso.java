import java.util.ArrayList;

public class exercicioCurso {
    public static void main(String[] args) {
        ArrayList<String>projetoBancodeDados = new ArrayList<>();
        ArrayList<String>estruturadeDados = new ArrayList<>();
        ArrayList<String>comunicacaodeDados = new ArrayList<>();
        ArrayList<ArrayList>listaCComp = new ArrayList<>(); //não da para ordenar (.sort()) lista com ArrayList

        projetoBancodeDados.add("luiza");
        projetoBancodeDados.add("frazzon");
        projetoBancodeDados.add("vanessa");
        projetoBancodeDados.add("eric");
        projetoBancodeDados.sort(null);
        listaCComp.add(projetoBancodeDados);
        //System.out.println(projetoBancodeDados);

        estruturadeDados.add("luiza");
        estruturadeDados.add("frazzon");
        estruturadeDados.add("vanessa");
        estruturadeDados.sort(null);
        listaCComp.add(estruturadeDados);

        comunicacaodeDados.add("luiza");
        comunicacaodeDados.add("bernardo");
        comunicacaodeDados.sort(null);
        listaCComp.add(comunicacaodeDados);

        System.out.println("Em quantas disciplinas cada aluno aparece");

        ArrayList<String>nomesAvaliados = new ArrayList<>();
        String nometmp;
        int contador = 0;

        //perconrre a lista
        for (ArrayList disciplina : listaCComp){
            for (Object aluno : disciplina){
                nometmp = aluno.toString();

                //verifica se o nome ja foi avaliado (se não esta na lista de avaliados)
                if(!nomesAvaliados.contains(nometmp)){
                    nomesAvaliados.add(nometmp); //add nome na lista de nomes avaliados
                    contador = 0;

                    //percorre a lista comparando com nometmp
                    for (ArrayList d : listaCComp){
                        for (Object a : d){
                                if(nometmp.equals(a.toString())){
                                    contador++;
                                }

                        }
                    } 
                    System.out.println(nometmp + " = " + contador + " disciplinas");
                }
            }
        }
    }
}
