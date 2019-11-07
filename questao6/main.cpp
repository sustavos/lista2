#include <iostream>
#include "empregado.h"
using namespace std;

int main(){

    Empregado empregado_1("João", "Silva", 1200.00);
    Empregado empregado_2("Gabriel", "Sousa", 2000.00);

    empregado_1.mostrarSal(1.0);
    empregado_2.mostrarSal(1.0);

    cout << endl << "Após aumento de 10%:" << endl;

    empregado_1.mostrarSal(1.10);
    empregado_2.mostrarSal(1.10);

    return 0;
}
