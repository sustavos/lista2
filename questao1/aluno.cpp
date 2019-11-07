#include <iostream>
#include "aluno.h"
using namespace std;

void Aluno::obterDados(){

    cout << "Informe o nome: ";
    cin >> nome;

    cout << "Informe a qtd. de disciplinas: ";
    cin >> qtd;

    for(int i = 0; i < qtd; i++){
        cout << endl << "Informe o nome da disciplina: ";
        cin >> disciplina[i];
        cout << "Informe a nota da disciplina: ";
        cin >> nota[i];
    }
}

float Aluno::fazMedia(){
    float soma=0;

    for(int i = 0; i < qtd; i++){
        soma+= nota[i];
    }
    media = soma/qtd;

    return media;
}

void Aluno::exibirDados(){
    cout << endl << "O nome do aluno é: " << nome << endl << endl;
    
    for(int i = 0; i < qtd; i++){
        cout << "A nota da disciplina " << disciplina[i] << " é: " << nota[i] << endl;
    }

    cout << endl << "A média do aluno é: " << fazMedia() << endl;
}