//5) Escreva um algoritmo para ler um valor (do teclado) e escrever (na tela) o seu antecessor.
#include<iostream>
int main(){
    std::cout<<"Entre com um número para retornar o seu antecessor: "<<std::endl;
    int numeroUsuario;
    std::cin>>numeroUsuario;

    std::cout<<"O antecessor de:"<<numeroUsuario << " É: "<< numeroUsuario-1<<std::endl;
    

}