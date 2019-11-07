#include <iostream>
#include "fatura.h"
using namespace std;

int main(){

    Fatura minhaFatura("55895620002", "sapato", 2, 45.50);

    minhaFatura.mostrarFatura();

    return 0;
}