#include <iostream>
using namespace std;

class Empregado{
    private:
        string nome;
        string sobrenome;
        float salMensal;

    public:
        Empregado(string n, string s, float sal);

        void setNome(string no);
        string getNome();

        void setSobrenome(string so);
        string getSobrenome();

        void setSalMensal(float sa);
        float getSalMensal();

        void mostrarSal(float multiplicador);
};