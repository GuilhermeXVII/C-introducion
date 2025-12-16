#include<iostream>
int main(){
    std::cout<<"Olá mundo"<<std::endl;

    const int SENHA_ACESSO=479;
    int tentativas=0;

    while(tentativas<2){
        tentativas++;
        int senhaUsuario;
        std::cout<<"Entre com uma senha"<<std::endl;
        std::cin>>senhaUsuario;

        std::cout<<"A sua senha é: "<<senhaUsuario<<std::endl;
        bool acessoLiberado = SENHA_ACESSO==senhaUsuario;

        if(acessoLiberado){
            std::cout<<"Acesso liberado!"<<std::endl;
            break;
        }else{
            std::cout<<"Acesso negado!"<<std::endl;
        }
    }
}
