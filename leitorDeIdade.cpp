#include<iostream>
int main(){

    std::string nome;
    std::cout<<"Olá, entre com o seu nome:"<<std::endl;
    std::cin>>nome;

    int idadeUsuario;
    std::cout<<nome<<", agora com a sua idade:"<<std::endl;
    std::cin>>idadeUsuario;

    bool maiorDeIdade = idadeUsuario >= 18;
    bool menorDeIdade = idadeUsuario < 18;
    if(maiorDeIdade){
        std::cout<<nome<<", você é maior de idade!"<<std::endl;
    }else if(menorDeIdade){
        std::cout<<nome<<", você é menor de idade"<<std::endl;
    }
}
