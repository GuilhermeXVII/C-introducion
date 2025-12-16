#include<iostream>
int main(){
    /*
      Exercício 4 — Faixa válida
    Leia um número e determine:
    bool dentroDoIntervalo;
    Condição:
    número entre 10 e 50 (inclusive)
    Depois:
    imprima se está válido ou não
     */

    std::cout<<"********************"<<std::endl;
    std::cout<<"****Faixa válida****"<<std::endl;
    std::cout<<"********************"<<std::endl;

    int numeroUsuario;
    std::cout<<"Entre com um número para verificar se ele está no intervalo entre 10 e 50"<<std::endl;
    std::cin>>numeroUsuario;

    bool dentroDoIntervalo = numeroUsuario >=10 && numeroUsuario <=50;
    bool maiorQue50 = numeroUsuario > 50;

    if(dentroDoIntervalo){
        std::cout<<"Está dentro do intervalo"<<std::endl;
        std::cout<<"Número: "<<numeroUsuario<<std::endl;
    }else if(maiorQue50){
        std::cout<<"Não se encontra dentro do intervalo, pois ele é maior que 50"<<std::endl;
    }else{
        std::cout<<"Não se encontra dentro do intervalo, pois ele é menor que 10"<<std::endl;
    }
}
