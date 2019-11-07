#include <iostream>
#include "conta.h"
using namespace std;

class ContaCorrente : public Conta {
    private:
        float limite;

    public:
        ContaCorrente(float sal, float limit);
        ContaCorrente();

        void setLimite(float li);
        float getLimite();
        void fazerSaque();

        void mostrarSaldo();
};