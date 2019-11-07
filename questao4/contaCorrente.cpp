#include <iostream>
#include "contaCorrente.h"
using namespace std;

ContaCorrente::ContaCorrente(float sal, float limit){
    Conta(sal);
    setLimite(limit);
}

ContaCorrente::ContaCorrente(){
    Conta(0);
    setLimite(0);
}


void ContaCorrente::setLimite(float li){
    limite = li;
}

float ContaCorrente::getLimite(){
    return limite;
}

void ContaCorrente::mostrarSaldo(){
    cout << "O saldo atual da conta é: R$" << getSaldo() + getLimite() << endl;
}

void ContaCorrente::fazerSaque(){
    float saque;

    cout << "Informe o valor do saque: R$";
    cin >> saque;

    if(saque > saldo + limite){
        cout << "Saldo insuficinte para o valor do saque desejado." << endl;
    }else{
        saldo -= saque;
    }
}