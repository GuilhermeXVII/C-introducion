#include<iostream>
int main(){
    /*
    🔹 BLOCO 4 — DESAFIO (BOOLEAN DE VERDADE)
    Exercício 7 — Estado do sistema
    Leia:
    motorLigado (0 ou 1)
    velocidade
    Crie:
    bool podeAcelerar;
    Regras:
    motor ligado
    velocidade < 120
    Depois:
    use o boolean para decidir a mensagem
    */
    std::cout<<"***********************"<<std::endl;
    std::cout<<"****Estado do motor****"<<std::endl;
    std::cout<<"***********************"<<std::endl;

    int motor;
    std::cout<<"O seu motor está ligado?"<<std::endl;
    std::cout<<"Motor ligado: 0 ou 1 || Motor desligado: qualquer outro número"<<std::endl;
    std::cin>>motor;
    bool motorLigado = motor == 0 || motor == 1;

    int velocidade;
    std::cout<<"Velocidade por h"<<std::endl;
    std::cin>>velocidade;
    bool velocidadePermitida = velocidade <= 120;

    if(motorLigado && velocidadePermitida){
        std::cout<<"Pode rodar"<<std::endl;
    }else{
        std::cout<<"Não pode rodar!"<<std::endl;
    }
}
