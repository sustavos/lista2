#include <iostream>
using namespace std;

class Data{
    private:
        int dia;
        int mes;
        int ano;

    public:
        void setDia(int di);
        int getDia();

        void setMes(int me);
        int getMes();

        void setAno(int an);
        int getAno();

        void mostrarData();

        Data(int d, int m, int a);
};