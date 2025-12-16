#include<iostream>
using namespace std;
int main(){
    cout<<"*****************************************"<<endl;
    cout<<"*****Bem vindo ao jogo da advinhação!****"<<endl;
    cout<<"*****************************************"<<endl;

    const int NUMERO_SECRETO=42;
    bool naoAcertou=true;
    int tentativas=0;


    while(naoAcertou){
        tentativas++;
        int valorUsuario;
        cout<<"Entre com um número"<<endl;
        cout<<"tentativas:"<<tentativas<<endl;
        cin>>valorUsuario;

        cout<<"O seu número escolhido foi:"<<valorUsuario<<endl;

        bool acertou = NUMERO_SECRETO == valorUsuario;
        bool maior = valorUsuario > NUMERO_SECRETO;

        if(acertou){
            cout<<"Acertou, muito bem!"<<endl;
            naoAcertou=false;
        }else if(maior){
            cout<<"O seu chute foi bem maior"<<endl;
        }
        else{
            cout<<"O seu número e bem menor"<<endl;
        }
        cout<<"Fim de jogo!"<<endl;
        cout<<"Você acertou o número secreto em:"<<tentativas<< " tentativas"<<endl;
    }
}
