#include <iostream>
using namespace std;

class Aluno{
    private:
        string nome;
        string disciplina[25];
        float nota[25];
        float media;
        int qtd;

    public:
        void obterDados();
        void exibirDados();
        float fazMedia();   
};