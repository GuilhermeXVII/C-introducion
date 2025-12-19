#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    cout<<"*****************************************"<<endl;
    cout<<"*****Bem vindo ao jogo da advinhação!****"<<endl;
    cout<<"*****************************************"<<endl;

    cout<<"Escolha o nível de dificuldade:"<<endl;
    cout<<"Fácil (F), Médio (M), ou Difícil (D)"<<endl;
    char dificuldade;
    cin>>dificuldade;

    int numeroDeTentativas;
    if(dificuldade == 'F'){
        numeroDeTentativas=15;
    }else if(dificuldade == 'M'){
        numeroDeTentativas=10;
    }else{
        numeroDeTentativas=5;
    }

    srand(time(NULL));
    const int NUMERO_SECRETO=rand() % 100;

    bool naoAcertou=true;
    int tentativas=0;

    double pontos = 1000; 
    for(tentativas=1;tentativas<=numeroDeTentativas;tentativas++){
        int valorUsuario;
        cout<<"Entre com um número"<<endl;
        cout<<"tentativas:"<<tentativas<<endl;
        cin>>valorUsuario;

        double pontosPerdidos= abs(valorUsuario - NUMERO_SECRETO)/2.0;
        pontos = pontos - pontosPerdidos;

        cout<<"O seu número escolhido foi:"<<valorUsuario<<endl;

        bool acertou = NUMERO_SECRETO == valorUsuario;
        bool maior = valorUsuario > NUMERO_SECRETO;

        if(acertou){
            cout<<"Acertou, muito bem!"<<endl;
            naoAcertou=false;
            break;
        }else if(maior){
            cout<<"O seu chute foi bem maior"<<endl;
        }
        else{
            cout<<"O seu número e bem menor"<<endl;
        }
        cout<<"Fim de jogo!"<<endl;
        if(naoAcertou){
            cout<<"Você perdeu, tente novamente!"<<endl;
        }
        cout<<"Você chutou  o número secreto em:"<<tentativas<< " vezes."<<endl;
        cout.precision(2);
        cout<<fixed;
        cout<<"Sua pontuação foi de:"<<pontos<<endl;
    }
}
