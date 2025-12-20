/*Faça um algoritmo que leia a idade de uma pessoa expressa em anos, meses e dias e escreva a idade
dessa pessoa expressa apenas em dias. Considerar ano com 365 dias e mês com 30 dias.
*/

float converterIdade(float idade){
    return (idade * 365) + (idade*12) + (idade*30);
}
#include<iostream>
int main(){
    std::cout<<"Entre com a sua idade para converter ela em dias:"<<std::endl;
    int idadeUsuario;
    std::cin>>idadeUsuario;

    float idadeEmDias=(converterIdade(idadeUsuario));
    std::cout<<"Convertendo a sua idade em dias, você tem: "<<idadeEmDias<<std::endl;

}