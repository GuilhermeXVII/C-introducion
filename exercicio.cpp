/*Escreva um algoritmo que armazene o valor 10 em uma variável A e o valor 20 em uma variável B.
A seguir (utilizando apenas atribuições entre variáveis) troque os seus conteúdos fazendo com que o
valor que está em A passe para B e vice-versa. Ao final, escrever os valores que ficaram armazenados
nas variáveis.
*/

#include<iostream>
int main(){
    int A{10};
    int B{20};

    int auxiliarA = A;
    int C{A=B};
    int D{B=auxiliarA};

    std::cout<<"Aqui está o valor de A: "<<C<<std::endl;
    std::cout<<"Aqui está o valor de B: "<<D<<std::endl;

}