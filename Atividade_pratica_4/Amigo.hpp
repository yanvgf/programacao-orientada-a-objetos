#ifndef AMIGO_H
#define AMIGO_H

#include "Pessoa.hpp"

class Amigo: public Pessoa{
    private:
    string aniversario;

    public:
    Amigo(): aniversario("Indefinido"){}
    virtual ~Amigo(){}
    string getAniv() const{ return aniversario; }
    void setAniv(const string &_aniversario){ aniversario = _aniversario; }
};

#endif