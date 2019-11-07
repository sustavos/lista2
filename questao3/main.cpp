#include <iostream>
#include "conta.h"
using namespace std;

int main(){
    cout << "Acessando conta 1..." << endl << endl;

    Conta conta_1(0);   // Construtor inicializa o obejto da conta 1 com R$0,00

    conta_1.mostrarSaldo();
    conta_1.fazerDeposito();
    conta_1.fazerSaque();
    conta_1.mostrarSaldo();

    cout << endl << "Acessando conta 2..." << endl << endl;

    Conta conta_2(-10);   // Construtor inicializa o obejto da conta 2 com R$-10,00[INVÁLIDO]

    conta_2.mostrarSaldo();
    conta_2.fazerDeposito();
    conta_2.fazerSaque();
    conta_2.mostrarSaldo();

    return 0;
}
