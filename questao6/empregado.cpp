#include <iostream>
#include "empregado.h"
using namespace std;

Empregado::Empregado(string n, string s, float sal){
    setNome(n);
    setSobrenome(s);
    setSalMensal(sal);
}

void Empregado::setNome(string no){
    nome = no;
}

string Empregado::getNome(){
    return nome;
}

void Empregado::setSobrenome(string so){
    sobrenome = so;
}

string Empregado::getSobrenome(){
    return sobrenome;
}

void Empregado::setSalMensal(float sa){
    if(sa < 0){
        salMensal = 0;
    }else{
        salMensal = sa;
    }
}

float Empregado::getSalMensal(){
    return salMensal;
}

void Empregado::mostrarSal(float multiplicador){
    cout << endl << "Nome: " << getNome() << " " << getSobrenome() << endl;
    cout << "Salário anual atual: R$" << getSalMensal() * 12 * multiplicador << ",00" << endl;
}