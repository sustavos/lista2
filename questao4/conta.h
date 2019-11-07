#include <iostream>
using namespace std;

class Conta{
    protected:
        float saldo;

    public:
        Conta(float sal);

        void setSaldo(float s);
        float getSaldo();
        void mostrarSaldo();

        void fazerDeposito();
        void fazerSaque();
};