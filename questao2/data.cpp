#include <iostream>
#include "data.h"
using namespace std;

Data::Data(int d, int m, int a){
    setDia(d);
    setMes(m);
    setAno(a);
}

void Data::setDia(int di){
    dia = di;
}

void Data::setMes(int me){

    if(me < 1 || me > 12){
        mes = 1;
    }else{
        mes = me;
    }

}

void Data::setAno(int an){
    ano = an;
}

int Data::getDia(){
    return dia;
}

int Data::getMes(){
    return mes;
}

int Data::getAno(){
    return ano;
}

void Data::mostrarData(){
    cout << getDia() << "/" << getMes() << "/" << getAno() << endl;
}