#include<iostream>
int main(){
    /*
    Exercício 1 — Comparações
    Crie um programa que:
    Leia dois números inteiros
    Crie variáveis booleanas para:
    são iguais
    primeiro é maior
    segundo é maiorImprima os valores booleanos (0 ou 1)
    */

    std::cout<<"Seja bem vindo!"<<std::endl;

    std::string nome;
    std::cout<<"Entre com o seu nome:"<<std::endl;
    std::cin>>nome;

    std::cout<<"Seja bem-vindo: "<<nome<<std::endl;

    int numeroInteiroA;
    int numeroInteiroB;

    std::cout<<"Entre com o primeiro número inteiro:    "<<std::endl;
    std::cin>>numeroInteiroA;

    std::cout<<"Entre com um segundo número inteiro:    "<<std::endl;
    std::cin>>numeroInteiroB;

    std::cout<<"Os seus números são:"<<numeroInteiroA<<" e "<<numeroInteiroB<<std::endl;

    bool iguais = numeroInteiroA == numeroInteiroB;
    bool primeiroMaior = numeroInteiroA > numeroInteiroB;
    bool segundoMaior = numeroInteiroB > numeroInteiroA;

    if(iguais){
        std::cout<<"Ele são iguais!"<<std::endl;
    }else if(primeiroMaior){
        std::cout<<"O prmeiro número é maior"<<std::endl;
    }else if(segundoMaior){
        std::cout<<"0"<<std::endl;
    }
}
