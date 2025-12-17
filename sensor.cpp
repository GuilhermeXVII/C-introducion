#include<iostream>
int main(){
    /* Exercício 6 — Sensor (estilo automotivo)
    Leia:
    temperatura
    pressão
    Crie:
    bool temperaturaOk;
    bool pressaoOk;
    bool sistemaSeguro;
    Regras:
    temp entre 70 e 90
    pressão entre 30 e 40
    Se sistemaSeguro == false, exiba alerta.
    Isso é lógica de sistema real, não exercício escolar.*/

    std::cout<<"***********************"<<std::endl;
    std::cout<<"***Sensor Automotivo***"<<std::endl;
    std::cout<<"***********************"<<std::endl;

    int temperaturaCarro;
    std::cout<<"Entre com a temperatura do seu carro:   "<<std::endl;
    std::cin>>temperaturaCarro;

    int pressaoCarro;
    std::cout<<"Entre com o nível de pressão do seu carro:  "<<std::endl;
    std::cin>>pressaoCarro;

    bool temperaturaSegura = temperaturaCarro >= 70 && temperaturaCarro <=90;
    bool pressaoEquilibrada = pressaoCarro >=30 && pressaoCarro <= 40;

    if(temperaturaSegura && pressaoEquilibrada){
        std::cout<<"Sistema seguro"<<std::endl;
    }else{
        std::cout<<"Sistema fora de modo operante!"<<std::endl;
    }
}
