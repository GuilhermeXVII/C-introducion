#include<iostream>
int main(){
    /*🔹 BLOCO 3 — BOOLEAN + DECISÃO LIMPA
    ✅ Exercício 5 — Sistema de aprovação
    Leia:
    nota (0 a 10)
    frequência (%)
    Crie:
    bool notaSuficiente;
    bool frequenciaSuficiente;
    bool aprovado;
    Regra:
    nota ≥ 7
    frequência ≥ 75
    aprovado deve ser a combinação lógica, não um if gigante.
    ex: (50 * 10) / 100)
     */

    std::cout<<"************************"<<std::endl;
    std::cout<<"**Sistema de aprovação**"<<std::endl;
    std::cout<<"************************"<<std::endl;

    int notaAluno;
    std::cout<<"Entre com a sua primeira nota:"<<std::endl;
    std::cin>>notaAluno;

    int frenquenciaAluno;
    std::cout<<"Entre com as suas frenquências"<<std::endl;
    std::cin>>frenquenciaAluno;

    int frenquenciaTotal = (frenquenciaAluno/200) * 100;

    bool aprovadoNota = notaAluno >= 7;
    bool aprovadoFrenquencia = frenquenciaTotal>= 75;

    if(aprovadoNota && aprovadoFrenquencia){
        std::cout<<"Aprovado com sucesso"<<std::endl;
    }else{
        std::cout<<"Reprovado"<<std::endl;
    }
}
