#include <iostream>
using namespace std;

class Fatura{
    private:

        string numSerie;
        string descricaoP;
        int qtdItem;
        float precItem;
        float montante;

    public:
        Fatura(string nu, string de, int qu, float pr);

        void setNum(string n);
        string getNum();

        void setDesc(string d);
        string getDesc();

        void setQtd(int q);
        int getQtd();

        void setPrec(float p);
        float getPrec();

        float faturaTotal();

        void mostrarFatura();
};  
