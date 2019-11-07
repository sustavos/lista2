#include <iostream>
#include "conta.h"
using namespace std;

Conta::Conta(float sal){
    setSaldo(sal);
}

void Conta::setSaldo(float s){
    if(s >= 0){
        saldo = s;
    }else{
        saldo = 0;
        cout << "Saldo inicial inválido!" << endl;
    }
}

float Conta::getSaldo(){
    return saldo;
}

void Conta::fazerDeposito(){
    float temp;

    cout << "Informe o valor do depósito: R$";
    cin >> temp;

    saldo += temp;
}

void Conta::fazerSaque(){
    float saque;

    cout << "Informe o valor do saque: R$";
    cin >> saque;

    if(saque > saldo){
        cout << "Saldo insuficinte para o valor do saque desejado." << endl;
    }else{
        saldo -= saque;
    }
}

void Conta::mostrarSaldo(){
    cout << "O saldo atual da conta é: R$" << getSaldo() << endl;
}