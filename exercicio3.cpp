/*6) Escreva um algoritmo para ler as dimensões de um retângulo (base e altura), calcular e escrever a
área do retângulo.
*/

#include<iostream>
int calcularRetangulo(int base, int altura){
    return base * altura;
}

int main(){
    std::cout<<"Entre com a base do seu retângulo:"<<std::endl;
    int baseRetangulo;
    std::cin>>baseRetangulo;

    std::cout<<"Entre com a altura do seu retângulo"<<std::endl;
    int alturaRetangulo;
    std::cin>>alturaRetangulo;

    int calculandoRetangulo = calcularRetangulo(baseRetangulo, alturaRetangulo);
    std::cout<<"O valor do seu retângulo é:"<<calculandoRetangulo<<std::endl;

}