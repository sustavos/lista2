#include <iostream>
#include "contaCorrente.h"
using namespace std;

int main(){
    ContaCorrente conta1(2000, 2000); 

    conta1.mostrarSaldo();
    conta1.fazerDeposito();
    conta1.fazerSaque();
    conta1.mostrarSaldo();

    return 0;
}