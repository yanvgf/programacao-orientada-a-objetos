#ifndef PESSOA_H
#define PESSOA_H

#include <string>

using namespace std;

class Pessoa {
    private:
    string nome;
    int idade;

    public:
    Pessoa(const string &_nome, const int &_idade): nome(_nome), idade(_idade){}
    Pessoa(): nome("Indefinido"), idade(0){}
    virtual ~Pessoa(){}
    string getNome() const{ return nome; }
    int getIdade() const{ return idade; }
    void setNome(const string &_nome){ nome = _nome; }
    void setIdade(const int &_idade){ idade = _idade; }
};

#endif