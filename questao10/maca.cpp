#include <iostream>
#include "maca.h"
using namespace std;

Maca::Maca(string n){
    setCor(n);
    setNome("maçã");
}

Maca::Maca(){
    setCor("vermelha");
    setNome("maçã");
}
