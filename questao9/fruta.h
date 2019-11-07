#ifndef FRUTA_H
#define FRUTA_H
#include <iostream>
using namespace std;

class Fruta{
    protected:
        string cor;
        string nome;
    public:
        void setNome(string n);
        string getNome();
        void setCor(string c);
        string getCor();
};

#endif