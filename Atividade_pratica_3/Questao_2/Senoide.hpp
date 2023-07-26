#ifndef SENOIDE_H
#define SENOIDE_H

#include "Funcao.hpp"

class Senoide: public Funcao{
    public:
    // funcao virtual representando a funcao cuja integral deve ser calculada
    virtual double func(const double &input) const;
    // destrutor
    virtual ~Senoide(){}

};

#endif