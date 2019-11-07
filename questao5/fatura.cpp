#include <iostream>
#include "fatura.h"
using namespace std;

Fatura::Fatura(string nu, string de, int qu, float pr){
    setNum(nu);
    setDesc(de);
    setQtd(qu);
    setPrec(pr);
}

void Fatura::setNum(string n){
    numSerie = n;
}
string Fatura::getNum(){
    return numSerie;
}

void Fatura::setDesc(string d){
    descricaoP = d;
}
string Fatura::getDesc(){
    return descricaoP;
}

void Fatura::setQtd(int q){
    if(q < 0){
        qtdItem = 0;
    }else{
        qtdItem = q;
    }
}
int Fatura::getQtd(){
    return qtdItem;
}

void Fatura::setPrec(float p){
    if(p < 0){
        precItem =0;
    }else{
        precItem = p;
    }
}
float Fatura::getPrec(){
    return precItem;
}

float Fatura::faturaTotal(){
    montante = getQtd() * getPrec();

    return montante;
}

void Fatura::mostrarFatura(){
    cout << endl << "Item comprado: " << getDesc() << ". Número de série: " << getNum() << endl;
    cout << "Quantidade comprada: " << getQtd() << endl;
    cout << "Preço da unidade: R$" << getPrec() << endl;
    cout << "Valor da fatura: R$" << faturaTotal() << endl << endl;
}