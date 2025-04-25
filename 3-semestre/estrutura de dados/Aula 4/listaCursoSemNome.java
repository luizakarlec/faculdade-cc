import java.util.ArrayList;

public class listaCursoSemNome {
    public static void main(String[] args) {
        ArrayList<ArrayList<String>> cienciaComputacao = new ArrayList<>();
        //0 - estrutura de dados
        cienciaComputacao.add(new ArrayList<String>());
        //1 - banco de dados
        cienciaComputacao.add(new ArrayList<String>());
        //2 - ia
        cienciaComputacao.add(new ArrayList<String>());

        cienciaComputacao.get(0).add("Luiza");
        cienciaComputacao.get(0).add("Andrisa");
        cienciaComputacao.get(0).add("Caretta");
        cienciaComputacao.get(0).sort(null);

        cienciaComputacao.get(1).add("Andrisa");
        cienciaComputacao.get(1).add("Caretta");
        cienciaComputacao.get(1).sort(null);

        cienciaComputacao.get(2).add("Miguel");
        cienciaComputacao.get(2).add("Caretta");
        cienciaComputacao.get(2).sort(null);


        System.out.println("Em quantas disciplinas cada aluno aparece");
        ArrayList<String>nomesAvaliados = new ArrayList<>();
        String nometmp;
        int contador = 0;

        //perconrre a lista
        for (ArrayList disciplina : cienciaComputacao){
            for (Object aluno : disciplina){
                nometmp = aluno.toString();

                //verifica se o nome ja foi avaliado (se não esta na lista de avaliados)
                if(!nomesAvaliados.contains(nometmp)){
                    nomesAvaliados.add(nometmp); //add nome na lista de nomes avaliados
                    contador = 0;

                    //percorre a lista comparando com nometmp
                    for (ArrayList d : cienciaComputacao){
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
